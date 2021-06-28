using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static Dictionary<int, EntityController> Entities = new Dictionary<int, EntityController>();

    public static string SelectedAspect = string.Empty;
    [HideInInspector] public string[] PickedAspects = new string[5];

    public static Dictionary<string, AspectData> AspectData = new Dictionary<string, AspectData>();

    [SerializeField] private GameObject[] tileVisuals;
    [SerializeField] private GameObject deployZoneVisual; 

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
        NetworkManager.Instance.Connect();

        AspectData[] data = Resources.LoadAll<AspectData>("Aspects/Data");
        for (int i = 0; i < data.Length; i++)
            AspectData.Add(data[i].AspectCode, data[i]);
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
    public void DrawDeployTile(int _playerID, int _x, int _y)
    {
        GameObject go = Instantiate(deployZoneVisual, new Vector3(_x, 1f, _y), Quaternion.identity);

        Color color;
        switch (_playerID)
        {
            case 1:
                color = new Color(1f, 0f, 0f, 0.5f);
                break;
            case 2:
                color = new Color(0f, 1f, 0f, 0.5f);
                break;
            default:
                color = new Color(1f, 1f, 1f, 0.5f);
                break;
        }
        go.GetComponent<MeshRenderer>().material.color = color;
    }

    private void OnApplicationQuit()
    {
        //Client.Disconnect(); // Disconnect when the game is closed
    }
}
