using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Movement
{
    public static int GetInitiativeCostForPath(List<Node> _path)
    {
        int total = 0;
        for (int i = 0; i < _path.Count - 1; i++)
            for (int j = 0; j < _path[i].Edges.Length; j++)
                if (_path[i].Edges[j] == _path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }
    public static int GetInitiativeCostForPath(Vector2 _origin, Vector2 _goal)
    {
        List<Node> path = Tilemap.GeneratePathToTile(_origin, _goal);
        int total = 0;
        for (int i = 0; i < path.Count - 1; i++)
            for (int j = 0; j < path[i].Edges.Length; j++)
                if (path[i].Edges[j] == path[i + 1])
                    total += j % 2 == 0 ? 5 : 10;
        return total;
    }

    public static void MoveEntity(IEntityBehaviour _aspect, int _newX, int _newY)
    {
        Vector2 newPos = new Vector2(_newX, _newY);

        List<Node> path = Tilemap.GeneratePathToTile(_aspect.MapPosition, newPos);
        int pathCost = GetInitiativeCostForPath(path);

        InterruptData data = new InterruptData(_aspect.EntityID, InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby);

        if (GameEventSystem.CheckEventInterrupted(data) || pathCost > _aspect.CurrentActionPoints)
            return;

        _aspect.FacingDirection = Utilities.ConvertToCardinal(Vector2.Angle(Vector2.up, _aspect.MapPosition - newPos));
        _aspect.MapPosition = newPos;

        Tilemap.MoveEntityBetweenTiles(_aspect.MapPosition, newPos);

        //TODO:
        //Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.UpdateEntityPosition);
        //msg.Add(_aspect.Code);
        //msg.Add(newPos);
    }
}
