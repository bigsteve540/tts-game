using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;

public class SerializeAspectFromFile 
{
    const string FILE_DIRECTORY = @"Aspect Data";

    [MenuItem("Tools/Serialize Aspect Objects")]
    public static void SerializeAspectObjects()
    {
        AspectData[] allAspects = Resources.LoadAll<AspectData>("Aspects");

        AspectDataWrapper condom; //dont reuse condoms kids
        for (int i = 0; i < allAspects.Length; i++)
        {
            condom = new AspectDataWrapper(allAspects[i]);
            string pathToFile = Path.GetFullPath(Path.Combine(Directory.GetCurrentDirectory(), "..", FILE_DIRECTORY, $"{condom.AspectName}.txt"));
            File.WriteAllText(pathToFile, EditorJsonUtility.ToJson(condom, true));
        }
    }

    [System.Serializable]
    struct AspectDataWrapper
    {
        public string AspectName;

        public uint BaseInitiative;
        public int InitiativeOffset;

        public uint MaxActionPoints;

        public uint MaxHealth;
        public int BaseArmor;

        public AspectAbilityWrapper[] Abilities { get; }

        public AspectDataWrapper(AspectData _toSerialize)
        {
            AspectName = _toSerialize.Name;
            BaseInitiative = _toSerialize.BaseInitiative;
            InitiativeOffset = _toSerialize.InitiativeOffset;
            MaxActionPoints = _toSerialize.MaxActionPoints;
            MaxHealth = _toSerialize.MaxHealth;
            BaseArmor = _toSerialize.BaseArmor;

            int abilityLen = _toSerialize.Abilities.Length;

            Abilities = new AspectAbilityWrapper[abilityLen];
            for (int i = 0; i < abilityLen; i++)
                Abilities[i] = new AspectAbilityWrapper(_toSerialize.Abilities[i]);
        }
    }
    [System.Serializable]
    struct AspectAbilityWrapper
    {
        public string AbilityName;
        public string Description;

        public int ActionPointCost;

        public int Value;
        public int ValueType;

        public int[] TypesToTrigger;

        public AspectAbilityWrapper(AspectAbilityData _toSerialize)
        {
            AbilityName = _toSerialize.Name;
            Description = _toSerialize.Description;
            ActionPointCost = _toSerialize.ActionPointCost;
            Value = _toSerialize.Value;
            ValueType = (int)_toSerialize.ValueType;

            int typesLen = _toSerialize.TypesToTrigger.Length;

            TypesToTrigger = new int[typesLen];
            for (int i = 0; i < typesLen; i++)
                TypesToTrigger[i] = (int)_toSerialize.TypesToTrigger[i];
        }
    }
}
