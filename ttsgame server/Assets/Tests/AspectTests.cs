using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
            GameManager.Entities.Clear();
            AbilityContainer.AbilitiesMap.Clear();

            AspectData d = Resources.LoadAll<AspectData>($"Aspects").Where(aspect => aspect.Code == "A000").First();

            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            Assert.AreEqual(1, a.GroupingID);
            Assert.AreEqual(GameManager.Entities.Count, a.EntityID);

            Assert.AreEqual(d.Name, a.Name);
            Assert.AreEqual("A000", a.Code);

            Assert.AreEqual(d.MaxHealth, a.Health.Current);
            Assert.AreEqual(d.BaseArmor, a.Armor.Current);
            Assert.AreEqual(d.MaxActionPoints, a.ActionPoints.Current);

            Assert.AreEqual(d.BaseInitiative, a.BaseInitiative);
            Assert.AreEqual(d.InitiativeOffset, a.InitiativeOffset);


            Assert.AreEqual(a.MapPosition, new Vector2(0, 0));
            Assert.AreEqual(d.Code, (a as IAbilityCasterBehaviour).Code);
        }
    }
}
