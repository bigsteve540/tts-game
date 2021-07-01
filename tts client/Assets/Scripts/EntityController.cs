﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EntityController : MonoBehaviour
{
    [SerializeField] private GameObject model;
    [SerializeField] private GameObject VFXAnchors;

    private AspectData data;

    public EntityController Init(AspectData _data)
    {
        data = _data;
        Instantiate(data.AspectModel, model.transform);
        return this;
    }

    public void SpawnAspect()
    {
        model.SetActive(true);
    }
    public void ChangeAspectData(AspectData _new) { data = _new; }
}
