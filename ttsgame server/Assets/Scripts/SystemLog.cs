﻿using System;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;

public class SystemLog : MonoBehaviour
{
    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr GetStdHandle(int nStdHandle);
    [DllImport("kernel32.dll", SetLastError = true)]
    static extern bool CancelIoEx(IntPtr handle, IntPtr lpOverlapped);
    
    const int STD_INPUT_HANDLE = -10;
    
    private static bool locked = false;
    
    public static void Print(object _msg)
    {
        locked = false;
#if UNITY_SERVER
        Console.WriteLine(_msg);
#else
        Debug.Log(_msg);
#endif
    }
    
    public static void AllowInput()
    {
#if false
        //Start the timeout
        Task.Delay(TimeSpan.FromMilliseconds(-1)).ContinueWith(_ =>
        {
            if (!locked)
            {
                // Timeout => cancel the console read
                IntPtr handle = GetStdHandle(STD_INPUT_HANDLE);
                CancelIoEx(handle, IntPtr.Zero);
            }
        });
    
        try
        {
            // Start reading from the console
            string line = Console.ReadLine();
            locked = true;
            ConsoleCommandHandler.ParseInput(line);
        }
        // Handle the exception when the operation is canceled
        catch (InvalidOperationException) //is never throwing an exception but still seems to function as intended
        {
            Print("Operation canceled");
        }
        catch (OperationCanceledException)
        {
            Print("Operation canceled");
        }
#endif
    }
}
