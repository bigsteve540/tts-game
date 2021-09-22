using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum StatModifierType { Flat, Max, Missing, Current }
public struct HealthDataPacket
{
    public int CasterID { get; private set; }
    public object Source { get; private set; }

    public StatModifierType Type { get; private set; }
    public float Value { get; private set; } //negative for damage positive for healing

    public bool IgnoresArmor { get; }

    public bool IsDamage { get { return Mathf.Sign(Value) == -1; } }
    public void ChangeValue(int _val) { Value = _val; }

    public HealthDataPacket(int _casterID, object _source, StatModifierType _type, float _value, bool _ignoresArmor)
    {
        CasterID = _casterID;
        Source = _source;
        Type = _type;
        Value = _value;
        IgnoresArmor = _ignoresArmor;
    }
}
[System.Flags]
public enum MitigationType { Pre, Post }
public static class Health
{
    private static MitigationEventInfo mitEventInfo;

    public static void Modify(IEntityBehaviour _target, HealthDataPacket _info, MitigationType _mitType = MitigationType.Pre | MitigationType.Post)
    {
        InterruptData interruptData = new InterruptData(_target.EntityID, _info.IsDamage ? InterruptEventType.Damage : InterruptEventType.Heal, _info);

        if (GameEventSystem.CheckEventInterrupted(interruptData))
            return;

        uint prevHP = _target.CurrentHP;
        int val = 0;

        switch (_info.Type)
        {
            case StatModifierType.Flat:
                val = (int)_info.Value;
                break;
            case StatModifierType.Max:
                val = (int)(_target.MaxHP * _info.Value);
                break;
            case StatModifierType.Missing:
                val = (int)((_target.MaxHP - _target.CurrentHP) * _info.Value);
                break;
            case StatModifierType.Current:
                val = (int)(_target.CurrentHP * _info.Value);
                break;
        }

        TriggerMitigationEvent(_mitType, MitigationType.Pre, ref val);

        val = Mathf.Clamp(val + (_info.IgnoresArmor ? 0 : _target.CurrentArmor), _info.IsDamage ? val : 0, _info.IsDamage ? 0 : val);

        TriggerMitigationEvent(_mitType, MitigationType.Post, ref val);

        //client msg to update ui with val
        _target.SetCurrentHP((uint)Mathf.Clamp(_target.CurrentHP + val, 0f, _target.MaxHP));
    }

    static void TriggerMitigationEvent(MitigationType _flags, MitigationType _typeToTest, ref int _val)
    {
        if (_flags.HasFlag(_typeToTest))
        {
            if (mitEventInfo == null)
                mitEventInfo = new MitigationEventInfo(_typeToTest, _val);
            else
                mitEventInfo.Value = _val;
            GameEventSystem.CallEvent(mitEventInfo);
            _val = mitEventInfo.Value;
        }
    }
}
