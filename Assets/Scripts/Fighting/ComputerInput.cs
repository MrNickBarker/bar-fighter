using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FighterInput;

namespace FighterInput {
    public class ComputerInput : MonoBehaviour {

        private Move[][] combos = {
            new Move[] { Move.Kick, Move.Kick, Move.Punch, Move.BlockPunch },
            new Move[] { Move.Punch, Move.Punch, Move.Kick, Move.BlockKick },
            new Move[] { Move.BlockPunch, Move.Kick, Move.BlockPunch },
            new Move[] { Move.BlockKick, Move.Punch, Move.BlockKick },
            new Move[] { Move.Kick, Move.Punch, Move.Kick },
            new Move[] { Move.Punch, Move.Kick, Move.Punch }
        };
        private Move[] idleCombo = { Move.Idle };

        private FightController controller;
        private Move[] currentCombo;
        private int comboIndex = 0;
        private float cooldown;

        void Start() {
            controller = FindObjectOfType<FightController>();
            currentCombo = idleCombo;
        }

        private void Update() {
            if (Time.time >= cooldown) {
                comboIndex += 1;
                if (comboIndex >= currentCombo.Length) {
                    if (currentCombo == idleCombo) {
                        currentCombo = RandomCombo();
                    }
                    else {
                        currentCombo = idleCombo;
                    }
					comboIndex = 0;
                }
                UpdateCooldown();
            }
            controller.OnComputerMove(currentCombo[comboIndex]);
        }

        private Move[] RandomCombo() {
            return combos[Random.Range(0, combos.Length)];
        }

        private void UpdateCooldown() {
            switch (currentCombo[comboIndex]) {
                case Move.BlockKick:
                case Move.BlockPunch:
                    cooldown = Time.time + 0.5f;
                    break;
				case Move.Idle:
					cooldown = Time.time + Random.Range(0.2f, 1f);
                    break;
                default:
                    cooldown = Time.time + currentCombo[comboIndex].Cooldown();
                    break;
            }
        }
    }
}
