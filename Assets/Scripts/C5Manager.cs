using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Video;
using TMPro;
using UnityEngine.UI;

public class C5Manager : MonoBehaviour
{
    public RawImage rawImage;
    public VideoPlayer videoPlayer;
    public TMP_Text videoLabel;
    public TMP_Text instructions;
    public TMP_Text questionText1;
    public TMP_Text questionText2;
    public GameObject button1;
    public GameObject button2;

    // New elements for camera adjustment
    public RawImage adjustmentImage;
    public GameObject adjustButtonUp;
    public GameObject adjustButtonDown;
    public GameObject startButton;
    public Transform cameraRig; // Reference to the OVRCameraRigInteraction

    private List<string> videoList;
    private string video1, video2;
    private bool isWaitingForFirstResponse = false;
    private bool isWaitingForSecondResponse = false;
    private string sessionFilePath;
    private string selectedLeft;

    void Start()
    {
        // Hide UI elements initially
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);
        questionText1.gameObject.SetActive(false);
        questionText2.gameObject.SetActive(false);
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);
        instructions.gameObject.SetActive(false);

        // Show adjustment UI
        adjustmentImage.gameObject.SetActive(true);
        adjustButtonUp.gameObject.SetActive(true);
        adjustButtonDown.gameObject.SetActive(true);
        startButton.gameObject.SetActive(true);

        // Generate unique CSV file for this session
        sessionFilePath = GenerateUniqueCSVFile();
    }

    public void MoveCameraUp()
    {
        cameraRig.position += new Vector3(0, 0.01f, 0); // Moves the camera up
    }

    public void MoveCameraDown()
    {
        cameraRig.position -= new Vector3(0, 0.01f, 0); // Moves the camera down
    }

    public void StartExperiment()
    {
        // Hide adjustment UI
        adjustmentImage.gameObject.SetActive(false);
        adjustButtonUp.gameObject.SetActive(false);
        adjustButtonDown.gameObject.SetActive(false);
        startButton.gameObject.SetActive(false);

        // Show instructions
        StartCoroutine(ShowInstructions());
    }

    IEnumerator ShowInstructions()
    {
        instructions.gameObject.SetActive(true);
        yield return new WaitForSeconds(10f);
        instructions.gameObject.SetActive(false);

        LoadVideoList();
        yield return PlayNextPair();
    }

    void LoadVideoList()
    {
        videoList = new List<string>
        {
            "+10X.mp4", "+10Y.mp4", "+1X.mp4", "+1Y.mp4", "+2X.mp4", "+2Y.mp4", "+3X.mp4",
            "+3Y.mp4", "+4X.mp4", "+4Y.mp4", "+5X.mp4", "+5Y.mp4", "+6X.mp4", "+6Y.mp4",
            "+7X.mp4", "+7Y.mp4", "+8X.mp4", "+8Y.mp4", "+9X.mp4", "+9Y.mp4", "-10X.mp4",
            "-10Y.mp4", "-1X.mp4", "-1Y.mp4", "-2X.mp4", "-2Y.mp4", "-3X.mp4", "-3Y.mp4",
            "-4X.mp4", "-4Y.mp4", "-5X.mp4", "-5Y.mp4", "-6X.mp4", "-6Y.mp4", "-7X.mp4",
            "-7Y.mp4", "-8X.mp4", "-8Y.mp4", "-9X.mp4", "-9Y.mp4", "0XY.mp4"
        };
    }

    IEnumerator PlayNextPair()
    {
        if (videoList.Count == 0)
        {
            Debug.Log("Experiment Finished!");
            questionText1.text = "Condition Complete! Let the experimenter know so they can assist you. Closing app in 10 seconds...";
            questionText1.gameObject.SetActive(true);
            yield return new WaitForSeconds(10f);
            Application.Quit();

#if UNITY_ANDROID
            System.Diagnostics.Process.GetCurrentProcess().Kill();
#endif

            yield break;
        }

        isWaitingForFirstResponse = false;
        isWaitingForSecondResponse = false;

        video1 = "0XY.mp4";
        video2 = GetRandomVideo();

        if (Random.value > 0.5f)
        {
            (video1, video2) = (video2, video1);
        }

        yield return PlaySingleVideo(video1, "Video 1");

        // Hide the first video and wait 1.5 seconds
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);
        yield return new WaitForSeconds(1.5f);

        videoPlayer.Stop();
        yield return new WaitForSeconds(0.25f);

        yield return PlaySingleVideo(video2, "Video 2");

        videoPlayer.Stop();
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);

        yield return new WaitForSeconds(1f);

        questionText1.gameObject.SetActive(true);
        button1.gameObject.SetActive(true);
        button2.gameObject.SetActive(true);
        isWaitingForFirstResponse = true;
    }

    IEnumerator PlaySingleVideo(string videoFile, string label)
    {
        string videoPath = Path.Combine(Application.streamingAssetsPath, "C5", videoFile);
        if (Application.platform == RuntimePlatform.Android)
            videoPath = "file://" + videoPath;

        videoPlayer.Stop();
        videoPlayer.url = videoPath;
        videoPlayer.Prepare();

        while (!videoPlayer.isPrepared)
        {
            yield return null;
        }

        videoLabel.text = label;
        rawImage.gameObject.SetActive(true);
        videoLabel.gameObject.SetActive(true);

        videoPlayer.Play();

        while (videoPlayer.isPlaying || videoPlayer.frame < 1)
        {
            yield return null;
        }

        yield return new WaitForSeconds(1f);
    }

    string GetRandomVideo()
    {
        if (videoList.Count == 0) return "0XY.mp4";

        int randomIndex = Random.Range(0, videoList.Count);
        string selectedVideo = videoList[randomIndex];
        videoList.RemoveAt(randomIndex);
        return selectedVideo;
    }

    public void OnButtonPress1()
    {
        if (isWaitingForFirstResponse)
            OnFirstResponse(video1);
        else if (isWaitingForSecondResponse)
            OnSecondResponse(video1);
    }

    public void OnButtonPress2()
    {
        if (isWaitingForFirstResponse)
            OnFirstResponse(video2);
        else if (isWaitingForSecondResponse)
            OnSecondResponse(video2);
    }

    void OnFirstResponse(string selected)
    {
        selectedLeft = selected;
        questionText1.gameObject.SetActive(false);
        questionText2.gameObject.SetActive(true);
        isWaitingForFirstResponse = false;
        isWaitingForSecondResponse = true;
    }

    void OnSecondResponse(string selected)
    {
        LogResponse(selectedLeft, selected);

        questionText2.gameObject.SetActive(false);
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);

        StartCoroutine(PlayNextPair());
    }

    void LogResponse(string selectedLeft, string selectedRight)
    {
        string log = $"{video1}, {video2}, {selectedLeft}, {selectedRight}\n";
        File.AppendAllText(sessionFilePath, log);
    }

    string GenerateUniqueCSVFile()
    {
        string folderPath = Application.persistentDataPath;
        int fileIndex = 1;
        string filePath;

        do
        {
            filePath = Path.Combine(folderPath, $"results_{fileIndex}.csv");
            fileIndex++;
        } while (File.Exists(filePath));

        File.WriteAllText(filePath, "video1,video2,selected_left,selected_right\n");
        return filePath;
    }
}
