using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class HealthTests
    {
        const int FLAT_DAMAGE = -200;
        const int FLAT_HEAL = 100;


        public class DamageTests
        {

            [Test]
            public void Health_Damage_Flat_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, FLAT_DAMAGE, false));

                Assert.AreEqual(a.MaxHP + FLAT_DAMAGE, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Max_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, false));

                Assert.AreEqual(4500, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Current_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -2500, false));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, false));
                Assert.AreEqual(1250, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Missing_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -2500, false));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, false));
                Assert.AreEqual(1250, a.CurrentHP);
            }

            [Test]
            public void Health_Damage_Flat_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, FLAT_DAMAGE, false));

                Assert.AreEqual(a.MaxHP + ((FLAT_DAMAGE + a.CurrentArmor)), a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Max_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, false));

                Assert.AreEqual(2370, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Current_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1370, false));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, false));
                Assert.AreEqual(745, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Missing_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1370, false));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, false));
                Assert.AreEqual(745, a.CurrentHP);
            }

            [Test]
            public void Health_Damage_Flat_WithArmor_WithArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, FLAT_DAMAGE, true));

                Assert.AreEqual(a.MaxHP + FLAT_DAMAGE, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Max_WithArmor_WithArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.1f, true));

                Assert.AreEqual(2250, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Current_WithArmor_WithArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1250, true));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Current, -0.5f, true));
                Assert.AreEqual(625, a.CurrentHP);
            }
            [Test]
            public void Health_Damage_Missing_WithArmor_WithArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, -1250, true));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Missing, -0.5f, true));
                Assert.AreEqual(625, a.CurrentHP);
            }
        }

        public class HealTests
        {
            [Test]
            public void Health_Heal_Flat_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Flat, FLAT_DAMAGE, true));

                Health.Heal(a, new HealthDataPacket(0, null, StatModifierType.Flat, FLAT_HEAL, false));

                Assert.AreEqual(a.MaxHP + FLAT_DAMAGE + FLAT_HEAL, a.CurrentHP);
            }
            [Test]
            public void Health_Heal_Max_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.5f, true));
                Health.Heal(a, new HealthDataPacket(0, null, StatModifierType.Max, 0.1f, false));

                Assert.AreEqual(a.MaxHP * 0.5f + (a.MaxHP * 0.1f), a.CurrentHP);
            }
            [Test]
            public void Health_Heal_Current_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.5f, true));
                Health.Heal(a, new HealthDataPacket(0, null, StatModifierType.Current, 0.1f, false));

                Assert.AreEqual(a.MaxHP * 0.5f + ((a.MaxHP * 0.5f) * 0.1f), a.CurrentHP);
            }
            [Test]
            public void Health_Heal_Missing_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

                Health.Damage(a, new HealthDataPacket(0, null, StatModifierType.Max, -0.5f, true));
                Health.Heal(a, new HealthDataPacket(0, null, StatModifierType.Missing, 0.1f, false));

                Assert.AreEqual(a.MaxHP * 0.5f + ((a.MaxHP - (a.MaxHP * 0.5f)) * 0.1f), a.CurrentHP);
            }
        }

    }
}
