using System.Collections;
using UnityEngine;
using Phezu.Util;

namespace Wallpaper.Input {

    [AddComponentMenu("Wallpaper/Touch Input Handler")]
    public class TouchInputHandler : Singleton<TouchInputHandler> {

        #region Editor

        public float ZoomMagnitudeToSimulate;
        public Vector2 ZoomPivotToSimulate;

        #endregion

        private TouchControls m_TouchControls;

        private Coroutine m_PinchCoroutine;
        private Coroutine m_ParallaxCoroutine;

        private Vector2 m_PrevPrimaryPos;
        private Vector2 m_PrevSecondaryPos;

        private Vector2 m_InitialPrimaryPos;

        private bool m_OneFingerDown = false;
        private bool m_TwoFingersDown = false;

        private void Start() {
            m_TouchControls = new();
            m_TouchControls.Touch.Enable();

            m_TouchControls.Touch.Tap.performed += _ => OnTap();
            m_TouchControls.Touch.SecondaryTouchDown.performed += _ => OnSecondaryTouchDown();
            m_TouchControls.Touch.PrimaryTouchDown.performed += _ => OnPrimaryTouchDown();
            m_TouchControls.Touch.PrimaryTouchDown.canceled += _ => OnAnyTouchUp();
            m_TouchControls.Touch.SecondaryTouchDown.canceled += _ => OnAnyTouchUp();
            m_TouchControls.Touch.DoubleTap.performed += _ => OnDoubleTap();
        }


        private void OnTap() {
            Vector2 screenPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            ApplicationEvents.InvokeOnTap(screenPos);
        }

        private void OnDoubleTap() {
            ApplicationEvents.InvokeOnDoubleTap();
        }

        private void OnPrimaryTouchDown() {
            m_OneFingerDown = true;
            m_InitialPrimaryPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();

            ApplicationEvents.InvokeOnPrimaryTouchDown(m_InitialPrimaryPos);
            m_ParallaxCoroutine = StartCoroutine(nameof(Parallax_Coroutine));
        }

        private void OnSecondaryTouchDown() {
            m_TwoFingersDown = true;

            StopCoroutine(m_ParallaxCoroutine);
            ApplicationEvents.InvokeOnParallaxEnd();

            ApplicationEvents.InvokeOnSecondTouchDown();
            m_PinchCoroutine = StartCoroutine(nameof(Pinch_Coroutine));
        }

        private void OnAnyTouchUp() {
            if (!m_TwoFingersDown) {
                OnPrimaryTouchUp();
            }
            else {
                OnSecondaryTouchUp();
            }
        }

        private void OnPrimaryTouchUp() {
            m_OneFingerDown = false;

            ApplicationEvents.InvokeOnPrimaryTouchUp();

            StopCoroutine(m_ParallaxCoroutine);
            ApplicationEvents.InvokeOnParallaxEnd();
        }

        private void OnSecondaryTouchUp() {
            m_TwoFingersDown = false;

            StopCoroutine(m_PinchCoroutine);
            ApplicationEvents.InvokeOnSecondTouchUp();

            m_ParallaxCoroutine = StartCoroutine(nameof(Parallax_Coroutine));
        }

        private IEnumerator Pinch_Coroutine() {
            yield return new WaitForEndOfFrame();

            PinchStart();

            while (true) {
                yield return new WaitForEndOfFrame();

                PinchUpdateLoop();
            }
        }

        private IEnumerator Parallax_Coroutine() {
            yield return new WaitForEndOfFrame();

            ParallaxStart();

            while (true) {
                yield return new WaitForEndOfFrame();

                ParallaxUpdateLoop();
            }
        }

        private void ParallaxStart() {
            m_InitialPrimaryPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            ApplicationEvents.InvokeOnParallaxBegin();
        }

        private void ParallaxUpdateLoop() {
            Vector2 currPrimaryPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            Vector2 initialToCurrDir = currPrimaryPos - m_InitialPrimaryPos;

            ApplicationEvents.InvokeOnParallax(initialToCurrDir);
        }

        private void PinchStart() {
            m_PrevPrimaryPos = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            m_PrevSecondaryPos = m_TouchControls.Touch.SecondaryTouchPosition.ReadValue<Vector2>();

            var data = GetPinchData();
            InvokeOnTouchPinchBegin(data.Pivot, data.ZoomMagnitude);
        }

        private void PinchUpdateLoop() {
            var data = GetPinchData();

            if (data.IsPinching)
                InvokeOnTouchPinch(data.Pivot, data.ZoomMagnitude);
        }

        private PinchData GetPinchData() {
            Vector2 positionA = m_TouchControls.Touch.PrimaryTouchPosition.ReadValue<Vector2>();
            Vector2 positionB = m_TouchControls.Touch.SecondaryTouchPosition.ReadValue<Vector2>();
            Vector2 deltaPositionA = positionA - m_PrevPrimaryPos;
            Vector2 deltaPositionB = positionB - m_PrevSecondaryPos;

            Vector2 pivot = (positionA + positionB) / 2f;

            if (deltaPositionA.SqrMagnitude() < 1 && deltaPositionB.SqrMagnitude() < 1) {
                m_PrevPrimaryPos = positionA;
                m_PrevSecondaryPos = positionB;
                return new(pivot, 1f, false);
            }

            float zoomMagnitude = CalculateZoomMagnitude(positionA, positionB, deltaPositionA, deltaPositionB);

            m_PrevPrimaryPos = positionA;
            m_PrevSecondaryPos = positionB;

            return new(pivot, zoomMagnitude, true);
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
            ApplicationEvents.InvokeOnTouchPinch(pivot, magnitude);
        }

        public void InvokeOnTouchPinchBegin(Vector2 pivot, float magnitude) {
            ApplicationEvents.InvokeOnTouchPinchBegin(pivot, magnitude);
        }

        private class PinchData {
            public Vector2 Pivot;
            public float ZoomMagnitude;
            public bool IsPinching;

            public PinchData(Vector2 pivot, float zoomMagnitude, bool isPinching) {
                Pivot = pivot;
                ZoomMagnitude = zoomMagnitude;
                IsPinching = isPinching;
            }
        }
    }
}