using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AspectPortraitUI : MonoBehaviour
{
#pragma warning disable CS0649
    [SerializeField] private Image portraitImage;

    private Button button;
    public string AspectCode = string.Empty;

    public void Init(AspectData _data)
    {
        button = GetComponent<Button>();
        gameObject.name = $"{_data.AspectName}Portrait";
        portraitImage.sprite = _data.AspectSprite;
        AspectCode = _data.AspectCode;
    }

    public void ButtonInteract() { GameManager.SelectedAspect = AspectCode; }
    public void GreyOut() { portraitImage.CrossFadeColor(Color.grey, 0.5f, false, false); }
    public void SetInteractivity(bool _enabled) { button.interactable = _enabled; }
}
