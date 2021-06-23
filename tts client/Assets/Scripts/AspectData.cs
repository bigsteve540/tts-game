using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Aspect Data")]
public class AspectData : ScriptableObject
{
    public string AspectCode = "A###";
    public string AspectName = "New Aspect";
    public Sprite AspectSprite;
    public GameObject AspectModel;
}
