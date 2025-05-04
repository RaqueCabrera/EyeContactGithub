using UnityEngine;
using Oculus.Interaction;

public class PokeTest : MonoBehaviour
{
    public Renderer sphereRenderer; // Assign your sphere's Renderer in the Inspector
    public Material material1; // Assign Material for Button 1
    public Material material2; // Assign Material for Button 2

    public void ChangeToMaterial1()
    {
        if (sphereRenderer != null && material1 != null)
        {
            sphereRenderer.material = material1;
            Debug.Log("Changed to Material 1");
        }
    }

    public void ChangeToMaterial2()
    {
        if (sphereRenderer != null && material2 != null)
        {
            sphereRenderer.material = material2;
            Debug.Log("Changed to Material 2");
        }
    }
}
