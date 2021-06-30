using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EntityController : MonoBehaviour
{
    [SerializeField] private GameObject model;
    [SerializeField] private GameObject VFXAnchors;

    private AspectData data;

    private DeploymentController dc;

    public EntityController Init(AspectData _data)
    {
        data = _data;
        dc = transform.GetChild(1).GetComponent<DeploymentController>().AssignEntityController(this);
        Instantiate(_data.AspectModel, model.transform);

        return this;
    }

    public void FinishedDeployment()
    {
        GameManager.SelectedAspect = string.Empty;
        dc.gameObject.SetActive(false);
        model.SetActive(true);
    }

    private void Update()
    {

    }
}
