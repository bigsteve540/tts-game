using InterruptParameters;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Game.Pathing;
using RiptideNetworking;

namespace Abilities.Genevive
{
    public class ShatterEdge : IAbilityStandard, IAbilityInterruptable, IAbilityMeterEffect
    {
        public string Name { get; }
        public string Description { get; }
        public uint ActionPostCost { get; }

        public InterruptEventType InterruptFlags => InterruptEventType.Entity_Meter_Modify | Movement.MOVE_BLINK;
        public InterruptData InterruptData { get; private set; }
        public IInterruptParameters Parameters { get; private set; }

        public int Value => -500;
        public ValueEffectorType ModType => ValueEffectorType.Flat;
        public bool IgnoreArmor => false;

        public void Trigger(int _casterID, Message _message)
        {
            IEntityBehaviour target = GameManager.Entities[_message.GetInt()];

            Parameters = new Path(GameManager.Entities[_casterID].MapPosition, target.MapPosition, false);

            InterruptData = new InterruptData(_casterID, InterruptFlags, Parameters);
            if (GameEventSystem.CheckEventInterrupted(InterruptData))
                return;

            new ValueEffector();

            Movement.MoveEntityAlongPath(GameManager.Entities[_casterID], (Parameters as Path), InterruptFlags);

            throw new System.NotImplementedException();
        }
    }
}

