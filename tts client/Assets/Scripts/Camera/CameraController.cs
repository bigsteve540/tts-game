using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//TODO: read in keybinds from file and use those from a dictionary reference
public class CameraController : MonoBehaviour
{
    float movespeed = 5f;
    Vector3 forward = new Vector3();
    Vector3 right = new Vector3();
    // Start is called before the first frame update
    void Start()
    {
        forward = transform.forward; // Set forward to equal the camera's forward vector
        forward.y = 0; // make sure y is 0
        forward = Vector3.Normalize(forward); // make sure the length of vector is set to a max of 1.0
        right = Quaternion.Euler(new Vector3(0, 90, 0)) * forward; // set the right-facing vector to be facing right relative to the camera's forward vector
    }

    // Update is called once per frame
    void Update()
    {
        Vector2 inputDir = new Vector2();

        if (Input.GetKey(KeyCode.W))
            inputDir.y++;
        if (Input.GetKey(KeyCode.S))
            inputDir.y--;
        if (Input.GetKey(KeyCode.A))
            inputDir.x--;
        if (Input.GetKey(KeyCode.D))
            inputDir.x++;

        Vector3 rightMovement = right * movespeed * Time.deltaTime * inputDir.x; // Our right movement is based on the right vector, movement speed, and our GetAxis command. We multiply by Time.deltaTime to make the movement smooth.
        Vector3 upMovement = forward * movespeed * Time.deltaTime * inputDir.y; // Up movement uses the forward vector, movement speed, and the vertical axis inputs.
        Vector3 heading = rightMovement + upMovement; // This creates our new direction. By combining our right and forward movements and normalizing them, we create a new vector that points in the appropriate direction with a length no greater than 1.0
        
        transform.position += heading; // move our transform's position right/left     
        //transform.position += upMovement; // Move our transform's position up/down
    }
    
}
