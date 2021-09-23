using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;

[System.Flags]
public enum InterruptEventType
{
    Movement_Start = 1 << 0,
    Movement_Passby = 1 << 1,
    Damage = 1 << 2,
    Heal = 1 << 3,
    Interrupt = 1 << 4,
    Enemy_targeted = 1 << 5
}

public static class Timeline
{
    public static uint TotalElapsedInitiative { get; private set; } = 0;
    public static uint EventCount { get { return (uint)timelineEvents.Count; } }

    private static List<Pair<uint,ITimelineEvent>> timelineEvents = new List<Pair<uint, ITimelineEvent>>();

    public static void AddTimelineEvent(uint _initiative, ITimelineEvent _event)
    {
        Pair<uint, ITimelineEvent> timelineEvent = new Pair<uint, ITimelineEvent>(_initiative, _event);

        if (timelineEvents.Count == 0 || timelineEvents[timelineEvents.Count - 1].Initiative < _initiative)
            timelineEvents.Add(timelineEvent);
        else
        {
            for (int i = 0; i < timelineEvents.Count; i++)
            {
                if (_initiative == timelineEvents[i].Initiative)
                {
                    if (_event.PlaceInfront)
                        timelineEvents.Insert(i, timelineEvent);
                    else
                        if(i == timelineEvents.Count)
                            timelineEvents.Add(timelineEvent);
                        else
                            timelineEvents.Insert(i + 1, timelineEvent);
                    break;
                }
                else if (_initiative < timelineEvents[i].Initiative)
                {
                    timelineEvents.Insert(i, timelineEvent);
                    break;
                }
            }
        }
    }

    public static void ClearEvents() { timelineEvents.Clear(); }

    public static void Progress()
    {
        if (timelineEvents.Count != 0)
        {
            if (timelineEvents[0].Initiative != 0)
            {
                uint decrement = timelineEvents[0].Initiative;
                TotalElapsedInitiative += decrement;

                for (int i = 0; i < timelineEvents.Count; i++)
                    timelineEvents[i].Initiative -= decrement;
            }

            //TODO: tell client to update ui or smth
            timelineEvents[0].Event.Activate();
            timelineEvents.RemoveAt(0);
        }
    }

    public static ReadOnlyCollection<Pair<uint, ITimelineEvent>> GetEventsList() { return timelineEvents.AsReadOnly(); }
}

public class Pair<T1, T2>
{
    public T1 Initiative { get; set; }
    public T2 Event { get; }

    public Pair(T1 _initiative, T2 _event)
    {
        Initiative = _initiative;
        Event = _event;
    }
}