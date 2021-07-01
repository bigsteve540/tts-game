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

    [SerializeField] private AspectPortraitUI[] portraits;
    [SerializeField] private GameObject deploymentPrefab;

    private DeploymentController deployingBody = null;
    private int counter = 0;
    private int activeSelection = -1;

    private void Awake() { Instance = this; }

    public void Start()
    {
        for (int i = 0; i < GameManager.Instance.PickedAspects.Length; i++)
            portraits[i].Init(GameManager.AspectData[GameManager.Instance.PickedAspects[i]]);
    }

    private void Update()
    {
        if (InputManager.TestKey(InputKeys.Select, KeyState.Down) && deployingBody != null)
        {
            int id = NetworkManager.Instance.Client.Id;
            Vector2 entityPos = new Vector2(deployingBody.transform.position.x, deployingBody.transform.position.z);
            bool match = false; 
            for (int i = 0; i < GameManager.DeployableTiles[id].Count; i++)
            {
                if (entityPos == GameManager.DeployableTiles[id][i])
                {
                    match = true;
                    break;
                }
            }

            if (match)
            {
                deployingBody.HaltMouseSticking();

                portraits[activeSelection].GreyOut();
                portraits[activeSelection].SetInteractivity(false);

                activeSelection = -1;
                deployingBody = null;
                counter++;
            }
        }
    }

    public void ButtonInteract(int _buttonID)
    {
        activeSelection = _buttonID;

        if(deployingBody == null)
            deployingBody = Instantiate(deploymentPrefab, new Vector3(-99f,-99f,-99f), Quaternion.identity).GetComponent<DeploymentController>();
    }
}
