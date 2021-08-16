using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class PlayerTests
    {
        [Test]
        public void Player_Create_Passes()
        {
            // Use the Assert class to test conditions
            Player.AllActive.Clear();
            Player p = new Player(1);

            Assert.AreEqual(1, p.GroupID);
            Assert.AreSame(null, p.Aspects);
            Assert.AreSame(Player.AllActive[1], p);
        }
    }
}
