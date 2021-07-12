using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;

public class SerializeAspectFromFile 
{
    const string FILE_DIRECTORY = @"Aspect Data";

    [MenuItem("Tools/Deserialize Aspect Objects")]
    public static void DeserializeAspectObjects()
    {
        AspectData[] allAspects = Resources.LoadAll<AspectData>("Aspects/Data");

        AspectDataWrapper condom = new AspectDataWrapper(); //dont reuse condoms kids, also unity sucks so you have to box this lol
        object lol = condom;
        for (int i = 0; i < allAspects.Length; i++)
        {
            using (StreamReader sr = new StreamReader(Path.GetFullPath(Path.Combine(Directory.GetCurrentDirectory(), "..", FILE_DIRECTORY, $"{allAspects[i].AspectName}.txt"))))
            {
                EditorJsonUtility.FromJsonOverwrite(sr.ReadToEnd(), lol);
            }
            condom = (AspectDataWrapper)lol;
            allAspects[i].Deserialize(condom);
        }
    }

}
