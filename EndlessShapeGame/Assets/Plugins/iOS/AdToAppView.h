//
//  AdToAppView.h
//
//  Copyright (c) 2015 AdToApp. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ADTOAPPSDK_BANNER_SIZE_300x50  (@"300x50")
#define ADTOAPPSDK_BANNER_SIZE_320x50  (@"320x50")
#define ADTOAPPSDK_BANNER_SIZE_728x90  (@"728x90")
#define ADTOAPPSDK_BANNER_SIZE_768x90  (@"768x90")
#define ADTOAPPSDK_BANNER_SIZE_300x250 (@"300x250")

#define ADTOAPPSDK_BANNER_POSITION_TOP_LEFT (@"0;0")
#define ADTOAPPSDK_BANNER_POSITION_TOP_CENTER (@"1;0")
#define ADTOAPPSDK_BANNER_POSITION_TOP_RIGHT (@"2;0")
#define ADTOAPPSDK_BANNER_POSITION_CENTER_LEFT (@"0;1")
#define ADTOAPPSDK_BANNER_POSITION_CENTER (@"1;1")
#define ADTOAPPSDK_BANNER_POSITION_CENTER_RIGHT (@"2;1")
#define ADTOAPPSDK_BANNER_POSITION_BOTTOM_LEFT (@"0;2")
#define ADTOAPPSDK_BANNER_POSITION_BOTTOM (@"1;2")
#define ADTOAPPSDK_BANNER_POSITION_BOTTOM_RIGHT (@"2;2")

@class AdToAppView;

@protocol AdToAppViewDelegate <NSObject>

-(void)adToAppViewDidDisplayAd:(AdToAppView*)adToAppView;

-(void)adToAppView:(AdToAppView*)adToAppView failedToDisplayAdWithError:(NSError*)error isConnectionError:(BOOL)isConnectionError;

@optional
-(void)adToAppViewOnClick:(AdToAppView*)view;

@end

@interface AdToAppView : UIView

@property (nonatomic, weak) id<AdToAppViewDelegate> delegate;
@property (nonatomic, readonly) BOOL adIsDisplayed;

//Default refresh interval is 30 seconds. Set 0 to disable autorefresh.
-(NSTimeInterval)refreshInterval;
-(void)setRefreshInterval:(NSTimeInterval)refreshInterval;

-(void)loadNextAd;

-(id)initWithBannerSize:(NSString*)bannerSize delegate:(id<AdToAppViewDelegate>)delegate;
+(id)attachToView:(UIView*)view position:(NSString*)position edgeInsets:(UIEdgeInsets)insets bannerSize:(NSString*)bannerSize delegate:(id<AdToAppViewDelegate>)delegate;

@end


