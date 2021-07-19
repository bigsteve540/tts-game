using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EntityController : MonoBehaviour
{
    public int GroupID { get; private set; }
    public int EntityID { get; private set; }
    private bool showActiveModel = false;
#pragma warning disable CS0649 
    [SerializeField] private GameObject model;
    [SerializeField] private GameObject VFXAnchors;
#pragma warning restore CS0649
    private AspectData data;

    public EntityController Init(int _groupID, int _entityID, AspectData _data)
    {
        GroupID = _groupID;
        EntityID = _entityID;
        data = _data;
        Instantiate(data.AspectModel, model.transform);
        model.SetActive(true);
        return this;
    }
    public void ChangeAspectData(AspectData _new) { data = _new; }
    public void ToggleActiveStatus(bool _active)
    {
        model.transform.GetChild(0).GetComponent<MeshRenderer>().material.color = _active ? Color.green : Color.white;
    }
}
