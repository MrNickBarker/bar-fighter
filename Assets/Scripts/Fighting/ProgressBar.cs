using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(RectTransform))]
public class ProgressBar : MonoBehaviour {

    RectTransform rectTransform;

	private void Start() {
        rectTransform = GetComponent<RectTransform>();
	}

	public void SetValue(int value) {
        if (value < 0) value = 0;
        if (value > 100) value = 100;
        rectTransform.localScale = new Vector2((float)value / 100f, 1);
    }
}
