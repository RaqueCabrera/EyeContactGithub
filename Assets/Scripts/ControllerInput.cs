using UnityEngine;
using TMPro;

public class ControllerInput : MonoBehaviour
{
    public TextMeshProUGUI rotationText; // Reference to the TMP Text component
    private float currentRotation = 0f; // Keep track of rotation manually
    private float rotationStep = 1.0f;  // Rotation step size in degrees
    private float minRotation = -30f;   // Minimum rotation (-30° left)
    private float maxRotation = 30f;    // Maximum rotation (30° right)

    void Update()
    {
        // Check for right rotation
        if (OVRInput.GetDown(OVRInput.RawButton.RThumbstickRight))
        {
            currentRotation = Mathf.Min(currentRotation + rotationStep, maxRotation);
        }

        // Check for left rotation
        if (OVRInput.GetDown(OVRInput.RawButton.RThumbstickLeft))
        {
            currentRotation = Mathf.Max(currentRotation - rotationStep, minRotation);
        }

        // Apply the rotation (only on the Y-axis)
        transform.rotation = Quaternion.Euler(0, currentRotation, 0);

        // Update the UI text
        if (rotationText != null)
        {
            rotationText.text = "R= " + currentRotation.ToString("F0") + "°";
        }

        // Vibration when pressing a button
        if (OVRInput.GetUp(OVRInput.Button.One))
        {
            OVRInput.SetControllerVibration(1, 1, OVRInput.Controller.RTouch);
        }
    }
}
