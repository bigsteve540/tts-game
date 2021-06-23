using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static Dictionary<int, EntityController> Entities = new Dictionary<int, EntityController>();

    public GameObject[] tileVisuals;

    public static GameManager Instance;
    public void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
    }

    public void Start()
    {
        NetworkManager.Singleton.Connect();
    }

    public void SpawnAspect(int _entityID, string _aspectCode, int _hp, Vector2 _posXZ)
    {
        Entities.Add(
            _entityID, 
            Instantiate(Resources.Load<GameObject>($"Aspects/{_aspectCode}"), new Vector3(0, 0f, 0), Quaternion.identity).GetComponent<EntityController>()
            );
        Entities[_entityID].SetHP(_hp);
    }

    public void DrawMap(int _sizeX, int _sizeY) //TODO: remove this bit post testing
    {
        for (int x = 0; x < _sizeX; x++)
        {
            for (int y = 0; y < _sizeY; y++)
            {
                Instantiate(tileVisuals[(int)Tilemap.GetTile(x, y)], new Vector3(x, 0, y), Quaternion.identity);
            }
        }
    }

    private void OnApplicationQuit()
    {
        //Client.Disconnect(); // Disconnect when the game is closed
    }
}
