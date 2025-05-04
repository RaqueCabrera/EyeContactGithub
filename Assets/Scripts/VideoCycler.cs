using System.Collections;
using UnityEngine;
using UnityEngine.Video;

public class VideoCycler : MonoBehaviour
{
    public VideoPlayer videoPlayer; // Assign the Video Player in the Inspector
    public string[] videoFiles; // Array of video file names
    private int currentIndex = 0;
    private string videoPath;

    void Start()
    {
        // Initialize video files (make sure names match exactly)
        videoFiles = new string[] {
            "+10X.MP4", "+10X 1.MP4", "-10X.MP4", // Add all your video file names
            "-10X 1.MP4", "0XY.MP4", "OXY 1.MP4", "+5X.MP4"
        };

        videoPlayer.renderMode = VideoRenderMode.RenderTexture;

        // Start playing the first video
        PlayNextVideo();

        // Subscribe to loopPointReached to detect when a video ends
        videoPlayer.loopPointReached += OnVideoFinished;
    }

    private void Update()
    {
        if (OVRInput.GetUp(OVRInput.Button.One)) // A button on Quest controllers
        {
            videoPlayer.Stop();
            PlayNextVideo();
        }
    }

    void PlayNextVideo()
    {
        if (videoFiles.Length == 0) return;

        string filePath = System.IO.Path.Combine(Application.streamingAssetsPath, "Videos", videoFiles[currentIndex]);

        // Adjust path for Android
        if (Application.platform == RuntimePlatform.Android)
            filePath = "file://" + filePath;

        videoPlayer.url = filePath;
        videoPlayer.Play();

        currentIndex = (currentIndex + 1) % videoFiles.Length;
    }


    void OnVideoFinished(VideoPlayer vp)
    {
        // Play the next video when the current one ends
        PlayNextVideo();
    }
}
