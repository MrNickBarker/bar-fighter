using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ChatManager : MonoBehaviour {

    public RectTransform chatContent;
    public Text titleLabel;
    public GameObject sentMessage;
    public GameObject receivedMessage;
    public GameObject startMessage;
    public GameObject endMessage;
    public GameObject answer1;
    public Text answer1Message;
    public GameObject answer2;
    public Text answer2Message;
    public string oponentName;
    public AudioSource audioSource;
    public AudioClip sentSound;
    public AudioClip receivedSound;

    private Chat.Topic topic;
    private string lastReaction;
    private int score = 3;

    private void OnEnable() {
        foreach (RectTransform r in chatContent) {
            Destroy(r.gameObject);
        }
		score = 3;
        titleLabel.text = oponentName;
        AddChatMessage(startMessage, "You are now trash talking with " + oponentName);
		StartNewTopic(1);
	}

	void StartNewTopic(float delay) {
        answer1.SetActive(false);
        answer2.SetActive(false);
        topic = Chat.RandomTopic(topic);
        Utils.Delay(delay, () => {
            audioSource.PlayOneShot(receivedSound);
            AddChatMessage(receivedMessage, topic.supposition);
            Utils.Delay(1, () => {
                answer1Message.text = topic.answer1;
                answer2Message.text = topic.answer2;
                answer1.SetActive(true);
                answer2.SetActive(true);
            });
        });
    }

    void SelectAnswer(bool first) {
        answer1.SetActive(false);
        answer2.SetActive(false);
        audioSource.PlayOneShot(sentSound);
        AddChatMessage(sentMessage, first ? topic.answer1 : topic.answer2);
        bool isReactionPositive = Random.Range(0, 2) == 1;
        score += isReactionPositive ? -1 : 6;
        Utils.Delay(1, () => {
            audioSource.PlayOneShot(receivedSound);
            if (score <= 1) {
                AddChatMessage(receivedMessage, Chat.RandomEnding(true));
                Utils.Delay(1, () => {
                    AddChatMessage(endMessage, oponentName + " disconnected...");
                    Utils.Delay(2, () => {
                        FindObjectOfType<PhoneManager>().ShowSwiping();
                    });
                });
            }
            else if (score >= 10) {
                AddChatMessage(receivedMessage, Chat.RandomEnding(false));
                Utils.Delay(1, () => {
                    AddChatMessage(endMessage, "FIGHT FIGHT FIGHT");
                    Utils.Delay(2, () => {
                        SceneManager.LoadScene("Fight");
                    });
                });
            }
            else {
                lastReaction = Chat.RandomReaction(isReactionPositive, lastReaction);
                AddChatMessage(receivedMessage, lastReaction);
                StartNewTopic(1);
            }
        });
    }

    private void AddChatMessage(GameObject prefab, string text) {
        var go = Instantiate(prefab);
        go.GetComponent<RectTransform>().SetParent(chatContent, false);
        go.GetComponentInChildren<Text>().text = text;
    }

    private void Update() {
        if (Input.GetKeyDown(Utils.blockPunchAction1Key) && answer1.activeInHierarchy) {
            SelectAnswer(true);
        }
        else if (Input.GetKeyDown(Utils.punchAction2Key) && answer2.activeInHierarchy) {
            SelectAnswer(false);
        }
    }

    public void OnAnswer1Click() {
        SelectAnswer(true);
    }

    public void OnAnswer2Click() {
        SelectAnswer(false);
    }
}
