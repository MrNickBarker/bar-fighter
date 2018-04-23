using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhoneManager : MonoBehaviour {

    public GameObject tutorial;
    public GameObject swiping;
    public ChatManager chat;

    public void ShowChat(string oponentName) {
        chat.oponentName = oponentName;
        chat.gameObject.SetActive(true);
        swiping.SetActive(false);
        tutorial.SetActive(false);
    }

    public void ShowSwiping() {
        chat.gameObject.SetActive(false);
        swiping.SetActive(true);
        tutorial.SetActive(false);
    }
}
