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
        public string Name => "Shatter Edge";
        public string Description => $"Dash to a target enemy and deal {Mathf.Abs(Value)} damage.";
        public uint ActionPostCost => 33;

        public InterruptEventType InterruptFlags => InterruptEventType.Entity_Meter_Modify | Movement.MOVE_BLINK;
        public IInterruptParameters Parameters { get; private set; }

        public int Value => -500;
        public ValueEffectorType ModType => ValueEffectorType.Flat;
        public bool IgnoreArmor => false;

        public void Trigger(int _casterID, Message _message)
        {
            IEntityBehaviour target = GameManager.Entities[_message.GetInt()];

            Parameters = new Path(GameManager.Entities[_casterID].MapPosition, target.MapPosition, InterruptFlags);

            if (GameEventSystem.CheckEventInterrupted(new InterruptData(_casterID, InterruptFlags, Parameters)))
                return;

            Movement.MoveEntityAlongPath(GameManager.Entities[_casterID], Parameters as Path);
            target.Health.Modify(new ValueEffector(_casterID, this, ModType, Value));
        }
    }

    public class GeneviveKnockback : IAbilityStandard, IAbilityInterruptable, IAbilityMeterEffect
    {
        public string Name { get; }
        public string Description { get; }
        public uint ActionPostCost { get; }

        public InterruptEventType InterruptFlags { get; }
        public IInterruptParameters Parameters { get; }

        public int Value { get; }
        public ValueEffectorType ModType { get; }

        public void Trigger(int _casterID, Message _message)
        {
            throw new System.NotImplementedException();
        }
    }
}

