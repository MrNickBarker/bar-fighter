using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Stance Sprites")]
public class StanceSprites : ScriptableObject {
    public Sprite idleSprite;
    public Sprite punchSprite;
    public Sprite kickSprite;
    public Sprite blockPunchSprite;
    public Sprite blockKickSprite;
    public Sprite damagedSprite;
    public Sprite knockedOutSprite;

    public Sprite SpriteForStance(Poser.Stance stance) {
        switch (stance) {
            case Poser.Stance.Idle:
                return idleSprite;
            case Poser.Stance.Punch:
                return punchSprite;
            case Poser.Stance.Kick:
                return kickSprite;
            case Poser.Stance.BlockPunch:
                return blockPunchSprite;
            case Poser.Stance.BlockKick:
                return blockKickSprite;
            case Poser.Stance.Damaged:
                return damagedSprite;
            case Poser.Stance.KnockedOut:
                return knockedOutSprite;
        }
        return null;
    }
}
