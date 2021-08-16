using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Aspects/Definitions/Ability Actions/Debug Output Action")]
public class DebugOutputAction : AbilityAction
{
    [TextArea]
    public string OutputFormat = default;

    public override void InvokeAction(IEntityBehaviour _caster, object _targets)
    {
        IList list = (IList)_targets;
        for (int i = 0; i < list.Count; i++)
            Debug.Log(OutputFormat + (list[i] as IEntityBehaviour).Name);
    }
}
