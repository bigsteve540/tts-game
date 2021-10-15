using InterruptParameters;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Pathing;
using RiptideNetworking;

public static class Movement
{
    public const InterruptEventType MOVE_ALL = InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby;
    public const InterruptEventType MOVE_DASH = InterruptEventType.Movement_Start | InterruptEventType.Movement_Passby;
    public const InterruptEventType MOVE_BLINK = InterruptEventType.Movement_Start;

    public static void MoveEntityAlongPath(IEntityBehaviour _target, Path _path)
    {
        InterruptData data = new InterruptData(_target.EntityID, _path.MovementFlags, _path);

        if (GameEventSystem.CheckEventInterrupted(data) || _path.PathCost > _target.ActionPoints.MeterValue)
            return;

        _target.FacingDirection = Utilities.ConvertToCardinal(Vector2.Angle(Vector2.up, _target.MapPosition - _path.End.Coords));
        _target.MapPosition = _path.End.Coords;

        Tilemap.MoveEntityBetweenTiles(_target.MapPosition, _path.End.Coords);

        //TODO: may be healthier to make whatever calls this method do the network messaging instead, as it may not always be required to send movement info to clients
        //Message msg = Message.Create(MessageSendMode.reliable, (ushort)ServerToClientRequest.UpdateEntityPosition);
        //msg.Add(_aspect.Code);
        //msg.Add(newPos);
    }

    public class Move : IAbilityStandard
    {
        public uint ActionPostCost => 0;
        public string Name => nameof(Move);
        public string Description => "Move to a target location.";

        public void Trigger(int _casterID, Message _message)
        {
            throw new System.NotImplementedException();
        }
    }
}
