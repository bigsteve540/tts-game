using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;

public enum StatModifierType { Flat = 100, Additive_Percent = 200, Multiplicative_Percent = 300 }
public interface IStatModifier
{
    float Value { get; }
    StatModifierType StatModType { get; }
    int Priority { get; }
    object Source { get; }
}

public class EntityStatistic
{
    public int Base { get; private set; }

    private int current;
    public int Current
    {
        get
        {
            if(currentIsDirty || Base != lastBaseVal)
            {
                lastBaseVal = Base;
                current = CalculateCurrentStatistic();
                currentIsDirty = false;
            }
            return current;
        }
    }
    protected bool currentIsDirty = true;

    protected int lastBaseVal = int.MinValue;

    public readonly ReadOnlyCollection<IStatModifier> Modifiers;
    protected readonly List<IStatModifier> modifiers = new List<IStatModifier>();

    public virtual void AddModifier(IStatModifier _mod)
    {
        modifiers.Add(_mod);
        modifiers.Sort(ModSort);
        currentIsDirty = true;
    }

    protected virtual int ModSort(IStatModifier _a, IStatModifier _b)
    {
        if (_a.Priority < _b.Priority)
            return -1;
        else if (_a.Priority > _b.Priority)
            return 1;
        return 0;
    }

    public virtual bool RemoveModifier(IStatModifier _mod)
    {
        if (modifiers.Remove(_mod))
        {
            currentIsDirty = true;
            return true;
        }
        return false;
    }

    public virtual bool RemoveModifiersFromSource(object _source)
    {
        bool removed = false;

        for (int i = modifiers.Count - 1; i >= 0; i--)
            if(modifiers[i].Source == _source)
            {
                modifiers.RemoveAt(i);
                removed = true;
                currentIsDirty = true;
            }
        return removed;
    }

    private int CalculateCurrentStatistic()
    {
        float finalValue = Base;
        float totalAdditivePercent = 0;

        for (int i = 0; i < modifiers.Count; i++)
        {
            IStatModifier mod = modifiers[i];

            switch (mod.StatModType)
            {
                case StatModifierType.Flat:
                    finalValue += mod.Value;
                    break;
                case StatModifierType.Additive_Percent:
                    totalAdditivePercent += mod.Value;

                    if(i + 1 >= modifiers.Count || modifiers[i+1].StatModType != StatModifierType.Additive_Percent)
                    {
                        finalValue *= 1 + totalAdditivePercent;
                        totalAdditivePercent = 0;
                    }
                    break;
                case StatModifierType.Multiplicative_Percent:
                    finalValue *= 1 + mod.Value;
                    break;
            }
        }

        return Mathf.RoundToInt(finalValue);
    }

    public EntityStatistic()
    {
        modifiers = new List<IStatModifier>();
        Modifiers = modifiers.AsReadOnly();
    }

    public EntityStatistic(int _base) : this(_base, _base, new List<IStatModifier>()) { }
    public EntityStatistic(int _base, int _current) :this(_base, _current, new List<IStatModifier>()) { }
    public EntityStatistic(int _base, int _current, List<IStatModifier> _mods)
    {
        Base = _base;
        current = _current;
        modifiers = _mods;
        Modifiers = modifiers.AsReadOnly();
    }
}
