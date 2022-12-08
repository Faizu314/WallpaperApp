using UnityEngine;
using Wallpaper;

public class FirebaseNetworkManager : MonoBehaviour, INetworkManager
{
    private AndroidJavaObject unityToAndroidInterface;

    private void Start()
    {
        Initialize();
    }

    private void Initialize()
    {
        AndroidJavaClass unityPlayer = new("com.phezu.wallpaper.OverrideUnityActivity");

        unityToAndroidInterface = unityPlayer.GetStatic<AndroidJavaObject>("instance");
        System.Diagnostics.Debug.WriteLine(unityToAndroidInterface);
    }

    public void SignUpViaEmail(string email, string password)
    {
        unityToAndroidInterface.Call("SignUpViaEmail", email, password);
    }

    public void SignInViaEmail(string email, string password)
    {
        unityToAndroidInterface.Call("SignInViaEmail", email, password);
    }

    public void SignInViaGoogle()
    {
        unityToAndroidInterface.Call("SignInViaGoogle");
    }

    public void SignInViaFacebook()
    {
        unityToAndroidInterface.Call("SignInViaFacebook");
    }

}
