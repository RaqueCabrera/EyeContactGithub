using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Video;
using TMPro;
using UnityEngine.UI;

public class EyeContactExperiment : MonoBehaviour
{
    public RawImage rawImage;
    public VideoPlayer videoPlayer;
    public TMP_Text videoLabel;
    public TMP_Text instructions;
    public TMP_Text questionText;
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
    private bool isWaitingForResponse = false;
    private string sessionFilePath;

    void Start()
    {
        // Hide UI elements initially
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);
        questionText.gameObject.SetActive(false);
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
        // Define all possible comparison videos
        videoList = new List<string>
        {
            "+10X.MP4", "+10Y.MP4", "+1X.MP4", "+1Y.MP4", "+2X.MP4", "+2Y.MP4", "+3X.MP4",
            "+3Y.MP4", "+4X.MP4", "+4Y.MP4", "+5X.MP4", "+5Y.MP4", "+6X.MP4", "+6Y.MP4",
            "+7X.MP4", "+7Y.MP4", "+8X.MP4", "+8Y.MP4", "+9X.MP4", "+9Y.MP4", "-10X.MP4",
            "-10Y.MP4", "-1X.MP4", "-1Y.MP4", "-2X.MP4", "-2Y.MP4", "-3X.MP4", "-3Y.MP4",
            "-4X.MP4", "-4Y.MP4", "-5X.MP4", "-5Y.MP4", "-6X.MP4", "-6Y.MP4", "-7X.MP4",
            "-7Y.MP4", "-8X.MP4", "-8Y.MP4", "-9X.MP4", "-9Y.MP4", "0XY.MP4"
        };
    }

    IEnumerator PlayNextPair()
    {
        if (videoList.Count == 0)
        {
            Debug.Log("Experiment Finished!");
            questionText.text = "Condition Complete! Let the experimenter know so they can assist you. Closing app in 10 seconds...";
            questionText.gameObject.SetActive(true);
            yield return new WaitForSeconds(10f); // Display message before exiting
            Application.Quit();

            #if UNITY_ANDROID
            System.Diagnostics.Process.GetCurrentProcess().Kill();
            #endif

            yield break;
        }

        isWaitingForResponse = false;

        // Always compare a random video with 0XY.MP4
        video1 = "0XY.MP4";
        video2 = GetRandomVideo();

        // Randomize order of the pair
        if (Random.value > 0.5f)
        {
            (video1, video2) = (video2, video1);
        }

        yield return PlaySingleVideo(video1, "Video 1");

        // Hide the first video and wait 1.5 seconds
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);
        yield return new WaitForSeconds(1.5f);

        // Ensure video player resets before playing the next video
        videoPlayer.Stop();
        yield return new WaitForSeconds(0.25f); // Small delay to ensure reset

        yield return PlaySingleVideo(video2, "Video 2");

        // Hide video and labels
        videoPlayer.Stop();
        rawImage.gameObject.SetActive(false);
        videoLabel.gameObject.SetActive(false);

        // Pause before showing the question
        yield return new WaitForSeconds(1f);

        // Show question & buttons
        questionText.gameObject.SetActive(true);
        button1.gameObject.SetActive(true);
        button2.gameObject.SetActive(true);
        isWaitingForResponse = true;
    }

    IEnumerator PlaySingleVideo(string videoFile, string label)
    {
        string videoPath = Path.Combine(Application.streamingAssetsPath, "C4", videoFile); // CHANGE CONDITION FOLDER HERE ----------------
        if (Application.platform == RuntimePlatform.Android)
            videoPath = "file://" + videoPath;

        videoPlayer.Stop();  // Ensure previous video is fully stopped
        videoPlayer.url = videoPath;
        videoPlayer.Prepare(); // Prepare the video before playing

        while (!videoPlayer.isPrepared)
        {
            yield return null; // Wait until the video is ready
        }

        videoLabel.text = label;
        rawImage.gameObject.SetActive(true);
        videoLabel.gameObject.SetActive(true);

        videoPlayer.Play();

        // Double-check that video is actually playing
        while (videoPlayer.isPlaying || videoPlayer.frame < 1)
        {
            yield return null; // Wait until the video finishes
        }

        yield return new WaitForSeconds(1f); // Short pause before switching to the next video
    }

    string GetRandomVideo()
    {
        if (videoList.Count == 0) return "0XY.MP4";

        int randomIndex = Random.Range(0, videoList.Count);
        string selectedVideo = videoList[randomIndex];
        videoList.RemoveAt(randomIndex);
        return selectedVideo;
    }

    public void OnButtonPress1()
    {
        if (!isWaitingForResponse) return;
        OnButtonPress(video1);
    }

    public void OnButtonPress2()
    {
        if (!isWaitingForResponse) return;
        OnButtonPress(video2);
    }

    void OnButtonPress(string selectedVideo)
    {
        LogResponse(selectedVideo);

        questionText.gameObject.SetActive(false);
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);

        StartCoroutine(PlayNextPair());
    }

    void LogResponse(string selectedVideo)
    {
        string log = $"{video1}, {video2}, {selectedVideo}\n";
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

        // Write headers to the new file
        File.WriteAllText(filePath, "video1,video2,selected\n");
        return filePath;
    }
}
