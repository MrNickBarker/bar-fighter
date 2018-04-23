using UnityEngine;
using FighterInput;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Fighters))]
public class FightController : MonoBehaviour {

    public AudioSource audioSource;
    public AudioClip punchSound;
    public AudioClip kickSound;

    private Fighters fighters;
    public bool started = false;

	private void Start() {
        fighters = GetComponent<Fighters>();
	}

	public void OnPlayerMove(Move move) {
        HandleMove(fighters.player, fighters.computer, move);
    }

    public void OnComputerMove(Move move) {
        HandleMove(fighters.computer, fighters.player, move);
    }

    void HandleMove(Fighter attacker, Fighter target, Move move) {
        if (started == false ||
            Time.time < attacker.cooldown || 
            target.poser.CurrentStance == Poser.Stance.KnockedOut ||
            attacker.poser.CurrentStance == Poser.Stance.KnockedOut) return;

        if (attacker.Stamina > move.StaminaCost() && (move == Move.Punch || move == Move.Kick)) {
            attacker.cooldown = Time.time + move.Cooldown();
            attacker.Stamina -= move.StaminaCost();
            attacker.poser.Take(move.Stance(), move.Duration());
            audioSource.PlayOneShot(move == Move.Punch ? punchSound : kickSound);
            if (target.poser.CurrentStance != move.CounterStance()) {
                Damage(target, move.Damage(), move.Duration());
            }
        }
        if (move == Move.BlockPunch || move == Move.BlockKick) {
            attacker.poser.Take(move.Stance(), move.Duration());
        }
    }

    private void Damage(Fighter target, int damage, float duration) {
        target.Health -= damage;
        if (target.Health > 0) {
            target.poser.InterruptCurrentStance(Poser.Stance.Damaged, duration);
        }
        else {
            target.poser.CurrentStance = Poser.Stance.KnockedOut;
            Utils.Delay(3, () => {
                SceneManager.LoadScene("Chat");
            });
        }
    }
}
