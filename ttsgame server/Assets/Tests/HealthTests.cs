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
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Flat, FLAT_DAMAGE));

                Assert.AreEqual(a.Health.Current + FLAT_DAMAGE, a.Health.MeterValue);
            }
            [Test]
            public void Health_Damage_Max_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Max, -0.1f));

                Assert.AreEqual(Mathf.RoundToInt(a.Health.Current + (a.Health.Current * -0.1f)), a.Health.MeterValue);
            }
            [Test]
            public void Health_Damage_Current_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Flat, -2500));

                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Current, -0.5f));
                Assert.AreEqual(Mathf.RoundToInt(a.Health.Current * 0.25f), a.Health.MeterValue);
            }
            [Test]
            public void Health_Damage_Missing_ZeroArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Flat, -2500));

                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Missing, -0.5f));
                Assert.AreEqual(Mathf.RoundToInt(a.Health.Current * 0.25f), a.Health.MeterValue);
            }

            [Test]
            public void Health_Damage_Flat_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Flat, FLAT_DAMAGE));

                Assert.AreEqual(a.Health.Current + ((FLAT_DAMAGE + a.Armor.Current)), a.Health.MeterValue);
            }
            [Test]
            public void Health_Damage_Max_WithArmor_NoArmorIgnore_Passes()
            {
                Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
                a.Health.Modify(new ValueEffector(0, null, ValueEffectorType.Max, -0.1f));

                Assert.AreEqual(Mathf.RoundToInt(a.Health.Current + (a.Health.Current * -0.1f) + a.Armor.Current), a.Health.MeterValue);
            }
            //TODO:
            //[Test]
            //public void Health_Damage_Current_WithArmor_NoArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, -1370, false));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Current, -0.5f, false));
            //    Assert.AreEqual(745, a.CurrentHP);
            //}
            //[Test]
            //public void Health_Damage_Missing_WithArmor_NoArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, -1370, false));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Missing, -0.5f, false));
            //    Assert.AreEqual(745, a.CurrentHP);
            //}

            //[Test]
            //public void Health_Damage_Flat_WithArmor_WithArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, FLAT_DAMAGE, true));

            //    Assert.AreEqual(a.MaxHP + FLAT_DAMAGE, a.CurrentHP);
            //}
            //[Test]
            //public void Health_Damage_Max_WithArmor_WithArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Max, -0.1f, true));

            //    Assert.AreEqual(2250, a.CurrentHP);
            //}
            //[Test]
            //public void Health_Damage_Current_WithArmor_WithArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, -1250, true));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Current, -0.5f, true));
            //    Assert.AreEqual(625, a.CurrentHP);
            //}
            //[Test]
            //public void Health_Damage_Missing_WithArmor_WithArmorIgnore_Passes()
            //{
            //    Aspect a = new Aspect(1, "A001", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, -1250, true));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Missing, -0.5f, true));
            //    Assert.AreEqual(625, a.CurrentHP);
            //}
        }

        public class HealTests
        {
            //TODO:
            //[Test]
            //public void Health_Heal_Flat_Passes()
            //{
            //    Aspect a = new Aspect(1, "A000", new Vector2(0, 0));
            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, FLAT_DAMAGE, true));

            //    Health.Heal(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Flat, FLAT_HEAL, false));

            //    Assert.AreEqual(a.MaxHP + FLAT_DAMAGE + FLAT_HEAL, a.CurrentHP);
            //}
            //[Test]
            //public void Health_Heal_Max_Passes()
            //{
            //    Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Max, -0.5f, true));
            //    Health.Heal(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Max, 0.1f, false));

            //    Assert.AreEqual(a.MaxHP * 0.5f + (a.MaxHP * 0.1f), a.CurrentHP);
            //}
            //[Test]
            //public void Health_Heal_Current_Passes()
            //{
            //    Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Max, -0.5f, true));
            //    Health.Heal(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Current, 0.1f, false));

            //    Assert.AreEqual(a.MaxHP * 0.5f + ((a.MaxHP * 0.5f) * 0.1f), a.CurrentHP);
            //}
            //[Test]
            //public void Health_Heal_Missing_Passes()
            //{
            //    Aspect a = new Aspect(1, "A000", new Vector2(0, 0));

            //    Health.Damage(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Max, -0.5f, true));
            //    Health.Heal(a, new EntityValueEffectParameters(0, null, ValueEffectorType.Missing, 0.1f, false));

            //    Assert.AreEqual(a.MaxHP * 0.5f + ((a.MaxHP - (a.MaxHP * 0.5f)) * 0.1f), a.CurrentHP);
            //}
        }

    }
}
