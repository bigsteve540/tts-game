using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CameraController : MonoBehaviour
{
    public static Camera ControllableCamera;

    float movespeed = 5f;
    Vector3 forward = new Vector3();
    Vector3 right = new Vector3();
    // Start is called before the first frame update
    void Start()
    {
        ControllableCamera = GetComponent<Camera>();

        forward = transform.forward;
        forward.y = 0;
        forward = Vector3.Normalize(forward);
        right = Quaternion.Euler(new Vector3(0, 90, 0)) * forward; 
    }

    void Update()
    {
        GetMovement();
    }

    void GetMovement()
    {
        Vector2 inputDir = new Vector2();

        if (InputManager.TestKey(InputKeys.Cam_Forward, KeyState.Held))
            inputDir.y++;
        if (InputManager.TestKey(InputKeys.Cam_Back, KeyState.Held))
            inputDir.y--;
        if (InputManager.TestKey(InputKeys.Cam_Left, KeyState.Held))
            inputDir.x--;
        if (InputManager.TestKey(InputKeys.Cam_Right, KeyState.Held))
            inputDir.x++;

        Vector3 rightMovement = right * movespeed * Time.deltaTime * inputDir.x; 
        Vector3 upMovement = forward * movespeed * Time.deltaTime * inputDir.y; 

        transform.position += rightMovement + upMovement;
    }

    public static Vector3 RaycastGroundPointFromCamera(Camera _cam)
    {
        RaycastHit[] hit = new RaycastHit[1]; //should never hit more than a single ground plane
        if (Physics.RaycastNonAlloc(_cam.ScreenPointToRay(Input.mousePosition), hit, 20f, GameManager.GroundRaycastMask, QueryTriggerInteraction.Collide) == 1)
            return hit[0].point;
        return Vector3.one * -1f;
    }
    
}
