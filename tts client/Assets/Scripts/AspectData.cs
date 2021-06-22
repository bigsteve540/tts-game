using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "New Aspect")]
public class AspectData : ScriptableObject
{
    public string AspectCode = "A###";
    public string AspectName = "New Name";
    public Sprite AspectSprite;

    public GameObject AspectModel;
}
