//
//  AdToAppSDK.h
//
//  Copyright (c) 2015 AdToApp. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ADTOAPPSDK_VERSION (@"45.15")

#define ADTOAPP_IMAGE_INTERSTITIAL (@"Image")
#define ADTOAPP_VIDEO_INTERSTITIAL (@"Video")
#define ADTOAPP_INTERSTITIAL (@"Interstitial")//Video or Image

#define ADTOAPP_REWARDED_INTERSTITIAL (@"Rewarded")
#define ADTOAPP_BANNER (@"Banner")
#define ADTOAPP_NATIVE (@"Native")

@class UIViewController;

//For interstitial ads only
@protocol AdToAppSDKDelegate <NSObject>

-(void)onAdWillAppear:(NSString*)adType;
-(void)onAdDidDisappear:(NSString*)adType;

@optional
-(void)onReward:(int)reward currency:(NSString*)gameCurrency;
-(void)onAdClicked:(NSString*)adType;
-(BOOL)shouldShowAd:(NSString*)adType;
-(void)onAdFailedToAppear:(NSString*)adType;

@end

@interface AdToAppSDK : NSObject

//By default (if you pass @modules == nil) @modules = @[ADTOAPP_INTERSTITIAL, ADTOAPP_BANNER]
+(void)startWithAppId:(NSString*)appId modules:(NSArray*)modules;


+(void)setDelegate:(id<AdToAppSDKDelegate>)delegate;

+(BOOL)isInterstitialDisplayed;

+(void)enableDebugLogs;
+(void)enableTestMode;

// @typeOfInterstitial can be ADTOAPP_IMAGE_INTERSTITIAL, ADTOAPP_VIDEO_INTERSTITIAL ADTOAPP_INTERSTITIAL ADTOAPP_REWARDED_INTERSTITIAL or nil

+(BOOL)showInterstitial:(NSString*)typeOfInterstitial;

+(BOOL)showInterstitial:(NSString*)typeOfInterstitial fromViewController:(UIViewController*)vc;

+(BOOL)hasInterstitial:(NSString*)typeOfInterstitial;

//hide interstitial if it is supported and the interstitial is shown. Main thread only method.
+(BOOL)hideInterstitial;

@end
