using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum StatModifierType { Flat, Max, Missing, Current }
public struct HealthDataPacket
{
    public int CasterID { get; private set; }
    public object Source { get; private set; }

    public StatModifierType Type { get; private set; }
    public int Value { get; private set; } //negative for damage positive for healing

    public bool IsDamage() { return Mathf.Sign(Value) == -1; }
    public void ChangeValue(int _val) { Value = _val; }

    public HealthDataPacket(int _casterID, object _source, StatModifierType _type, int _value)
    {
        CasterID = _casterID;
        Source = _source;
        Type = _type;
        Value = _value;
    }
}
[System.Flags]
public enum MitigationType { Pre, Post }
public static class Health
{
    private static PremitEventInfo premit;
    private static PostmitEventInfo postmit;

    public static void Modify(IEntityBehaviour _target, HealthDataPacket _info, MitigationType _mitType)
    {
        InterruptData interruptData = new InterruptData(_target.EntityID, _info.IsDamage() ? InterruptEventType.Damage : InterruptEventType.Heal, _info);

        if (GameEventSystem.CheckEventInterrupted(interruptData))
            return;

        uint prevHP = _target.CurrentHP;
        int val = 0;

        switch (_info.Type)
        {
            case StatModifierType.Flat:
                val = _info.Value;
                break;
            case StatModifierType.Max:
                val = (int)(_target.MaxHP * _info.Value);
                break;
            case StatModifierType.Missing:
                val = (int)(_target.MaxHP - _target.CurrentHP) * _info.Value;
                break;
            case StatModifierType.Current:
                val = (int)(_target.CurrentHP * _info.Value);
                break;
        }

        if (_mitType.HasFlag(MitigationType.Pre))
        {
            if (premit == null)
                premit = new PremitEventInfo(val);
            else
                premit.Value = val;
            GameEventSystem.CallEvent(premit);
            val = premit.Value;
        }

        if (_info.IsDamage())
            val = (int)Mathf.Clamp((val * -1) - _target.CurrentArmor, 0f, val * -1) * -1;

        if (_mitType.HasFlag(MitigationType.Post))
        {
            if (postmit == null)
                postmit = new PostmitEventInfo(val);
            else
                postmit.Value = val;
            GameEventSystem.CallEvent(postmit);
            val = postmit.Value;
        }

        //client msg to update ui with val
        _target.SetCurrentHP((uint)Mathf.Clamp(_target.CurrentHP + val, 0f, _target.MaxHP));
    }
}
