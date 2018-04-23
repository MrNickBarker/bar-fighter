using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FighterInput {

    public enum Move {
        Kick, Punch, BlockPunch, BlockKick, Idle
    }

    public static class MoveMethods {
        public static int Damage(this Move move) {
            switch (move) {
                case Move.Kick:
                    return 8;
                case Move.Punch:
                    return 4;
                default:
                    return 0;
            }
        }

        public static float Cooldown(this Move move) {
            switch (move) {
                case Move.Kick:
                    return 0.3f;
                case Move.Punch:
                    return 0.25f;
                default:
                    return 0;
            }
        }

        public static int StaminaCost(this Move move) {
            switch (move) {
                case Move.Kick:
                    return 40;
                case Move.Punch:
                    return 30;
                case Move.BlockKick:
                    return 15;
                case Move.BlockPunch:
                    return 10;
                default:
                    return 0;
            }
        }

        public static float Duration(this Move move) {
            switch (move) {
                case Move.Kick:
                    return 0.2f;
                case Move.Punch:
                    return 0.15f;
                case Move.BlockKick:
                case Move.BlockPunch:
                    return 0.1f;
                default:
                    return 0;
            }
        }

        public static Poser.Stance Stance(this Move move) {
            switch (move) {
                case Move.Kick:
                    return Poser.Stance.Kick;
                case Move.Punch:
                    return Poser.Stance.Punch;
                case Move.Idle:
                    return Poser.Stance.Idle;
                case Move.BlockKick:
                    return Poser.Stance.BlockKick;
                case Move.BlockPunch:
                    return Poser.Stance.BlockPunch;
                default:
                    return Poser.Stance.Idle;
            }
        }

        public static Poser.Stance CounterStance(this Move move) {
            switch (move) {
                case Move.Kick:
                    return Poser.Stance.BlockKick;
                case Move.Punch:
                    return Poser.Stance.BlockPunch;
                default:
                    return Poser.Stance.Idle;
            }
        }
    }
}
