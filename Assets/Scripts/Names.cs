using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Names {

    public static string RandomName(string previousName) {
        string name;
        do {
            name = names[Random.Range(0, names.Length)];
        } while (name == previousName);
        return name;
    }

    static string[] names = {
        "Chad", "Chet", "Thad", "Bryce", "Trey", "Tanner", "Hunter", "Chip", "Topher", "Zayne", 
        "Tucker", "Lance", "Dirk", "Blake", "Skip", "Spencer", "Brett", "Declan", "Brent", "Zeke", 
        "Brayden", "D", "Clayton", "Dick", "Caleb", "Trevor", "Aiden", "Lucky", "Tyler", "Dylan", 
        "Brenden", "Clint", "Brock", "Chaz", "Tripp", "Biff", "Blane", "Brad", "Rip", "Track", 
        "Trent", "Cayden", "Scooter", "Cody", "Pax", "Tad", "Austin", "Justin", "Gabe", "Todd"
    };

    public static int RandomAge() {
        return Random.Range(18, 30);
    }
}
