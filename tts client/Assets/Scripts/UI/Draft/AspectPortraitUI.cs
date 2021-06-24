using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AspectPortraitUI : MonoBehaviour
{
    [SerializeField] private Image portraitImage;
    private string aspectCode = string.Empty;

    public void Init(AspectData _data)
    {
        gameObject.name = $"{_data.AspectName}Portrait";
        portraitImage.sprite = _data.AspectSprite;
        aspectCode = _data.AspectCode;
    }

    public void ButtonInteract() { DraftUI.SelectedAspect = aspectCode; }
}
