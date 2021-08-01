using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;

public class Tile
{
    public static ReadOnlyDictionary<int, List<Vector2>> DeploymentZones;
    private Dictionary<int, List<Vector2>> deploymentZones = new Dictionary<int, List<Vector2>>();

    public Vector2 Coords { get; }
    public TileType State;

    public bool Deployable { get; }
    public int DeploymentID { get; }

    public IEntityBehaviour EntityOnTile { get; private set; }

    private TileType baseState { get; }

    public Tile(Vector2 _coords, TileType _baseState, string _mapStringCode)
    {
        Coords = _coords;
        baseState = _baseState;
        State = baseState;

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

    public void RevertToDefault() { State = baseState; }
    public byte ConvertStateToByte() { return System.Convert.ToByte((int)State); }
    public void PlaceEntity(IEntityBehaviour _entity)
    {
        EntityOnTile = _entity;
        State = TileType.Impassable;
    }
    public void RemoveEntity()
    {
        EntityOnTile = null;
        State = baseState;
    }
}
