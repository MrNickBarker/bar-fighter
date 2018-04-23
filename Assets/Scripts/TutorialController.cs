using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialController : MonoBehaviour {

    void Update() {
        if (Input.GetKeyDown(Utils.blockKickKey) || Input.GetKeyDown(Utils.blockPunchAction1Key) || Input.GetKeyDown(Utils.punchAction2Key) || Input.GetKeyDown(Utils.kickKey)) {
            FindObjectOfType<PhoneManager>().ShowSwiping();
        }
    }
}
