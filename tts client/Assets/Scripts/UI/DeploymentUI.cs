using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeploymentUI : MonoBehaviour
{
    private static DeploymentUI instance;
    public static DeploymentUI Instance
    {
        get => instance;
        private set
        {
            if (instance == null)
                instance = value;
            else if (instance != value)
            {
                Debug.Log($"{nameof(DeploymentUI)} instance already exists, destroying object!");
                Destroy(value);
            }
        }
    }

    [SerializeField] private Image[] portraits;
    private string previousAspectCode = string.Empty; 

    private void Awake() { Instance = this; }

    public void Start()
    {
        for (int i = 0; i < GameManager.Instance.PickedAspects.Length; i++)
            portraits[i].sprite = GameManager.AspectData[GameManager.Instance.PickedAspects[i]].AspectSprite;
    }

    private void Update()
    {
        if(previousAspectCode != GameManager.SelectedAspect && previousAspectCode == string.Empty) //spawn an entityController
        {

        }
        if (GameManager.GameState == GameState.Deploy && GameManager.SelectedAspect != string.Empty)
        {
            Vector3 groundPoint  = CameraController.RaycastGroundPointFromCamera(CameraController.ControllableCamera);
        }
    }
}
