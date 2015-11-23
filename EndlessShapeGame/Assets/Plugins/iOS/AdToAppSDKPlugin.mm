#include "AdToAppSDKPlugin.h"

#include "AdToAppSDK.h"
#include "AdToAppView.h"

#define ADTOAPP_onInterstitialWillAppear ("onInterstitialWillAppear")
#define ADTOAPP_onInterstitialDidDisappear ("onInterstitialDidDisappear")
#define ADTOAPP_onInterstitialFailedToAppear ("onInterstitialFailedToAppear")
#define ADTOAPP_onInterstitialClicked ("onInterstitialClicked")
#define ADTOAPP_onBannerDidDisplayAd ("onBannerDidDisplayAd")
#define ADTOAPP_onBannerFailedToDisplayAd ("onBannerFailedToDisplayAd")
#define ADTOAPP_onBannerClicked ("onBannerClicked")
#define ADTOAPP_onRewardedCompleted ("onRewardedCompleted")

static NSString* ToNSString(const char* pStr)
{
    if (pStr)
    {
        return [NSString stringWithUTF8String:pStr];
    }
    return nil;
}

@interface AdToAppSDKPluginName : NSString

+(id)name;

@end

@implementation AdToAppSDKPluginName

char* unityAdToAppSDK_targetName = NULL;

+(id)name
{
    return [NSString stringWithFormat:@"&plugin=%@", ADTOAPPSDK_PLUGIN_NAME];
}

+(void)onAdWillAppear:(NSString*)adType
{
    ADTOAPP_PLUGIN_CALLBACK_ARG(onInterstitialWillAppear, adType.UTF8String);
}

+(void)onAdDidDisappear:(NSString*)adType
{
    ADTOAPP_PLUGIN_CALLBACK_ARG(onInterstitialDidDisappear, adType.UTF8String);
}

+(void)onAdFailedToAppear:(NSString*)adType
{
    ADTOAPP_PLUGIN_CALLBACK_ARG(onInterstitialFailedToAppear, adType.UTF8String);
}

+(void)adToAppViewDidDisplayAd:(AdToAppView*)adToAppView
{
    ADTOAPP_PLUGIN_CALLBACK(onBannerDidDisplayAd);
}

+(void)adToAppView:(AdToAppView*)adToAppView failedToDisplayAdWithError:(NSError*)error isConnectionError:(BOOL)isConnectionError
{
    NSString* str = [NSString stringWithFormat:@"%@%@", isConnectionError ? @"Connection Error." : @"", error.localizedDescription];
    
    ADTOAPP_PLUGIN_CALLBACK_ERROR_ARG(onBannerFailedToDisplayAd,str.UTF8String);
}

+(void)onReward:(int)reward currency:(NSString*)gameCurrency
{
    NSString* str = [NSString stringWithFormat:@"%d %@", reward, gameCurrency];
    
    ADTOAPP_PLUGIN_CALLBACK_ARG(onRewardedCompleted,str.UTF8String);
}

+(void)onAdClicked:(NSString*)adType
{
    ADTOAPP_PLUGIN_CALLBACK_ARG(onInterstitialClicked, adType.UTF8String);
}

+(void)adToAppViewOnClick:(AdToAppView*)view
{
    ADTOAPP_PLUGIN_CALLBACK(onBannerClicked);
}

@end

void AdToApp_setUnityCallbackTargetName_platform(const char* targetName);

void AdToApp_setUnityCallbackTargetName_platform(const char* targetName)
{
    if (NULL != targetName)
    {
        char* _old = unityAdToAppSDK_targetName;
        
        char* _unityAdToAppSDK_targetName = (char*)malloc(strlen(targetName) + 1);
        
        strcpy(_unityAdToAppSDK_targetName, targetName);
        
        unityAdToAppSDK_targetName = _unityAdToAppSDK_targetName;
        
        if (NULL != _old)
        {
            free(_old);
        }
    }
    
    NSLog(@"Setting unity callback for object with name: %s", unityAdToAppSDK_targetName);
}

void AdToApp_start_platform(const char* appId, const char* type)
{
    [AdToAppSDK setDelegate:(id)[AdToAppSDKPluginName class]];
    
    NSString* typeStr = ToNSString(type);
    NSMutableSet* modules = [NSMutableSet new];
    
    if ([typeStr rangeOfString:ADTOAPP_IMAGE_INTERSTITIAL].location != NSNotFound)
    {
        [modules addObject:ADTOAPP_IMAGE_INTERSTITIAL];
    }
    
    if ([typeStr rangeOfString:ADTOAPP_VIDEO_INTERSTITIAL].location != NSNotFound)
    {
        [modules addObject:ADTOAPP_VIDEO_INTERSTITIAL];
    }
    
    if ([typeStr rangeOfString:ADTOAPP_INTERSTITIAL].location != NSNotFound)
    {
        [modules addObject:ADTOAPP_INTERSTITIAL];
    }
    
    if ([typeStr rangeOfString:ADTOAPP_REWARDED_INTERSTITIAL].location != NSNotFound)
    {
        [modules addObject:ADTOAPP_REWARDED_INTERSTITIAL];
    }
    
    if ([typeStr rangeOfString:ADTOAPP_BANNER].location != NSNotFound)
    {
        [modules addObject:ADTOAPP_BANNER];
    }
    
    [AdToAppSDK startWithAppId:ToNSString(appId) modules:modules.allObjects];
}

void AdToApp_setLogLevel_platform(plAdToAppLogLevel logLevel)
{
    if (0 != logLevel)
    {
        [AdToAppSDK enableDebugLogs];
    }
}

bool AdToApp_showInterstitial_platform(const char* type)
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_showInterstitial_platform(type);
            
        });
        
        return false;
    }
    
#ifdef UNITY_IOS
    return [AdToAppSDK showInterstitial:ToNSString(type) fromViewController:UnityGetGLViewController()];
#else
    return [AdToAppSDK showInterstitial:ToNSString(type)];
#endif
}

void AdToApp_showBanner_platform(float x, float y, float width, float height, const char* bannerSize)
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_showBanner_platform(x, y, width, height, bannerSize);
            
        });
        
        return;
    }
    
    AdToAppView* banner_view = [[AdToAppView alloc]initWithBannerSize:ToNSString(bannerSize) delegate:(id)[AdToAppSDKPluginName class]];
    
    banner_view.frame = CGRectMake(x, y, width, height);
    
    [ADTOAPP_PLUGIN_VIEW_SOURCE addSubview:banner_view];
}

void AdToApp_showBannerAtPosition_platform(const char* position, const char* bannerSize, float marginTop, float marginLeft, float marginBottom, float marginRight)
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_showBannerAtPosition_platform(position, bannerSize, marginTop, marginLeft, marginBottom, marginRight);
        });
        
        return;
    }
    
    [AdToAppView attachToView:ADTOAPP_PLUGIN_VIEW_SOURCE
                     position:ToNSString(position)
                   edgeInsets:UIEdgeInsetsMake(marginTop, marginLeft, marginBottom, marginRight)
                   bannerSize:ToNSString(bannerSize)
                     delegate:(id)[AdToAppSDKPluginName class]];
}

void AdToApp_setBannerRefreshInterval_platform(double refreshInterval)
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_setBannerRefreshInterval_platform(refreshInterval);
            
        });
        
        return;
    }
    
    NSArray* allSubviews = [ADTOAPP_PLUGIN_VIEW_SOURCE subviews];
    
    for (AdToAppView* v in allSubviews)
    {
        if ([v isKindOfClass:[AdToAppView class]])
        {
            [v setRefreshInterval:refreshInterval];
        }
    }
}

void AdToApp_loadNextBanner_platform()
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_loadNextBanner_platform();
            
        });
        
        return;
    }
    
    NSArray* allSubviews = [ADTOAPP_PLUGIN_VIEW_SOURCE subviews];
    
    for (AdToAppView* v in allSubviews)
    {
        if ([v isKindOfClass:[AdToAppView class]])
        {
            [v loadNextAd];
        }
    }
}

void AdToApp_removeAllBanners_platform()
{
    if (![NSThread isMainThread])
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            
            AdToApp_removeAllBanners_platform();
            
        });
        
        return;
    }
    
    NSArray* allSubviews = [ADTOAPP_PLUGIN_VIEW_SOURCE subviews];
    
    for (UIView* v in allSubviews)
    {
        if ([v isKindOfClass:[AdToAppView class]])
        {
            [v removeFromSuperview];
        }
    }
}

bool AdToApp_hasInterstitial_platform(const char* type)
{
    return [AdToAppSDK hasInterstitial:ToNSString(type)];
}

bool AdToApp_isInterstitialDisplayed_platform()
{
    return [AdToAppSDK isInterstitialDisplayed];
}
