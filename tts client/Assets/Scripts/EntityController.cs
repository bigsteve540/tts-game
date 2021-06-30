using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EntityController : MonoBehaviour
{
    [SerializeField] private GameObject EntityUI;

    [SerializeField] private GameObject Model;
    [SerializeField] private GameObject VFXAnchors;

    [SerializeField] private Slider Health;
    [SerializeField] private Slider ActionPoints;

    private int hp;
    private AspectData data;

    public void SetHP(int _newHP)
    {
        hp = _newHP;
    }

    private void Update()
    {

    }


    private void OnGUI()
    {
        Vector3 modifiedPos = new Vector3(transform.position.x, transform.position.y + 3.8f, transform.position.z);

        Vector2 screenPoint = Camera.main.WorldToScreenPoint(modifiedPos);
        GUI.Box(new Rect(screenPoint.x - 30f, Screen.height - screenPoint.y, 60f, 20f), hp.ToString());
    }

}
