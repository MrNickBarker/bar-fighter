using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fighter {
    public Poser poser;
    public float cooldown = 0f;

    public ProgressBar healthBar;
    int health = 100;
    public int Health {
        get {
            return health;
        }
        set {
            health = value;
            healthBar.SetValue(health);
        }
    }

    public ProgressBar staminaBar;
	const int maxStamina = 100;
	int stamina = 100;
    public int Stamina {
        get {
            return stamina;
        }
        set {
            if (value > maxStamina) value = maxStamina;
            if (value < 0) value = 0;
            stamina = value;
            staminaBar.SetValue(stamina);
        }
    }
}

public class Fighters : MonoBehaviour {

    public Poser playerPoser;
    public ProgressBar playerHealthBar;
    public ProgressBar playerStaminaBar;
    public Poser computerPoser;
    public ProgressBar computerHealthBar;
    public ProgressBar computerStaminaBar;
    public Fighter player = new Fighter();
    public Fighter computer = new Fighter();

	void Awake () {
        player.poser = playerPoser;
        player.healthBar = playerHealthBar;
        player.staminaBar = playerStaminaBar;
        computer.poser = computerPoser;
        computer.healthBar = computerHealthBar;
        computer.staminaBar = computerStaminaBar;
	}

	private void Update() {
        RestoreStamina(player);
        RestoreStamina(computer);
	}

    private void RestoreStamina(Fighter fighter) {
        if (Time.time < fighter.cooldown) return;

        switch (fighter.poser.CurrentStance) {
            case Poser.Stance.Idle:
                fighter.Stamina += 2;
                break;
            case Poser.Stance.BlockPunch:
			case Poser.Stance.BlockKick:
                fighter.Stamina += 1;
                break;
        }
    }
}
