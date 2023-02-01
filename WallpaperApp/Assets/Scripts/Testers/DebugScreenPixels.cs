using UnityEngine;

public class DebugScreenPixels : MonoBehaviour
{
    [SerializeField] private Camera m_Camera;
    [SerializeField] private RectTransform m_Transform;

    public void GetCameraDimensions() {
        Debug.Log(m_Camera.pixelWidth + ", " + m_Camera.pixelHeight);
    }

    public void UseTransformedLocalPosition() {
        Vector3 pivotWorldPos = m_Transform.TransformPoint(m_Transform.localPosition);
        Vector2 pivotScreenPos = m_Camera.WorldToScreenPoint(pivotWorldPos);
        Debug.Log(pivotScreenPos);
    }

    public void UseTransformedPosition() {
        Vector3 pivotWorldPos = m_Transform.TransformPoint(m_Transform.position);
        Vector2 pivotScreenPos = m_Camera.WorldToScreenPoint(pivotWorldPos);
        Debug.Log(pivotScreenPos);
    }

    public void UsePosition() {
        Vector3 pivotWorldPos = m_Transform.position;
        Vector2 pivotScreenPos = m_Camera.WorldToScreenPoint(pivotWorldPos);
        Debug.Log(pivotScreenPos);
    }
}
