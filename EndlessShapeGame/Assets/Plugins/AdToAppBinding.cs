using System;
using UnityEngine;
using System.Runtime.InteropServices;
using AdToApp.AndroidWrapper;

namespace AdToApp
{
    public class AdToAppBinding
    {
        #region Common Android/iOS methods

        public static void start(string adContentType = AdToAppContentType.INTERSTITIAL, string appId = "")
        {
            ConditionalRunAction(
               androidAction: () => AdToAppAndroidWrapper.InitializeSDK(adContentType, appId),
               iOSAction: () => AdToApp_start_platform (appId, adContentType));
        }

        public static void setLogLevel(AdToAppLogLevel logLevel)
        {
            ConditionalRunAction(
               androidAction: () => AdToAppAndroidWrapper.SetLogging(logLevel != AdToAppLogLevel.Off),
               iOSAction: () => AdToApp_setLogLevel_platform((int)logLevel));    
        }

        public static bool showInterstitial(string adContentType = AdToAppContentType.INTERSTITIAL)
        {
            return ConditionalRunFunction(
               androidFunction: () =>
               {
                   AdToAppAndroidWrapper.ShowInterstitial(adContentType);
                   return true;
               },
               iOSFunction: () => AdToApp_showInterstitial_platform(adContentType));  
        }

		public static bool hasInterstitial(string adContentType = AdToAppContentType.INTERSTITIAL)
        {
            return ConditionalRunFunction(
              androidFunction: () => AdToAppAndroidWrapper.HasInterstitial(adContentType),
              iOSFunction: () => AdToApp_hasInterstitial_platform(adContentType));
        }

        [Obsolete("This method deprecated, please use hasInterstitial(AdToAppContentType.REWARDED) instead")]
        public static bool hasRewarded()
		{
			return ConditionalRunFunction<bool>(
				iOSFunction: () => AdToAppBinding.hasInterstitial(AdToAppContentType.REWARDED),
				androidFunction: () => AdToAppBinding.hasInterstitial(AdToAppContentType.REWARDED));
		}

		public static bool isInterstitialDisplayed()
		{
			return ConditionalRunFunction<bool>(
				iOSFunction: () => AdToApp_isInterstitialDisplayed_platform(),
				androidFunction: () =>
				{
					return false;
				});
		}

        [Obsolete("This method deprecated, please use showInterstitial(AdToAppContentType.REWARDED) instead")]
        public static void showRewarded()
		{
			ConditionalRunAction(
				iOSAction: () => AdToAppBinding.showInterstitial(AdToAppContentType.REWARDED),
				androidAction: () => AdToAppBinding.showInterstitial(AdToAppContentType.REWARDED));
		}

		public static void showBanner(string bannerSize = AdToAppBannerSize.Size_320x50, float x = 0.0f, float y = 0.0f, float width = 0.0f, float height = 0.0f)
		{
			ConditionalRunAction(
				androidAction: () => AdToAppAndroidWrapper.ShowBanner((int)x, (int)y, bannerSize),
				iOSAction: () =>  AdToApp_showBanner_platform (x, y, width, height, bannerSize));
		}

		public static void showBannerAtPosition(string position, string bannerSize, float marginTop = 0, float marginLeft = 0, float marginBottom = 0, float marginRight = 0)
		{
			ConditionalRunAction(
				androidAction: () => AdToAppAndroidWrapper.ShowBannerAtPositon(position, bannerSize),
				iOSAction: () => AdToApp_showBannerAtPosition_platform(position, bannerSize, marginTop, marginLeft, marginBottom, marginRight));
		}

		public static void loadNextBanner()
		{
			ConditionalRunAction(
				iOSAction: () => AdToApp_loadNextBanner_platform(),
				androidAction: () => AdToAppAndroidWrapper.LoadNextBanner());
		}

		public static void setBannerRefreshInterval(double refreshInterval)
		{
			ConditionalRunAction (
				iOSAction: () => AdToApp_setBannerRefreshInterval_platform(refreshInterval),
				androidAction: () => AdToAppAndroidWrapper.SetBannerRefreshInterval(refreshInterval));
		}

		// Remove all previously added banners
		public static void removeAllBanners()
		{
			ConditionalRunAction(
				androidAction: () => AdToAppAndroidWrapper.RemoveAllBanners(),
				iOSAction: () =>  AdToApp_removeAllBanners_platform());
		}

        public static void setCallbacks(AdToAppSDKDelegate sdkDelegate)
        {
            ConditionalRunAction(
              iOSAction: () =>
              {
                  AdToApp_setUnityCallbackTargetName_platform(sdkDelegate.name);
              },
              androidAction: () =>
              {
                  AdToAppAndroidWrapper.SetInterstitialAdListeners(sdkDelegate.GetInterstitialAndroidAdListener());
                  AdToAppAndroidWrapper.SetBannerAdListeners(sdkDelegate.GetBannerAndroidAdListener());
              });
        }

        public static void onPause(bool pauseStatus)
        {
            ConditionalRunAction(
                androidAction: () => AdToAppAndroidWrapper.onPause(pauseStatus), iOSAction: () => { });
        }

        #endregion

        #region iOS only methods

        private static MonoBehaviour _sdkDelegate = null;

		public static void setIOSCallback(MonoBehaviour sdkDelegate)//sdkDelegate must have methods of IAdToAppiOSSDKDelegate protocol
		{
			_sdkDelegate = sdkDelegate;

			#if UNITY_IOS
			AdToApp_setUnityCallbackTargetName_platform(sdkDelegate.name);
			#elif UNITY_IPHONE
			AdToApp_setUnityCallbackTargetName_platform(sdkDelegate.name);
			#endif
		}

        #endregion

        private static void ConditionalRunAction(Action androidAction, Action iOSAction)
        {
#if UNITY_ANDROID
            ThrowIfNotSupported(androidAction);
            androidAction();
            return;
#elif UNITY_IOS
            ThrowIfNotSupported(iOSAction);
            iOSAction();
            return;
#endif
            throw new NotSupportedException();
        }

        private static T ConditionalRunFunction<T>(Func<T> androidFunction, Func<T> iOSFunction)
        {
#if UNITY_ANDROID
            ThrowIfNotSupported(androidFunction);
            return androidFunction();
#elif UNITY_IOS
            ThrowIfNotSupported(iOSFunction);
            return iOSFunction();
#endif
            throw new NotSupportedException();
        }

        private static void ThrowIfNotSupported(Action action)
        {
            if (action == null)
            {
                throw new NotSupportedException();
            }
        }

        private static void ThrowIfNotSupported<T>(Func<T> func)
        {
            if (func == null)
            {
                throw new NotSupportedException();
            }
        }


        #region iOS extern functions

        [DllImport("__Internal")]
        private static extern void AdToApp_start_platform(string appId, string adContentType);

        [DllImport("__Internal")]
        private static extern void AdToApp_setUnityCallbackTargetName_platform(string name);

        [DllImport("__Internal")]
        private static extern bool AdToApp_isInterstitialDisplayed_platform();

        [DllImport("__Internal")]
        private static extern bool AdToApp_hasInterstitial_platform(string adContentType);

		[DllImport("__Internal")]
        private static extern void AdToApp_removeAllBanners_platform();

        [DllImport("__Internal")]
        private static extern void AdToApp_showBannerAtPosition_platform(string position, string bannerSize, float marginTop, float marginLeft, float marginBottom, float marginRight);

        [DllImport("__Internal")]
        private static extern void AdToApp_showBanner_platform(float x, float y, float width, float height, string bannerSize);

		[DllImport("__Internal")]
		private static extern void AdToApp_setBannerRefreshInterval_platform(double refreshInterval);

        [DllImport("__Internal")]
        private static extern void AdToApp_setLogLevel_platform(int logLevel);

        [DllImport("__Internal")]
        private static extern bool AdToApp_showInterstitial_platform(string adContentType);

		[DllImport("__Internal")]
        private static extern void AdToApp_loadNextBanner_platform();

        #endregion
    }
}