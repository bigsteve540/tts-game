using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EntityController : MonoBehaviour
{
    public GameObject EntityUI;

    public GameObject Model;
    public GameObject VFXAnchors;

    [SerializeField]
    private Slider Health;
    private int hp;
    [SerializeField]
    private Slider ActionPoints;

    public void SetHP(int _newHP)
    {
        hp = _newHP;
    }

    private void OnGUI()
    {
        Vector3 modifiedPos = new Vector3(transform.position.x, transform.position.y + 3.8f, transform.position.z);

        Vector2 screenPoint = Camera.main.WorldToScreenPoint(modifiedPos);
        GUI.Box(new Rect(screenPoint.x - 30f, Screen.height - screenPoint.y, 60f, 20f), hp.ToString());


    }

}
