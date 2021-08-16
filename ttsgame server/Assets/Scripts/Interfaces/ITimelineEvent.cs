using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITimelineEvent
{
    bool PlaceInfront { get; }

    void Activate();
}
