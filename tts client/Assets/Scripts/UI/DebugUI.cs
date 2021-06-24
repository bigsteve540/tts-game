using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DebugUI : MonoBehaviour
{

    [SerializeField] private TextMeshProUGUI displayText;

    int frameCount = 0;
    float dt = 0f;
    float fps = 0f;
    float updateRate = 0.25f;  // 4 updates per sec.

    // Update is called once per frame
    void Update()
    {
        frameCount++;
        dt += Time.deltaTime;
        if (dt > updateRate)
        {
            fps = frameCount / dt;
            frameCount = 0;
            dt -= updateRate;

            displayText.text = $"FPS: {Mathf.RoundToInt(fps)} PING: {NetworkManager.Instance.Ping}";
        }
    }
}
