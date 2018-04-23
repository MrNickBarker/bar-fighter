using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FighterRandomizer : MonoBehaviour {

    public StanceSprites[] pants;
    public StanceSprites[] tops;
    public StanceSprites[] hair;

    public Color[] skinColors;
    public Color[] clothesColors;
    public Color[] hairColors;

    public Poser player;
    public Poser computer;

	private void Awake() {
        RandomizeFigter(player);
        RandomizeFigter(computer);
	}

    void RandomizeFigter(Poser fighter) {
        int pantsIndex = Random.Range(0, pants.Length + 1);
        if (pantsIndex < pants.Length) {
            fighter.pantsSprites = pants[pantsIndex];
            fighter.pantsSpriteRenderer.color = clothesColors[Random.Range(0, clothesColors.Length)];
        }

        int topIndex = Random.Range(0, tops.Length + 1);
        if (topIndex < tops.Length) {
            fighter.shirtSprites = tops[topIndex];
            fighter.shirtSpriteRenderer.color = clothesColors[Random.Range(0, clothesColors.Length)];
        }

        int hairIndex = Random.Range(0, hair.Length + 1);
        if (hairIndex < hair.Length) {
            fighter.hairSprites = hair[hairIndex];
            fighter.hairSpriteRenderer.color = hairColors[Random.Range(0, hairColors.Length)];
        }

        fighter.manSpriteRenderer.color = skinColors[Random.Range(0, skinColors.Length)];
    }
}
