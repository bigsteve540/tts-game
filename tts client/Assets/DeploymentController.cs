using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeploymentController : MonoBehaviour
{
    bool mouseStick = true;

    public static List<Vector2> PosList = new List<Vector2>();

    public void HaltMouseSticking()
    {
        mouseStick = false;
        PosList.Add(new Vector2(transform.root.position.x, transform.root.position.z));
    }
    void Update()
    {
        if (GameManager.GameState == GameState.Game)
            Destroy(gameObject);

        if (!mouseStick)
            return;

        Vector3 placementPos = CameraController.RaycastGroundPointFromCamera(CameraController.ControllableCamera);
        if (placementPos == Vector3.one * -1f)
            return;
        transform.root.position = new Vector3(Mathf.RoundToInt(placementPos.x), placementPos.y, Mathf.RoundToInt(placementPos.z));
    }

    private bool TestCellTaken(Vector2 _attemptedXZ)
    {
        if (transform.position == new Vector3(_attemptedXZ.x, transform.root.position.y, _attemptedXZ.y))
        {
            Debug.Log("returning true");
            return true;
        }
        Debug.Log("returning false");
        return false;
    }
}
