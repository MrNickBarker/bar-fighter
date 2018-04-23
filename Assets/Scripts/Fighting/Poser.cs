using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SpriteRenderer))]
public class Poser : MonoBehaviour {

    public enum Stance {
        Idle, Punch, Kick, BlockPunch, BlockKick, Damaged, KnockedOut
    }

    public StanceSprites manSprites;
	public SpriteRenderer manSpriteRenderer;
    public StanceSprites pantsSprites;
    public SpriteRenderer pantsSpriteRenderer;
    public StanceSprites shirtSprites;
    public SpriteRenderer shirtSpriteRenderer;
    public StanceSprites hairSprites;
    public SpriteRenderer hairSpriteRenderer;

    private Coroutine stanceTimeout;
    private Stance? interruptedStance = null;
    private Coroutine interruptCoroutine;


    private Stance stance;
    public Stance CurrentStance {
        get {
            return stance;
        }
        set {
            stance = value;
            if (interruptedStance.HasValue) {
                if (interruptedStance.Value == stance) return;
                interruptedStance = null;
            }
            SetSprite(stance);
        }
    }

	private void Start() {
        CurrentStance = Stance.Idle;
	}

	public void Take(Stance stance, float time) {
        if (stanceTimeout != null) StopCoroutine(stanceTimeout);
        CurrentStance = stance;
        if (time > 0) {
            stanceTimeout = StartCoroutine(ReturnTo(Stance.Idle, time));
        }
    }

    IEnumerator ReturnTo(Stance st, float time) {
        yield return new WaitForSeconds(time);
        if (CurrentStance != Stance.KnockedOut) {
            CurrentStance = st;
        }
        interruptedStance = null;
    }

    public void InterruptCurrentStance(Stance interruptingStance, float time) {
        if (interruptCoroutine != null) StopCoroutine(interruptCoroutine);
        interruptedStance = CurrentStance;
        SetSprite(interruptingStance);
        interruptCoroutine = StartCoroutine(ReturnToCurrentStance(time));
    }

    IEnumerator ReturnToCurrentStance(float time) {
        yield return new WaitForSeconds(time);
        interruptedStance = null;
        SetSprite(CurrentStance);
    }

    private void SetSprite(Stance targetStance) {
        int order = targetStance == Stance.Punch || targetStance == Stance.Kick ? 10 : 0;
        SetSpriteForAllRenderers(order, targetStance);
    }

    private void SetSpriteForAllRenderers(int order, Stance targetStance) {
        manSpriteRenderer.sprite = manSprites.SpriteForStance(targetStance);
        manSpriteRenderer.sortingOrder = order;
        if (pantsSprites != null) {
            pantsSpriteRenderer.sprite = pantsSprites.SpriteForStance(targetStance);
            pantsSpriteRenderer.sortingOrder = manSpriteRenderer.sortingOrder + 1;
        }
        if (shirtSprites != null) {
            shirtSpriteRenderer.sprite = shirtSprites.SpriteForStance(targetStance);
            shirtSpriteRenderer.sortingOrder = manSpriteRenderer.sortingOrder + 2;
        }
        if (hairSprites != null) {
            hairSpriteRenderer.sprite = hairSprites.SpriteForStance(targetStance);
            hairSpriteRenderer.sortingOrder = manSpriteRenderer.sortingOrder + 1;
        }
    }
}
