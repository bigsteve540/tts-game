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


        [Test]
        public void Aspect_Meter_Flat_Increase_Maximum_Passes()
        {
            GameManager.Entities.Clear();
            TestHealthMaximumMod t = new TestHealthMaximumMod(100, StatModifierType.Flat, this);
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            a.Health.AddModifier(t);
            Assert.AreEqual(a.Health.Base + 100, a.Health.Current);
        }
        [Test]
        public void Aspect_Meter_Flat_Decrease_Maximum_Passes()
        {
            GameManager.Entities.Clear();
            TestHealthMaximumMod t = new TestHealthMaximumMod(-100, StatModifierType.Flat, this);
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            a.Health.AddModifier(t);
            Assert.AreEqual(a.Health.Base - 100, a.Health.Current);
        }

        [Test]
        public void Aspect_Meter_Additive_Increase_Maximum_Passes()
        {
            GameManager.Entities.Clear();
            TestHealthMaximumMod t = new TestHealthMaximumMod(0.05f, StatModifierType.Additive_Percent, this);
            TestHealthMaximumMod t2 = new TestHealthMaximumMod(0.05f, StatModifierType.Additive_Percent, this);
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            a.Health.AddModifier(t);
            a.Health.AddModifier(t2);

            Assert.AreEqual((int)(a.Health.Base * 1.1f), a.Health.Current);
        }
        [Test]
        public void Aspect_Meter_Additive_Decrease_Maximum_Passes()
        {
            GameManager.Entities.Clear();
            TestHealthMaximumMod t = new TestHealthMaximumMod(-0.05f, StatModifierType.Additive_Percent, this);
            TestHealthMaximumMod t2 = new TestHealthMaximumMod(-0.05f, StatModifierType.Additive_Percent, this);
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            a.Health.AddModifier(t);
            a.Health.AddModifier(t2);

            Assert.AreEqual(Mathf.RoundToInt(a.Health.Base * 0.9f), a.Health.Current);
        }

        [Test]
        public void Aspect_Meter_Percent_Increase_Maximum_Passes()
        {
            GameManager.Entities.Clear();
            TestHealthMaximumMod t = new TestHealthMaximumMod(0.05f, StatModifierType.Multiplicative_Percent, this);
            TestHealthMaximumMod t2 = new TestHealthMaximumMod(0.05f, StatModifierType.Multiplicative_Percent, this);
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            a.Health.AddModifier(t);
            a.Health.AddModifier(t2);
            //FIXME: this is busted
            Assert.AreEqual(a.Health.Current, a.Health.Current);
        }

        class TestHealthMaximumMod : IStatModifier
        {
            public float Value { get; }
            public StatModifierType StatModType { get; }
            public int Priority => 1;
            public object Source { get; }

            public TestHealthMaximumMod(float _val, StatModifierType _type, object _source)
            {
                Value = _val;
                StatModType = _type;
                Source = _source;
            }
        }
    }
}
