using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Aspects/Definitions/Ability Actions/Debug Output Action")]
public class DebugOutputAction : AbilityAction
{
    [TextArea]
    public string OutputFormat = default;

    public override void InvokeAction(IEntityBehaviour _caster, List<IEntityBehaviour> _targets)
    {
        for (int i = 0; i < _targets.Count; i++)
            Debug.Log(OutputFormat + _targets[i].Name);
    }
}
