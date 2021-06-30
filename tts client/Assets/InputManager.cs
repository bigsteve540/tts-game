using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//TODO: read in keybinds from file and use those from a dictionary reference
public enum KeyState { Up, Down, Held }
public enum InputKeys { Cam_Forward, Cam_Back, Cam_Left, Cam_Right, Select }

public class InputManager : MonoBehaviour
{
    private static Dictionary<InputKeys, KeyCode> inputMap = new Dictionary<InputKeys, KeyCode>
    {
        {InputKeys.Cam_Forward, KeyCode.W },
        {InputKeys.Cam_Back, KeyCode.S },
        {InputKeys.Cam_Left, KeyCode.A },
        {InputKeys.Cam_Right, KeyCode.D },

        {InputKeys.Select, KeyCode.Mouse0 }
    };


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static bool TestKey(InputKeys _key, KeyState _state)
    {
        switch (_state)
        {
            case KeyState.Held:
                return Input.GetKey(inputMap[_key]);
            case KeyState.Down:
                return Input.GetKeyDown(inputMap[_key]);
            case KeyState.Up:
                return Input.GetKeyUp(inputMap[_key]);
            default:
                throw new System.Exception("Unregistered KeyState");
        }
    }
}
