using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

public static class ConsoleCommandHandler
{
    public static Dictionary<string, ConsoleCommand> Commands = new Dictionary<string, ConsoleCommand>();
    private static bool loaded = false;

    public static void Init()
    {
        if (!loaded)
        {
            IEnumerable<Type> types = Assembly.GetAssembly(typeof(ConsoleCommand)).GetTypes()
            .Where(type => !type.IsAbstract && type.IsClass && type.IsSubclassOf(typeof(ConsoleCommand)));

            foreach (Type command in types)
            {
                ConsoleCommand instance = Activator.CreateInstance(command) as ConsoleCommand;
                Commands.Add(instance.Name.Trim(), instance);
            }

            SystemLog.AllowInput();
            loaded = true;
        }
    }

    public static void ParseInput(string _msg)
    {
        string[] input = _msg.Split();

        if (input.Length == 0
            || input == null
            || !Commands.ContainsKey(input[0]))
        {
            SystemLog.Print("Command not Recognized.");
            SystemLog.AllowInput();
            return;
        }

        if (Commands[input[0]].RequiresArgs)
        {
            if (input.Length - 1 == 0)
            {
                SystemLog.Print($"Command {input[0]} requires arguments: {Commands[input[0]].Usage}");
                SystemLog.AllowInput();
                return;
            }
        }

        try
        {
            Commands[input[0]].Execute(input.Skip(1).ToArray());
        }
        catch (Exception _e)
        {
            SystemLog.Print(_e.ToString());
        }
        SystemLog.AllowInput();
    }
}
