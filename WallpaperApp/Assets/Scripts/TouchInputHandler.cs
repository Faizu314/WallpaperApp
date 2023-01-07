using System.Collections;
using UnityEngine;
using Phezu.Util;

namespace Wallpaper.Input {

    [AddComponentMenu("Wallpaper/Touch Input Handler")]
    public class TouchInputHandler : Singleton<TouchInputHandler> {

        public float ZoomMagnitudeToSimulate;
        public Vector2 ZoomPivotToSimulate;

        private TouchControls m_TouchControls;
        private Coroutine m_PinchCoroutine;

        private Vector2 m_PrevPrimaryPos;
        private Vector2 m_PrevSecondaryPos;

        private void Start() {
            m_TouchControls = new();
            m_TouchControls.Touch.Enable();

            m_TouchControls.Touch.SecondaryTouchDown.performed += _ => OnSecondaryTouchDown();
            m_TouchControls.Touch.SecondaryTouchDown.canceled += _ => OnSecondaryTouchUp();
        }


        private void OnSecondaryTouchDown() {
            ApplicationEvents.InvokeOnSecondTouchDown();
            m_PinchCoroutine = StartCoroutine(nameof(Pinch_Coroutine));
        }

        private void OnSecondaryTouchUp() {
            StopCoroutine(m_PinchCoroutine);
            ApplicationEvents.InvokeOnSecondTouchUp();
        }

        private IEnumerator Pinch_Coroutine() {
            yield return new WaitForEndOfFrame();

            m_PrevPrimaryPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            m_PrevSecondaryPos = m_TouchControls.Touch.SecondaryTouchPosition.ReadValue<Vector2>();

            while (true) {
                Vector2 positionA = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
                Vector2 positionB = m_TouchControls.Touch.SecondaryTouchPosition.ReadValue<Vector2>();
                Vector2 deltaPositionA = positionA - m_PrevPrimaryPos;
                Vector2 deltaPositionB = positionB - m_PrevSecondaryPos;

                if (deltaPositionA.SqrMagnitude() < 1 && deltaPositionB.SqrMagnitude() < 1) {
                    m_PrevPrimaryPos = positionA;
                    m_PrevSecondaryPos = positionB;
                    yield return new WaitForEndOfFrame();
                }

                float zoomMagnitude = CalculateZoomMagnitude(positionA, positionB, deltaPositionA, deltaPositionB);
                Vector2 pivot = (positionA + positionB) / 2f;

                InvokeOnTouchPinch(pivot, zoomMagnitude);

                m_PrevPrimaryPos = positionA;
                m_PrevSecondaryPos = positionB;

                yield return new WaitForEndOfFrame();
            }
        }

        private float CalculateZoomMagnitude(Vector2 positionA, Vector2 positionB, Vector2 deltaPositionA, Vector2 deltaPositionB) {
            float zoomMagnitude;

            Vector2 A_To_B = positionB - positionA;
            Vector2 delA_To_delB = (positionB + deltaPositionB) - (positionA + deltaPositionA);

            float preLength = A_To_B.magnitude;
            float postLength = delA_To_delB.magnitude;
            zoomMagnitude = postLength / preLength;

            return zoomMagnitude;
        }


        public void InvokeOnTouchPinch(Vector2 pivot, float magnitude) {
            ApplicationEvents.InvokeOnTouchPinch(new((int)pivot.x, (int)pivot.y), magnitude);
        }
    }
}