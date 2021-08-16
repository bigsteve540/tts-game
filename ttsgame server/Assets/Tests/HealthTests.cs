using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class HealthTests
    {
        [Test]
        public void Health_Damage_Flat_ZeroArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -100, false));

            Assert.AreEqual(4900, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Max_ZeroArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, false));

            Assert.AreEqual(4500, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Current_ZeroArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -2500, false));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, false));
            Assert.AreEqual(1250, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Missing_ZeroArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -2500, false));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, false));
            Assert.AreEqual(1250, a.CurrentHP);
        }

        [Test]
        public void Health_Damage_Flat_WithArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -200, false));

            Assert.AreEqual(2420, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Max_WithArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, false));

            Assert.AreEqual(2370, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Current_WithArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1370, false));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, false));
            Assert.AreEqual(745, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Missing_WithArmor_NoArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1370, false));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, false));
            Assert.AreEqual(745, a.CurrentHP);
        }

        [Test]
        public void Health_Damage_Flat_WithArmor_WithArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -200, true));

            Assert.AreEqual(2300, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Max_WithArmor_WithArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, true));

            Assert.AreEqual(2250, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Current_WithArmor_WithArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1250, true));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, true));
            Assert.AreEqual(625, a.CurrentHP);
        }
        [Test]
        public void Health_Damage_Missing_WithArmor_WithArmorIgnore_Passes()
        {
            Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1250, true));

            Health.Modify(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, true));
            Assert.AreEqual(625, a.CurrentHP);
        }
    }
}
