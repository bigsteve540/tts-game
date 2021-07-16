using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RiptideNetworking;

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

    private (string Code, Vector2 Pos)[] entityPositions = new (string, Vector2)[5];
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
        if (InputManager.TestKey(InputKeys.Select, KeyState.Down) && deployingBody != null && GameManager.GameState == GameState.Deploy)
        {
            int id = NetworkManager.Instance.Client.Id;
            Vector2 entityPos = new Vector2(deployingBody.transform.position.x, deployingBody.transform.position.z);
            bool match = false; 
            for (int i = 0; i < GameManager.DeployableTiles[id].Count; i++)
                if (entityPos == GameManager.DeployableTiles[id][i])
                {
                    match = true;
                    break;
                }
            if (match)
            {
                foreach (Vector2 position in DeploymentController.PosList)
                    if (position == entityPos)
                        return;
                
                deployingBody.HaltMouseSticking();
                entityPositions[activeSelection] = (portraits[activeSelection].AspectCode, entityPos);

                portraits[activeSelection].GreyOut();
                portraits[activeSelection].SetInteractivity(false);

                activeSelection = -1;
                deployingBody = null;
                counter++;
            }

            if(counter == 5) //send current vector positions to SERVER
            {
                Message msg = Message.Create(MessageSendMode.reliable, (ushort)ClientToServerRequest.DeploymentCompleted);
                foreach ((string, Vector2) pos in entityPositions)
                    msg.Add(pos.Item2);
                NetworkManager.Instance.Client.Send(msg);
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
