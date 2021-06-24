using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITimelineEvent
{
    uint Initiative { get; set; }
    bool PlaceInfront { get; }

    void Activate();
}
