using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chat {

    public struct Topic {
		public string supposition;
		public string answer1;
		public string answer2;
		
		public Topic(string supposition, string answer1, string answer2) : this() {
			this.supposition = supposition;
			this.answer1 = answer1;
			this.answer2 = answer2;
		}
	}

    public static Topic RandomTopic(Topic? previousTopic) {
		Topic topic;
        do {
            topic = topics[Random.Range(0, topics.Length)];
        } while (topic.Equals(previousTopic));
        return topic;
    }
	
    static Topic[] topics = {
        new Topic("The Mavs suck hard!", "no u suck!", "GO MAVS BRAH!"),
        new Topic("Trump?", "COVFEFE", "MAGA!"),
        new Topic("Get Skyrim for Nintendo Switch bro", "FUS RO DAH!", "More like nintendNO"),
        new Topic("DTF?", "I'm always Down To Fight", "I'm always Down To F***"),
        new Topic("I like raisins in my cookies", "Um, are you like 90?", "I prefer rabbit droppings"),
        new Topic("She puts...", "the lime in the coconut?", "the lotion in the basket?"),
        new Topic("Vaccines cause autism", "lol whut?", "Nope"),
        new Topic("Jordan is still the best", "LeBron is the man", "Yeah!"),
        new Topic("Sleep is for the weak!", "I need a nap", "I haven't slept in days!"),
        new Topic("Beer or whiskey", "Beer", "Whiskey"),
        new Topic("Ferrari or Lamborghini", "Ferrari", "Lambo"),
        new Topic("Pineapple pizza?", "You monster!", "Duuuude"),
        new Topic("Star Trek or Star Wars?", "Live long and prosper", "May the force be with you"),
        new Topic("Bernie was cheated!", "Get of my lawn!", "Like totally")
    };

    public static string RandomReaction(bool isPositive, string previousReaction) {
        string reaction;
        string[] reactions = isPositive ? positiveReactions : negativeReactions;
        do {
            reaction = reactions[Random.Range(0, reactions.Length)];
        } while (reaction == previousReaction);
        return reaction;
    }

    static string[] positiveReactions = {
        "My man",
        "Awesome",
        "Brah",
        "Cool",
        "Totally",
        "Duuude",
        "Right on",
        "I know, right",
        "lol",
        "LMFAO"
    };

    static string[] negativeReactions = {
        "You suck",
        "You're an idiot",
        "You wish",
        "no u",
        "Poser",
        "FU",
        "You smart as a bunch of rocks",
        "u sound like a chat bot"
    };

    public static string RandomEnding(bool isPositive) {
        string[] endings = isPositive ? positiveEndings : negativeEndings;
        return endings[Random.Range(0, endings.Length)];
    }

    static string[] positiveEndings = {
        "I got no beef with you man",
        "We cool bro",
        "Damn, you too cool to fight",
        "You is a drinkin', not a fightin', buddy",
        "You killed the mood...",
    };

    static string[] negativeEndings = {
        "You better step up son!",
        "I'mma pummel yo ass",
        "LET'S DO THIS!",
        "Them's fightin' words",
        "*rips shirt off*",
        "You are gone, after I finish this beer"
    };
}
