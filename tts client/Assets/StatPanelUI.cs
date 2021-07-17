using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StatPanelUI : MonoBehaviour
{
#pragma warning disable CS0649
    [SerializeField] private Slider hpSlider;
    [SerializeField] private Image aspectPortrait;
#pragma warning restore CS0649
    private int entityID;
    private int health;


    public void Init(string _aspectCode, int _groupID, int _entityID, int _hp)
    {
        entityID = _entityID;

        aspectPortrait.sprite = GameManager.AspectData[_aspectCode].AspectSprite;
        transform.localScale = new Vector3(_groupID % 2 == 0 ? -1f : 1f, 1f, 1f);

        GameManager.OnHealthModified += (int _entityId, int _modifierVal) => 
        {
            if(_entityID == entityID)
                hpSlider.value = Mathf.Clamp(hpSlider.value + _modifierVal, 0f, hpSlider.maxValue);
        };

        hpSlider.maxValue = _hp;
        hpSlider.value = _hp;
    }
}
