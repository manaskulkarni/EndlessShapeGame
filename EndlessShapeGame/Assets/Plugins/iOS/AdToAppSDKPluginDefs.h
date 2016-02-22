#import <UIKit/UIKit.h>

extern char* unityAdToAppSDK_targetName;
#define ADTOAPP_PLUGIN_CALLBACK(method) if (NULL != unityAdToAppSDK_targetName) UnitySendMessage(unityAdToAppSDK_targetName, ADTOAPP_##method, "")
#define ADTOAPP_PLUGIN_CALLBACK_ARG(method, arg) if (NULL != unityAdToAppSDK_targetName) UnitySendMessage(unityAdToAppSDK_targetName, ADTOAPP_##method, arg)
#define ADTOAPP_PLUGIN_CALLBACK_ERROR_ARG(method, arg) if (NULL != unityAdToAppSDK_targetName) UnitySendMessage(unityAdToAppSDK_targetName, ADTOAPP_##method, arg)

#define ADTOAPPSDK_PLUGIN_NAME (@"unity")

extern "C"
{
    extern void UnitySendMessage(const char *, const char *, const char *);
    extern UIViewController *UnityGetGLViewController();
}

#define ADTOAPP_PLUGIN_VIEW_SOURCE UnityGetGLViewController().view

#define UNITY_IOS
#define ADTOAPP_USE_C_EXTERN