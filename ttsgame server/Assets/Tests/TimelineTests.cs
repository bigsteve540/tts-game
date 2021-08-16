using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class TimelineTests
    {
        // A Test behaves as an ordinary method
        [Test]
        public void Timeline_AddEvent_Passes()
        {
            // Use the Assert class to test conditions
            Timeline.ClearEvents();
            FakeTimelineEvent fte = new FakeTimelineEvent();

            Timeline.AddTimelineEvent(0, fte);

            Assert.AreEqual(1, Timeline.EventCount);
        }
        [Test]
        public void Timeline_PlaceInfront_Passes()
        {
            Timeline.ClearEvents();
            FakeTimelineEvent fte = new FakeTimelineEvent
            {
                PlaceInfront = true
            };

            Timeline.AddTimelineEvent(0, new FakeTimelineEvent());
            Timeline.AddTimelineEvent(0, fte);

            Assert.AreSame(fte, Timeline.GetEventsList()[0].Event);
        }
        [Test]
        public void Timeline_Progress_Passes()
        {
            Timeline.ClearEvents();
            FakeTimelineEvent fte = new FakeTimelineEvent();

            Timeline.AddTimelineEvent(0, new FakeTimelineEvent());
            Timeline.AddTimelineEvent(0, fte);

            Timeline.Progress();

            Assert.AreEqual(1, Timeline.EventCount);
            Assert.AreSame(fte, Timeline.GetEventsList()[0].Event);
        }
        class FakeTimelineEvent : ITimelineEvent
        {
            public bool PlaceInfront { get; set; }

            public void Activate()
            {
                
            }
        }
    }
}
