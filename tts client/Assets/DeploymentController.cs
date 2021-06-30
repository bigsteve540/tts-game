using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeploymentController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 placementPos = CameraController.RaycastGroundPointFromCamera(CameraController.ControllableCamera);
        Debug.Log($"{placementPos}, {Vector3.one * -1f}, {placementPos != Vector3.one * -1f}");
        if (placementPos == Vector3.one * -1f)
            return;

        transform.root.position = new Vector3(Mathf.CeilToInt(placementPos.x) - 0.25f, placementPos.y, Mathf.CeilToInt(placementPos.z) - 0.25f);

        if (InputManager.TestKey(InputKeys.Select, KeyState.Down)) //placed state, feedback to buttons and tings
        {
            gameObject.SetActive(false);

        }
    }
}
