using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Flags]
public enum MitigationType { Pre, Post }
public enum ValueEffectorType { Flat, Missing, Current, Max }
public enum EntityValueType { Health, Initiative, Action_Points }

public struct ValueEffector
{
    public int CasterID { get; }
    public object Source { get; }

    public MitigationType MitType { get; }
    public ValueEffectorType EffectType { get; }
    public float Value { get; }

    public ValueEffector(int _casterID, object _source, ValueEffectorType _valType, float _val, MitigationType _mitType = MitigationType.Pre | MitigationType.Post)
    {
        CasterID = _casterID;
        Source = _source;
        MitType = _mitType;
        EffectType = _valType;
        Value = _val;
    }
}

public class EntityValue : EntityStatistic
{
    public int MeterValue { get; private set; }
    public EntityValueType MeterType { get; }

    private MitigationEventInfo mitEventInfo;
    private EntityValueEffectParameters parameters;

    private System.Func<int, int> mitigator { get; }
    private int entityID { get; }

    public void Modify(ValueEffector _meterEffector)
    {
        if (parameters == null)
            parameters = new EntityValueEffectParameters(entityID, this, MeterType, _meterEffector.Value);

        InterruptData interruptData = new InterruptData(entityID, InterruptEventType.Entity_Meter_Modify, parameters);
        if (GameEventSystem.CheckEventInterrupted(interruptData))
            return;

        float modVal = Mathf.Abs(_meterEffector.Value) * (Mathf.Sign(_meterEffector.Value) == 1 ? 1 : -1);
        int newVal = 0;

        switch (_meterEffector.EffectType)
        {
            case ValueEffectorType.Flat:
                newVal += (int)modVal;
                break;
            case ValueEffectorType.Max:
                newVal += Mathf.RoundToInt(Current * modVal);
                break;
            case ValueEffectorType.Current:
                newVal += Mathf.RoundToInt(MeterValue * modVal);
                break;
            case ValueEffectorType.Missing:
                newVal += Mathf.RoundToInt((Current - MeterValue) * modVal);
                break;
        }

        if (mitigator != null)
        {
            TriggerMitigationEvents(_meterEffector.MitType, MitigationType.Pre, newVal);
            newVal = mitigator(newVal);
            TriggerMitigationEvents(_meterEffector.MitType, MitigationType.Post, newVal);
        }

        GameEventSystem.CallEvent(new OnMeterModified(entityID, MeterType, _meterEffector, MeterValue, Mathf.Clamp(MeterValue + newVal, 0, Current)));
        MeterValue = Mathf.Clamp(MeterValue + newVal, 0, Current);
    }

    public void FillToCurrentMaximum() { Modify(new ValueEffector(entityID, this, ValueEffectorType.Max, 1f)); }
    public void SetMeterValueTo0() { Modify(new ValueEffector(entityID, this, ValueEffectorType.Max, -1f)); }

    private void TriggerMitigationEvents(MitigationType _flags, MitigationType _typeToMit, int _val)
    {
        if (_flags.HasFlag(_typeToMit))
        {
            if (mitEventInfo == null)
                mitEventInfo = new MitigationEventInfo(_typeToMit, this, _val);
            else
                mitEventInfo.Effector = this;
            GameEventSystem.CallEvent(mitEventInfo);
            MeterValue = mitEventInfo.Effector.MeterValue;
        }
    }

    public EntityValue(int _entityID, EntityValueType _meterType) : base()
    {
        entityID = _entityID;
        MeterType = _meterType;
    }
    public EntityValue(int _entityID, EntityValueType _valType, int _value) : base(_value, _value, new List<IStatModifier>())
    {
        entityID = _entityID;
        MeterType = _valType;
    }

    public EntityValue(int _entityID, EntityValueType _valType, int _value, System.Func<int, int> _mitigator) 
        : this(_entityID, _valType, _value, _value, _value, new List<IStatModifier>(), _mitigator) {  }

    public EntityValue(int _entityID, EntityValueType _valType, int _value, int _base, int _current, List<IStatModifier> _mods, System.Func<int, int> _mitigator) 
        : base(_base, _current, _mods)
    {
        MeterType = _valType;
        entityID = _entityID;
        mitigator = _mitigator;
        MeterValue = _value;
    }
}
