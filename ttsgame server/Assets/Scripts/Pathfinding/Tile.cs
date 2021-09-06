using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;

public enum TileNeighbour { Left, Left_Up, Up, Right_Up, Right, Down_Right, Down, Down_Left }
public class Tile
{
    public static ReadOnlyDictionary<int, List<Vector2>> DeploymentZones;
    private static Dictionary<int, List<Vector2>> deploymentZones = new Dictionary<int, List<Vector2>>();
    private static Dictionary<TileType, float> tileCostMultiplier = new Dictionary<TileType, float>
    {
        { TileType.Normal, 1f },
        { TileType.Difficult, 1.5f },
        { TileType.Impassable, 999f }
    };

    public Vector2 Coords { get; }
    public TileType State;

    public bool Deployable { get; }
    public int DeploymentID { get; }

    public IEntityBehaviour EntityOnTile { get; private set; }

    private TileType BaseState { get; }
    private Tile[] Neighbours = new Tile[8];

    public Tile(Vector2 _coords, TileType _baseState, string _mapStringCode)
    {
        Coords = _coords;
        BaseState = _baseState;
        State = BaseState;

        Deployable = int.TryParse(_mapStringCode, out int _result);
        if(_result > 0)
        {
            if (DeploymentZones == null)
                DeploymentZones = new ReadOnlyDictionary<int, List<Vector2>>(deploymentZones);

            if (!deploymentZones.ContainsKey(_result))
                deploymentZones.Add(_result, new List<Vector2>());

            deploymentZones[_result].Add(Coords);
        }
    }

    public void RevertToDefault() { State = BaseState; }
    public byte ConvertStateToByte() { return System.Convert.ToByte((int)State); }
    public void PlaceEntity(IEntityBehaviour _entity)
    {
        EntityOnTile = _entity;
        State = TileType.Impassable;
    }
    public void RemoveEntity()
    {
        EntityOnTile = null;
        State = BaseState;
    }
    public float GetMovementCost() { return tileCostMultiplier[State]; }
    public Tile GetNeighbour(TileNeighbour _target)
    {
        return Neighbours[(int)_target];
    }
    public void SetNeighbours(bool[] _legalities) //ORDER: [L(0), LU, U(1), RU, R(2), DR, D(3), DL]
    {
        if (_legalities[0]) //left
            Neighbours[0] = Tilemap.GetTile((int)Coords.x - 1, (int)Coords.y);

        if (_legalities[0] && _legalities[1]) //left up
            Neighbours[1] = Tilemap.GetTile((int)Coords.x - 1, (int)Coords.y + 1);

        if (_legalities[1]) //up
            Neighbours[2] = Tilemap.GetTile((int)Coords.x    , (int)Coords.y + 1);

        if (_legalities[1] && _legalities[2]) //up right
            Neighbours[3] = Tilemap.GetTile((int)Coords.x + 1, (int)Coords.y + 1);
        if (_legalities[2]) //right
            Neighbours[4] = Tilemap.GetTile((int)Coords.x + 1, (int)Coords.y);

        if (_legalities[2] && _legalities[3]) //down right
            Neighbours[5] = Tilemap.GetTile((int)Coords.x + 1, (int)Coords.y - 1);

        if (_legalities[3]) //down
            Neighbours[6] = Tilemap.GetTile((int)Coords.x    , (int)Coords.y - 1);

        if (_legalities[0] && _legalities[3]) //down left
            Neighbours[7] = Tilemap.GetTile((int)Coords.x - 1, (int)Coords.y - 1);
    }
}
