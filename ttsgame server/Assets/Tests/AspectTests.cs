using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class AspectTests
    {
        [Test]
        public void Aspect_Create_Passes()
        {
            // Use the Assert class to test conditions
            AspectData d = Resources.Load<AspectData>($"Aspects/A000");

            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            Assert.AreEqual(1, a.GroupingID);
            Assert.AreEqual(GameManager.Entities.Count - 1, a.EntityID);

            Assert.AreEqual(d.Name, a.Name);
            Assert.AreEqual("A000", a.Code);

            Assert.AreEqual(d.MaxHealth, a.MaxHP);
            Assert.AreEqual(d.MaxHealth, a.CurrentHP);

            Assert.AreEqual(d.BaseArmor, a.BaseArmor);
            Assert.AreEqual(d.BaseArmor, a.CurrentArmor);

            Assert.AreEqual(d.BaseInitiative, a.BaseInitiative);
            Assert.AreEqual(d.InitiativeOffset, a.InitiativeOffset);

            Assert.AreEqual(d.MaxActionPoints, a.TotalActionPoints);
            Assert.AreEqual(d.MaxActionPoints, a.CurrentActionPoints);

            Assert.AreEqual(a.MapPosition, new Vector2(0, 0));
            Assert.AreSame(d.Abilities, a.Abilities);
        }
    }
}
