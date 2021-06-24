using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SystemClockManager : MonoBehaviour
{
    #region Singleton
    private static SystemClockManager Instance;
    void OnEnable()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }
    #endregion

    public delegate void ClockTimeoutHandler();
    public static ClockTimeoutHandler OnClockTimeout;

    private static bool running = false;

    private static float elapsedTime = 0f;
    private static float targetTime = 0f;

    public static void Begin(float _targetTime)
    {
        targetTime = _targetTime;
        running = true;
    }
    public static void Restart()
    {
        elapsedTime = 0f;
        running = true;
    }
    public static void Restart(float _newTargetTime)
    {
        elapsedTime = 0f;
        targetTime = _newTargetTime;
        running = true;
    }
    public static void Stop()
    {
        running = false;
    }
    public static bool ElapsedTimeWithinBounds() { return elapsedTime <= targetTime ? true : false; }

    void Update()
    {
        if (running)
        {
            elapsedTime += Time.unscaledDeltaTime;
            
            if(elapsedTime > targetTime)
            {
                running = false;
                elapsedTime = 0f;
                OnClockTimeout?.Invoke();
            }
        }
    }
}
