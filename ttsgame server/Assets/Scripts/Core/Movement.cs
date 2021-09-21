using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum MovementType { Standard, Dash, Blink }

public static class Movement
{
    public const int DIAGONAL_MOVE_COST = 10;
    public const int HORIZONTAL_MOVE_COST = 5;

    private static Dictionary<MovementType, InterruptEventType> movementTypes = new Dictionary<MovementType, InterruptEventType>()
    {
        { MovementType.Standard, InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby },
        { MovementType.Dash, InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby },
        { MovementType.Blink, InterruptEventType.Movement_Start }
    };

    public static int GetInitiativeCostForPath(List<Tile> _path)
    {
        int total = 0;
        for (int i = 0; i < _path.Count - 1; i++)
            for (int j = 0; j < Tile.NEIGHBOUR_COUNT; j++)
            {
                if (_path[i].GetNeighbour((TileNeighbour)j) == _path[i + 1])
                    total += j % 2 == 0 ? HORIZONTAL_MOVE_COST : DIAGONAL_MOVE_COST;
            }
        return total;
    }
    public static int GetInitiativeCostForPath(Vector2 _origin, Vector2 _goal)
    {
        List<Tile> path = Tilemap.GeneratePathToTile(_origin, _goal);
        return GetInitiativeCostForPath(path);
    }

    public static void MoveEntity(IEntityBehaviour _aspect, int _newX, int _newY, MovementType _type)
    {
        Vector2 newPos = new Vector2(_newX, _newY);

        List<Tile> path = Tilemap.GeneratePathToTile(_aspect.MapPosition, newPos);
        int pathCost = GetInitiativeCostForPath(path);

        InterruptData data = new InterruptData(_aspect.EntityID, movementTypes[_type], path);

        if (GameEventSystem.CheckEventInterrupted(data) || pathCost > _aspect.CurrentActionPoints)
            return;

        _aspect.FacingDirection = Utilities.ConvertToCardinal(Vector2.Angle(Vector2.up, _aspect.MapPosition - newPos));
        _aspect.MapPosition = newPos;

        Tilemap.MoveEntityBetweenTiles(_aspect.MapPosition, newPos);

        //TODO: may be healthier to make whatever calls this method do the network messaging instead, as it may not always be required to send movement info to clients
        //Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.UpdateEntityPosition);
        //msg.Add(_aspect.Code);
        //msg.Add(newPos);
    }
}
