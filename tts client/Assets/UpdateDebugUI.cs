using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpdateDebugUI : MonoBehaviour
{
    public static float UpdateRate = 0.5f; //updates every quarter of a second

    private TextMeshProUGUI displayText;
    private int frameCount = 0;
    private float frameDelta = 0f;
    private float fps = 0f;
    // Start is called before the first frame update
    void Start()
    {
        displayText = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    void Update()
    {
        frameCount++;
        frameDelta += Time.unscaledDeltaTime;
        if(frameDelta > UpdateRate)
        {
            fps = frameCount / frameDelta;
            frameCount = 0;
            frameDelta -= UpdateRate;
        }
        displayText.text = $"FPS: {Mathf.RoundToInt(fps)} | PING: {Mathf.RoundToInt(Client.CurrentPing)}";
    }
}
