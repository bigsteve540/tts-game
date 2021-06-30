using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeploymentController : MonoBehaviour
{
    private EntityController ec;
    public DeploymentController AssignEntityController(EntityController _ec)
    {
        ec = _ec;
        return this;
    }

    void Start() { }

    void Update()
    {
        Vector3 placementPos = CameraController.RaycastGroundPointFromCamera(CameraController.ControllableCamera);
        if (placementPos == Vector3.one * -1f)
            return;

        transform.root.position = new Vector3(Mathf.CeilToInt(placementPos.x) - 0.25f, placementPos.y, Mathf.CeilToInt(placementPos.z) - 0.25f);

        if (InputManager.TestKey(InputKeys.Select, KeyState.Down))
            ec.FinishedDeployment();
    }
}
