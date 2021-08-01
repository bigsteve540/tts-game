using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile
{
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
        DeploymentID = _result;
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
