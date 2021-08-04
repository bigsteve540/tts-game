﻿using RiptideNetworking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveToTileAbilityData : AspectAbilityData
{
    public override void TriggerAbility(IEntityBehaviour _caster, Message _message)
    {
        Vector2 pos = _message.GetVector2();
        _caster.MoveToTile((int)pos.x, (int)pos.y);
    }
}