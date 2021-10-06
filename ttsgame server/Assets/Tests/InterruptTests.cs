using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NUnit.Framework;
using UnityEngine.TestTools;

namespace Tests
{
    public class InterruptTests
    {
        bool moveInterruptSuccess = false;

        //doesn't work bc networkmanager instance isnt created until runtime

        private bool MoveInterrupt(InterruptData _d)
        {
            if (!_d.InterruptFlags.HasFlag(Movement.MOVE_ALL))
            {
                moveInterruptSuccess = false;
                return false;
            }
            moveInterruptSuccess = true;
            return true;
        }
    }
}

