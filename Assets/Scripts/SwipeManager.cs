using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwipeManager : MonoBehaviour {

    public GameObject topPanel;
	public Image topPanelImage;
    private Text topLabel;
    private Image topPanelBackground;
    public GameObject bottomPanel;
	public Image bottomPanelImage;
    private Text bottomLabel;
    private Image bottomPanelBackground;
    private MatchPanel matchPanel;
    public Sprite[] dudes;

    private bool animating = false;
    private string topName;
    private string bottomName;

	private void Start() {
        matchPanel = GetComponentInChildren<MatchPanel>();

        topName = Names.RandomName("");
		topLabel = topPanel.GetComponentInChildren<Text>();
		topLabel.text = topName + ", " + Names.RandomAge();
        topPanelBackground = topPanel.GetComponent<Image>();
        topPanelBackground.color = Random.ColorHSV(0.1f, 0.9f);
        topPanelImage.sprite = RandomSprite(null);

        bottomName = Names.RandomName(topName);
        bottomLabel = bottomPanel.GetComponentInChildren<Text>();
        bottomLabel.text = bottomName + ", " + Names.RandomAge();
        bottomPanelBackground = bottomPanel.GetComponent<Image>();
        bottomPanelBackground.color = Random.ColorHSV(0.1f, 0.9f);
        bottomPanelImage.sprite = RandomSprite(topPanelImage.sprite);
	}

	private void Update() {
        if (animating) return;

		if (Input.GetKeyDown(Utils.blockPunchAction1Key)) {
            AnimateTopPanel(true);
		}
        else if (Input.GetKeyDown(Utils.punchAction2Key)) {
            AnimateTopPanel(false);
        }
	}

	private void OnDisable() {
        matchPanel.MoveToStartingPosition();
        animating = false;
	}

	public void OnFightClick() {
        if (animating) return;
        AnimateTopPanel(false);
    }

    public void OnSkipClick() {
        if (animating) return;
        AnimateTopPanel(true);
    }

    void AnimateTopPanel(bool left) {
        string matchName = topName;
        Sprite dude = topPanelImage.sprite;
        Color color = topPanelBackground.color;

        StartCoroutine(AnimateTopPanelCoroutine(left, () => {
            if (left == false && Random.Range(0, 2) == 0) {
                animating = true;
                matchPanel.AnimateIn(matchName, dude, color);
            }
        }));
    }

    IEnumerator AnimateTopPanelCoroutine(bool left, System.Action action) {
        animating = true;
        RectTransform rect = topPanel.GetComponent<RectTransform>();
        Vector2 position = rect.localPosition;
        float step = 0.1f;
        float maxStep = 20.0f;
        while (position.x < 240) {
            position.x += step;
            if (step < maxStep) {
                step += step;
            }
            if (left) {
                rect.localPosition = Vector2.Scale(new Vector2(-1, 1), position);
            }
            else {
				rect.localPosition = position;
            }
            yield return new WaitForEndOfFrame();
        }
        topPanelImage.sprite = bottomPanelImage.sprite;
        topPanelBackground.color = bottomPanelBackground.color;
        topLabel.text = bottomLabel.text;
        position.x = 0;
        rect.localPosition = position;
        topName = bottomName;
        bottomName = Names.RandomName(topName);
        bottomLabel.text = bottomName + ", " + Names.RandomAge();
        bottomPanelBackground.color = Random.ColorHSV(0.1f, 0.9f);
        bottomPanelImage.sprite = RandomSprite(topPanelImage.sprite);
        animating = false;
        action();
    }

    Sprite RandomSprite(Sprite previousSprite) {
        Sprite sprite;
        do {
            sprite = dudes[Random.Range(0, dudes.Length)];
        } while (sprite.Equals(previousSprite));
        return sprite;
    }
}
