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

    public static void Damage(IEntityBehaviour _target, HealthDataPacket _info, MitigationType _mitType = MitigationType.Pre | MitigationType.Post)
    {
        InterruptData interruptData = new InterruptData(_target.EntityID, InterruptEventType.Damage, _info);
        if (GameEventSystem.CheckEventInterrupted(interruptData))
            return;

        int damage = ModifyValueByStatMod(_info, _target.MaxHP, _target.CurrentHP);

        TriggerMitigationEvents(_mitType, MitigationType.Pre, ref damage);

        damage += _info.IgnoresArmor ? 0 : _target.CurrentArmor;

        TriggerMitigationEvents(_mitType, MitigationType.Post, ref damage);

        _target.SetCurrentHP((uint)Mathf.Clamp(_target.CurrentHP + damage, 0f, _target.MaxHP));
        
    }
    public static void Heal(IEntityBehaviour _target, HealthDataPacket _info)
    {
        InterruptData interruptData = new InterruptData(_target.EntityID, InterruptEventType.Heal, _info);
        if (GameEventSystem.CheckEventInterrupted(interruptData))
            return;

        //TODO: hard boxing this is kind of stupid if somehow a negative value pops up in here
        uint heal = (uint)ModifyValueByStatMod(_info, _target.MaxHP, _target.CurrentHP);

        //TODO: somehow check if something needs to effect healing

        _target.SetCurrentHP((uint)Mathf.Clamp(_target.CurrentHP + heal, 0f, _target.MaxHP));
    }
    private static int ModifyValueByStatMod(HealthDataPacket _info, uint _maxHP, uint _currHP)
    {
        int val = 0;
        switch (_info.Type)
        {
            case StatModifierType.Flat:
                val = (int)_info.Value;
                break;
            case StatModifierType.Max:
                val = (int)(_maxHP * _info.Value);
                break;
            case StatModifierType.Missing:
                val = (int)((_maxHP - _currHP) * _info.Value);
                break;
            case StatModifierType.Current:
                val = (int)(_currHP * _info.Value);
                break;
        }
        return val;
    }

    static void TriggerMitigationEvents(MitigationType _flags, MitigationType _typeToTest, ref int _val)
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
