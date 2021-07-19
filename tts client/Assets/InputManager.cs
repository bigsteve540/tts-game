using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public enum KeyState { Up, Down, Held }
public enum InputKeys { Cam_Forward, Cam_Back, Cam_Left, Cam_Right, Mouse_Left, Mouse_Right }

public class InputManager : MonoBehaviour
{
    public delegate void MouseEventHandler(MouseData _data);
    public static MouseEventHandler OnMouseClicked;

    private static Dictionary<InputKeys, KeyCode> inputMap = new Dictionary<InputKeys, KeyCode>
    {
        { InputKeys.Cam_Forward, KeyCode.W },
        { InputKeys.Cam_Back, KeyCode.S },
        { InputKeys.Cam_Left, KeyCode.A },
        { InputKeys.Cam_Right, KeyCode.D },

        { InputKeys.Mouse_Left, KeyCode.Mouse0 },
        { InputKeys.Mouse_Right, KeyCode.Mouse1 }

    };

    void Start() {/*TODO: read in keybinds from file and use those from a dictionary reference */}

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
                throw new Exception("Unregistered KeyState");
        }
    }

    private void Update()
    {
        TestClick(InputKeys.Mouse_Left);
        TestClick(InputKeys.Mouse_Right);
    }

    void TestClick(InputKeys _key)
    {
        foreach(KeyState state in Enum.GetValues(typeof(KeyState)).Cast<KeyState>())
            if (TestKey(_key, state))
                OnMouseClicked?.Invoke(new MouseData(_key, state));       
    }

    public struct MouseData
    {
        public InputKeys Key { get; }
        public KeyState ClickState { get; }
        public Vector3 ScreenPosition { get; }

        public MouseData(InputKeys _key, KeyState _state)
        {
            ScreenPosition = Input.mousePosition;
            Key = _key;
            ClickState = _state;
        }
    }
}
