using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum InterruptEventType { Any, Movement_Start, Movement_Passby, Damage, Heal, Interrupt, Enemy_targeted }

public static class Timeline
{
    public static uint TotalElapsedInitiative { get; private set; } = 0;

    private static List<ITimelineEvent> timelineEvents = new List<ITimelineEvent>();

    public static void AddTimelineEvent(ITimelineEvent _event)
    {
        if (timelineEvents.Count == 0 || timelineEvents[timelineEvents.Count - 1].Initiative < _event.Initiative)
            timelineEvents.Add(_event);
        else
        {
            for (int i = 0; i < timelineEvents.Count; i++)
            {
                if (_event.Initiative == timelineEvents[i].Initiative)
                {
                    if (_event.PlaceInfront)
                        timelineEvents.Insert(i, _event);
                    else
                        if(i == timelineEvents.Count)
                            timelineEvents.Add(_event);
                        else
                            timelineEvents.Insert(i + 1, _event);
                    break;
                }
                else if (_event.Initiative < timelineEvents[i].Initiative)
                {
                    timelineEvents.Insert(i, _event);
                    break;
                }
            }
        }
    }

    public static void Progress() //FIXME: probably called by endturn method
    {
        if (timelineEvents.Count != 0)
        {
            if (timelineEvents[0].Initiative != 0)
            {
                uint decrement = timelineEvents[0].Initiative;
                TotalElapsedInitiative += decrement;

                foreach (ITimelineEvent action in timelineEvents)  
                    action.Initiative -= decrement;
            }

            //TODO: tell client to update ui or smth
            timelineEvents[0].Activate();
            timelineEvents.RemoveAt(0);
        }
    }
}