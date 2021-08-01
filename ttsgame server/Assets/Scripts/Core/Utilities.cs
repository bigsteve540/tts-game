using RiptideNetworking;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;

public struct InterruptData
{
    public int TriggererID { get; }
    public InterruptEventType InterruptFlags { get; }

    public object[] ExtraInterruptData { get; }

    public InterruptData(int _triggererID, InterruptEventType _interruptTypes, params object[] _extraData) //set flags with | operator
    {
        TriggererID = _triggererID;
        InterruptFlags = _interruptTypes;
        ExtraInterruptData = _extraData.Length > 0 ? _extraData : null;
    }
}

public static class Utilities
{
    private const float GRADIENT = 8 / 360;

    public static bool GetChebyshevDistance(Vector2 _origin, Vector2 _target, uint _maxDist)
    {
        uint dist = (uint)Mathf.Max(Mathf.Abs(_target.x - _origin.x), Mathf.Abs(_target.y - _origin.x));
        if (dist > _maxDist)
            return false;
        return true;
    }
    public static bool GetChebyshevDistance(Vector2 _origin, Vector2 _target, uint _maxDist, out uint _distToTarget)
    {
        uint dist = (uint)Mathf.Max(Mathf.Abs(_target.x - _origin.x), Mathf.Abs(_target.y - _origin.y));
        if (dist > _maxDist)
        {
            _distToTarget = 0;
            return false;
        }
        _distToTarget = dist;
        return true;
    }

    public static uint ConvertDegToCardinal(float _input){ return (uint)Mathf.RoundToInt(GRADIENT * _input); }

    public static void GenericMovement(IEntityBehaviour _aspect, int _newX, int _newY)
    {
        Vector2 newPos = new Vector2(_newX, _newY);

        List<Node> path = Tilemap.GeneratePathToTile(_aspect.MapPosition, newPos);
        int pathCost = GetInitiativeCostForPath(path);

        InterruptData data = new InterruptData(_aspect.EntityID, InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby);

        if (GameEventSystem.CheckEventInterrupted(data) || pathCost > _aspect.CurrentActionPoints)
            return;

        _aspect.FacingDirection = ConvertDegToCardinal(Vector2.Angle(Vector2.up, _aspect.MapPosition - newPos));
        _aspect.MapPosition = newPos;

        Tilemap.MoveEntityBetweenTiles(_aspect.MapPosition, newPos);

        //TODO:
        //Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.UpdateEntityPosition);
        //msg.Add(_aspect.Code);
        //msg.Add(newPos);
    }
    public static uint GenericModifyHealth(IEntityBehaviour _target, HealthModifiedEventInfo _hpModData, bool _ignoreEffectors = false) //TODO: split this into uniquely interruptable events
    {
        InterruptData interruptData = new InterruptData(_target.EntityID, Mathf.Sign(_hpModData.Value) == -1 ? InterruptEventType.Damage : InterruptEventType.Heal, _hpModData);

        if (GameEventSystem.CheckEventInterrupted(interruptData)) //TODO: should probably make it so interruption can also effect _hpmoddata 
            return _target.CurrentHP;

        if (!_ignoreEffectors)
            GameEventSystem.CallEvent(_hpModData); //instead of calling a separate method

        float prevHP = _target.CurrentHP;
        float val = 0f;

        switch (_hpModData.Type)
        {
            case StatModifierType.Flat:
                val = (int)_hpModData.Value;
                break;
            case StatModifierType.Max:
                val = (int)(_target.MaxHP * _hpModData.Value);
                break;
            case StatModifierType.Missing:
                val = (int)((_target.MaxHP - _target.CurrentHP) * _hpModData.Value);
                break;
            case StatModifierType.Current:
                val = (int)(_target.CurrentHP * _hpModData.Value);
                break;
        }

        if (_hpModData.IsDamage())
            val = Mathf.Clamp((val * -1) - _target.CurrentArmor, 0f, val * -1) * -1;

        //client msg to update ui with val
        return (uint)Mathf.Clamp(_target.CurrentHP + val, 0f, _target.MaxHP);
    }

    public static int GetInitiativeCostForPath(List<Node> _path)
    {
        int total = 0;
        for (int i = 0; i < _path.Count - 1; i++)
            for (int j = 0; j < _path[i].Edges.Length; j++)
                if (_path[i].Edges[j] == _path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }
    public static int GetInitiativeCostForPath(Vector2 _origin, Vector2 _goal)
    {
        List<Node> path = Tilemap.GeneratePathToTile(_origin, _goal);
        int total = 0;
        for (int i = 0; i < path.Count - 1; i++)
            for (int j = 0; j < path[i].Edges.Length; j++)
                if (path[i].Edges[j] == path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }

    public static List<IEntityBehaviour> FilterEntities(IEntityBehaviour _caster, AbilityTargeting _targetFilter, Message _message)
    {
        if (_targetFilter.Type == TargetingType.None)
            return null;

        List<IEntityBehaviour> final;

        if (_targetFilter.Type == TargetingType.Self)
            return new List<IEntityBehaviour> { _caster };

        final = FilterByRelation(_caster.GroupingID, _targetFilter.Filter);
        List<IEntityBehaviour> toRemove = new List<IEntityBehaviour>(GameManager.Entities.Count);

        for (int i = 0; i < _targetFilter.Filter.SelectionFilters.Length; i++)
        {
            toRemove.Clear();
            FilterSettings settings = new FilterSettings(_caster.MapPosition, ref _targetFilter.Filter.SelectionFilters[i]);

            switch (settings.TargetFilter.Type)
            {
                case SelectionFilter.FilterType.Closest:
                    FilterClosest(settings, ref final, ref toRemove);
                    break;
                case SelectionFilter.FilterType.ClientDesignated:
                    FilterClientDesignated(_message.GetInts(), ref final, ref toRemove);
                    break;
                case SelectionFilter.FilterType.Radius:
                    FilterRadius(settings, ref final, toRemove);
                    break;
                case SelectionFilter.FilterType.Random:
                    FilterRandom(settings.TargetFilter, ref final, ref toRemove);
                    break;
            }
            final.RemoveAll(x => toRemove.Contains(x));
        }
        return final;
    }
    public static List<Vector2> FilterTiles() //TODO
    {
        return null;
    }

    private static List<IEntityBehaviour> FilterByRelation(int _selfGroupID, TargetFilter _filter)
    {
        List<IEntityBehaviour> final = new List<IEntityBehaviour>();
        foreach (IEntityBehaviour entity in GameManager.Entities.Values)
        {
            bool entityNeutrality = entity.GroupingID == 0;
            bool entityAlly = entity.GroupingID == _selfGroupID;

            if ((_filter.TargetType & TargetFilter.TargetingRelation.Neutral) == TargetFilter.TargetingRelation.Neutral && entityNeutrality)
                final.Add(entity);
            else if ((_filter.TargetType & TargetFilter.TargetingRelation.Enemy) == TargetFilter.TargetingRelation.Enemy && !entityAlly && !entityNeutrality)
                final.Add(entity);
            else if ((_filter.TargetType & TargetFilter.TargetingRelation.Ally) == TargetFilter.TargetingRelation.Ally)
                final.Add(entity);
        }
        return final;
    }

    private static void FilterClosest(FilterSettings _settings, ref List<IEntityBehaviour> _targetList, ref List<IEntityBehaviour> _removerList)
    {
        List<(IEntityBehaviour Entity, uint Dist)> inRange = new List<(IEntityBehaviour Entity, uint Dist)>();

        for (int i = 0; i < _targetList.Count; i++)
            if (Utilities.GetChebyshevDistance(_settings.OffsetPosition, _targetList[i].MapPosition, _settings.TargetFilter.Range, out uint _dist))
                inRange.Add((_targetList[i], _dist));

        inRange = inRange.OrderBy(entity => entity.Dist).ToList();
        _targetList.Clear();

        if (_settings.MaxTargetsNot0)
            for (int i = 0; i < _settings.TargetFilter.MaxValidTargets; i++)
            {
                if (i > inRange.Count)
                    break;
                _targetList.Add(inRange[i].Entity);
            }
        else
            _targetList.Add(inRange[0].Entity);
    }
    private static void FilterClientDesignated(int[] _ids, ref List<IEntityBehaviour> _targetList, ref List<IEntityBehaviour> _removerList)
    {
        for (int i = 0; i < _targetList.Count; i++)
        {
            bool found = false;
            for (int l = 0; l < _ids.Length; l++)
                if (_targetList[i].EntityID == _ids[l])
                    found = true;

            if (!found)
                _removerList.Add(_targetList[i]);
        }
    }
    private static void FilterRadius(FilterSettings _settings, ref List<IEntityBehaviour> _targetList, List<IEntityBehaviour> _removerList)
    {
        for (int j = 0; j < _targetList.Count; j++)
            if (!Utilities.GetChebyshevDistance(_settings.OffsetPosition, _targetList[j].MapPosition, _settings.TargetFilter.Range))
                _removerList.Add(_targetList[j]);

        if (_settings.MaxTargetsNot0)
        {
            _targetList.RemoveAll(x => _removerList.Contains(x));
            if (_targetList.Count > _settings.TargetFilter.MaxValidTargets)
            {
                _targetList.RemoveRange((int)_settings.TargetFilter.MaxValidTargets, (int)(_targetList.Count - _settings.TargetFilter.MaxValidTargets));
                _targetList.TrimExcess();
            }
        }
    }
    private static void FilterRandom(SelectionFilter _filter, ref List<IEntityBehaviour> _targetList, ref List<IEntityBehaviour> _removerList)
    {
        int[] inRange = new int[_filter.MaxValidTargets];

        for (int j = 0; j < _filter.MaxValidTargets; j++)
            inRange[j] = Random.Range(0, _targetList.Count - 1);

        for (int k = 0; k < _targetList.Count; k++)
        {
            bool found = false;
            for (int l = 0; l < inRange.Length; l++)
                if (k == inRange[l])
                    found = true;

            if (!found)
                _removerList.Add(_targetList[k]);
        }
    }

    private struct FilterSettings
    {
        public SelectionFilter TargetFilter { get; }
        public Vector2 OffsetPosition { get; }
        public bool MaxTargetsNot0 { get; }

        public FilterSettings(Vector2 _casterPos, ref SelectionFilter _targetFilter)
        {
            TargetFilter = _targetFilter;
            OffsetPosition = _casterPos + TargetFilter.LocalOffset;
            MaxTargetsNot0 = TargetFilter.MaxValidTargets > 0;
        }
    }
}
