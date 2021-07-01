using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeploymentController : MonoBehaviour
{
    bool mouseStick = true;

    public void HaltMouseSticking()
    {
        mouseStick = false;
    }
    void Update()
    {
        if (!mouseStick)
            return;

        Vector3 placementPos = CameraController.RaycastGroundPointFromCamera(CameraController.ControllableCamera);
        if (placementPos == Vector3.one * -1f)
            return;
        transform.root.position = new Vector3(Mathf.CeilToInt(placementPos.x), placementPos.y, Mathf.CeilToInt(placementPos.z));
    }
}
