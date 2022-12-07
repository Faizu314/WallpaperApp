using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class CubeScript : MonoBehaviour
{
    private Rigidbody m_Rigidbody;

    [SerializeField] private float m_RotationStrength;


    //private void Start()
    //{
    //    m_Rigidbody = GetComponent<Rigidbody>();
    //}

    //private void Update()
    //{
    //    if (Input.GetKeyDown(KeyCode.Space))
    //        m_Rigidbody.AddTorque(Random.insideUnitSphere * m_RotationStrength);
    //    if (Input.touchCount != 1)
    //        return;

    //    Touch touch = Input.GetTouch(0);

    //    m_Rigidbody.AddTorque(Random.insideUnitSphere * m_RotationStrength);
    //}
}
