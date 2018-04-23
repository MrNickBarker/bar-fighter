using System.Collections;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectTransform))]
public class MatchPanel : MonoBehaviour {

    public Text subtitleLabel;
    public Image background;
    public Image dudeImage;
    RectTransform rectTransform;
    bool shown = false;
    private string oponentName;

    void Start() {
        rectTransform = GetComponent<RectTransform>();
        MoveToStartingPosition();
    }

	void Update() {
        if (shown == false) return;
        if (Input.GetKeyDown(Utils.blockKickKey) ||  Input.GetKeyDown(Utils.blockPunchAction1Key) || Input.GetKeyDown(Utils.punchAction2Key) || Input.GetKeyDown(Utils.kickKey)) {
            OnSendMessageClick();
        }
    }

    public void OnSendMessageClick() {
        FindObjectOfType<PhoneManager>().ShowChat(oponentName);
    }

    public void AnimateIn(string name, Sprite dude, Color color) {
        background.color = color;
        dudeImage.sprite = dude;
        oponentName = name;
        subtitleLabel.text = "You and " + oponentName+ " are thinking about fighting each other.";
        StartCoroutine(AnimateInCoroutine());
    }

    IEnumerator AnimateInCoroutine() {
        Vector2 pivot = rectTransform.pivot;
        float step = 0.02f;
        float minStep = 0.001f;
        while (pivot.y > step) {
            pivot.y -= step;
            if (step > minStep) {
                step = (float)pivot.y / 3f;
            }
            rectTransform.pivot = pivot;
            yield return new WaitForEndOfFrame();
        }
        rectTransform.pivot = new Vector2(0.5f, 0f);
        shown = true;
    }

    public void MoveToStartingPosition() {
        rectTransform.pivot = new Vector2(0.5f, 1f);
        shown = false;
    }
}
