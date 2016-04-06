#ifndef AdToAppSDKPlugin_h
#define AdToAppSDKPlugin_h

#import <UIKit/UIKit.h>
#include "AdToAppSDKPluginDefs.h"

#ifndef plAdToAppLogLevel
#define plAdToAppLogLevel int
#endif

#ifndef ADTOAPP_PLUGIN_VIEW_SOURCE
#define ADTOAPP_PLUGIN_VIEW_SOURCE ([[[[UIApplication sharedApplication] keyWindow]rootViewController] view])
#endif

#ifdef __cplusplus
#ifdef ADTOAPP_USE_C_EXTERN
extern "C"
{
#endif
#endif

    void AdToApp_start_platform(const char* appId, const char* type);
    void AdToApp_setLogLevel_platform(plAdToAppLogLevel logLevel);
    bool AdToApp_showInterstitial_platform(const char* type);
    void AdToApp_showBanner_platform(float x, float y, float width, float height, const char* bannerSize);
    void AdToApp_showBannerAtPosition_platform(const char* position, const char* bannerSize, float top, float left, float bottom, float right);
    void AdToApp_setBannerRefreshInterval_platform(double refreshInterval);
    void AdToApp_loadNextBanner_platform();
    void AdToApp_removeAllBanners_platform();
    bool AdToApp_hasInterstitial_platform(const char* type);
    bool AdToApp_isInterstitialDisplayed_platform();
    void AdToApp_setTargetingParam_platform(const char* parameterName, const char* value);

    //Used in Unity platform only
    void AdToApp_setUnityCallbackTargetName_platform(const char* targetName);
    
#ifdef __cplusplus
#ifdef ADTOAPP_USE_C_EXTERN
}
#endif
#endif
    
#endif