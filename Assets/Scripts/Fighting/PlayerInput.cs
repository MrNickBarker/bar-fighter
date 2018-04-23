using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FighterInput {
    public class PlayerInput : MonoBehaviour {

        private FightController controller;
        private bool interruptedBlock = false;

        void Start() {
            controller = FindObjectOfType<FightController>();
        }

        void Update() {
            if (Input.GetKeyDown(Utils.punchAction2Key)) {
                controller.OnPlayerMove(Move.Punch);
                InterruptBlock();
            }
            else if (Input.GetKeyDown(Utils.kickKey)) {
                controller.OnPlayerMove(Move.Kick);
                InterruptBlock();
            }
            else if (Input.GetKey(Utils.blockPunchAction1Key) && interruptedBlock == false) {
                controller.OnPlayerMove(Move.BlockPunch);
            }
            else if (Input.GetKey(Utils.blockKickKey) && interruptedBlock == false) {
                controller.OnPlayerMove(Move.BlockKick);
            }
            else {
                controller.OnPlayerMove(Move.Idle);
            }

            if (Input.GetKeyUp(Utils.blockKickKey) || Input.GetKeyUp(Utils.blockPunchAction1Key)) {
                interruptedBlock = false;
            }
        }

        private void InterruptBlock() {
            if (Input.GetKey(Utils.blockKickKey) || Input.GetKey(Utils.blockPunchAction1Key)) {
                interruptedBlock = true;
            }
        }
    }
}
