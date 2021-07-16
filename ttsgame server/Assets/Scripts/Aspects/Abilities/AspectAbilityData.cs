using UnityEngine;
using RiptideNetworking;
using System.Collections.Generic;
using System.Linq;
using Random = UnityEngine.Random;

[CreateAssetMenu(fileName = "New Ability", menuName = "Aspects/Abilities/Standard")]
public class AspectAbilityData : ScriptableObject
{
    public string Name = default;
    [TextArea]
    public string Description = default;
    [Space]
    public int ActionPointCost = default;
    [Space]
    public AbilityTargeting Targeting = default;
    public AbilityAction[] Actions = default;

    public virtual void TriggerAbility(IEntityBehaviour _caster, Message _message)
    {
        List<IEntityBehaviour> targets = FilterEntities(_caster, _message);

        for (int i = 0; i < Actions.Length; i++)
            Actions[i].InvokeAction(_caster, targets);
    }

    protected virtual List<IEntityBehaviour> FilterEntities(IEntityBehaviour _caster, Message _message)
    {
        List<IEntityBehaviour> final = new List<IEntityBehaviour>();

        if (Targeting.Type == TargetingType.None)
            return final;

        List<IEntityBehaviour> toRemove = new List<IEntityBehaviour>();

        if (Targeting.Type == TargetingType.Self)
        {
            final.Add(_caster);
            return final;
        }

        foreach (IEntityBehaviour entity in GameManager.Entities.Values)
        {
            bool entityNeutrality = entity.GroupingID == 0;
            bool entityAlly = entity.GroupingID == _caster.GroupingID;

            if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Neutral) == TargetFilter.TargetingRelation.Neutral && entityNeutrality)
                final.Add(entity);
            else if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Enemy) == TargetFilter.TargetingRelation.Enemy && !entityAlly && !entityNeutrality)
                final.Add(entity);
            else if ((Targeting.Filter.TargetType & TargetFilter.TargetingRelation.Ally) == TargetFilter.TargetingRelation.Ally)
                final.Add(entity);
        }

        for (int i = 0; i < Targeting.Filter.SelectionFilters.Length; i++)
        {
            toRemove.Clear();
        
            SelectionFilter activeSelectFilter = Targeting.Filter.SelectionFilters[i];
            Vector2 offsetPos = _caster.MapPosition + activeSelectFilter.LocalOffset;
            bool maxTargetsNot0 = activeSelectFilter.MaxValidTargets > 0;
        
            switch (activeSelectFilter.Type)
            {
                case SelectionFilter.FilterType.Closest:
                    {
                        List<(IEntityBehaviour Entity, uint Dist)> inRange = new List<(IEntityBehaviour Entity, uint Dist)>();
        
                        for (int j = 0; j < final.Count; j++)
                            if (Utilities.GetChebyshevDistance(offsetPos, final[j].MapPosition, activeSelectFilter.Range, out uint _dist))
                                inRange.Add((final[j], _dist));
        
                        inRange = inRange.OrderBy(entity => entity.Dist).ToList();
                        final.Clear();
        
                        if(maxTargetsNot0)
                            for (int j = 0; j < activeSelectFilter.MaxValidTargets; j++)
                            {
                                if (j > inRange.Count)
                                    break;
                                final.Add(inRange[j].Entity);
                            }
                        else
                            final.Add(inRange[0].Entity);
                        break;
                    }
                case SelectionFilter.FilterType.ClientDesignated:
                    {
                        int[] targetIds = _message.GetInts();
                        
                        for (int k = 0; k < final.Count; k++)
                        {
                            bool found = false;
                            for (int l = 0; l < targetIds.Length; l++)
                                if (final[k].EntityID == targetIds[l])
                                    found = true;
        
                            if (!found)
                                toRemove.Add(final[k]);
                        }
                        break;
                    }
                case SelectionFilter.FilterType.Radius:
                    {
                        for (int j = 0; j < final.Count; j++)
                            if (!Utilities.GetChebyshevDistance(offsetPos, final[j].MapPosition, activeSelectFilter.Range))
                                toRemove.Add(final[j]);
        
                        if (maxTargetsNot0)
                        {
                            final.RemoveAll(x => toRemove.Contains(x));
                            if(final.Count > activeSelectFilter.MaxValidTargets)
                            {
                                final.RemoveRange((int)activeSelectFilter.MaxValidTargets, (int)(final.Count - activeSelectFilter.MaxValidTargets));
                                final.TrimExcess();
                            }
                        }
                        break;
                    }
                case SelectionFilter.FilterType.Random:
                    {
                        int[] inRange = new int[activeSelectFilter.MaxValidTargets];
        
                        for (int j = 0; j < activeSelectFilter.MaxValidTargets; j++)
                            inRange[j] = Random.Range(0, final.Count - 1);
        
                        for (int k = 0; k < final.Count; k++)
                        {
                            bool found = false;
                            for (int l = 0; l < inRange.Length; l++)
                                if (k == inRange[l])
                                    found = true;
        
                            if (!found)
                                toRemove.Add(final[k]);
                        }
                        break;
                    }
            }
            final.RemoveAll(x => toRemove.Contains(x));
        }

        return final;
    }
}
