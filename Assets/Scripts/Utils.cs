using System.Collections;
using UnityEngine;

public class Utils : MonoBehaviour {

    public static KeyCode punchAction2Key = KeyCode.J;
    public static KeyCode kickKey = KeyCode.K;
    public static KeyCode blockPunchAction1Key = KeyCode.F;
    public static KeyCode blockKickKey = KeyCode.D;

    private static Utils instance;
    private static Utils Instance {
        get {
            if (instance == null) {
                GameObject go = new GameObject("Utils");
                instance = go.AddComponent<Utils>();
            }
            return instance;
        }
    }

    public static void Delay(float delay, System.Action action) {
        Instance.StartCoroutine(Instance.DelayCoroutine(delay, action));
    }

    IEnumerator DelayCoroutine(float delay, System.Action action) {
        yield return new WaitForSeconds(delay);
        action();
    }
}
