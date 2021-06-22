using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AspectPortraitUI : MonoBehaviour
{
    [SerializeField]private Image portraitImage;

    private string aspectCode;
    private string aspectName;

    public void Init(AspectData _data)
    {
        aspectCode = _data.AspectCode;
        aspectName = _data.AspectName;

        portraitImage.sprite = _data.AspectSprite;
    }

    public void Interact() { DraftUI.SelectedAspect = aspectCode; }
}
