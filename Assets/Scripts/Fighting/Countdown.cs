using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class Countdown : MonoBehaviour {

    Text label;

	void Start() {
        label = GetComponent<Text>();
        StartCoroutine(CountdownCoroutine());
	}
	
    IEnumerator CountdownCoroutine() {
        yield return new WaitForSeconds(1);
        label.text = "2";
        yield return new WaitForSeconds(1);
        label.text = "1";
        yield return new WaitForSeconds(1);
        label.text = "FIGHT";
		FindObjectOfType<FightController>().started = true;
        yield return new WaitForSeconds(1);
        label.enabled = false;
    }
}
