using UnityEngine;
using System.Diagnostics;
using System;

namespace AdToApp.AndroidWrapper 
{
	public class AdToAppAndroidWrapper 
	{
		private const string UNITY_ANDROID = "UNITY_ANDROID";

        /// <summary>
        /// Gets version of the AdToApp library
        /// </summary>
        public static string Version
        {
            get
            {
                return GetResult<string>("getVersion");
            }
        }

	    /// <summary>
	    /// Initialize AdToApp SKD.
	    /// </summary>
	    /// <param name="adContentType"> Content type to initialize (Rewarded, Interstitial, Image, Video).</param>
	    [Conditional(UNITY_ANDROID)]
	    public static void InitializeSDK(string adContentType)
	    {
	        CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("initialize", wrapperContext, NormalizeAdContentType(adContentType)));
	    }

	    /// <summary>
		///  Enable or disable logging.
		/// </summary>
		/// <param name="logging">True to enable logging.</param>
		[Conditional(UNITY_ANDROID)]
		public static void SetLogging(bool logging)
		{
			CallWrapperMethod ("setLogging", logging);
		}
		
		/// <summary>
		///  Show interstitial ad with given content type.
		/// </summary>
		/// <param name="adContentType">Content type to show (Image, Video).</param>
		[Conditional(UNITY_ANDROID)]
		public static void ShowInterstitial(string adContentType)
		{
			if (adContentType == "Interstitial") {
				CallWrapperMethod ("showInterstitialAd");
			} 
            CallWrapperMethod("showInterstitialAd", NormalizeAdContentType(adContentType));
		}
		
		/// <summary>
		/// Show interstitial ad.
		/// </summary>
		[Conditional(UNITY_ANDROID)]
		public static void ShowInterstitial()
		{
			CallWrapperMethod ("showInterstitialAd");
		}

	    /// <summary>
	    /// Sets the interstitial ad listeners.
	    /// </summary>
	    /// <param name="listener">Instance with event listeners.</param>
	    [Conditional(UNITY_ANDROID)]
	    public static void SetInterstitialAdListeners(ATAInterstitialAdListener listener)
	    {
	        CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("setInterstitialAdListeners", listener, wrapperContext));
	    }

	    /// <summary>
		/// Shows rewarded ad.
		/// </summary>
		[Conditional(UNITY_ANDROID)]
		public static void ShowRewarded()
		{
			CallWrapperMethod ("showRewardedAd");
		}

		/// <summary>
		/// Sets the rewarded ad listeners.
		/// </summary>
		/// <param name="listener">Instance with event listeners.</param>
		[Conditional(UNITY_ANDROID)]
		public static void SetRewardedAdListeners(ATARewardedAdListener listener)
		{
            CallWrapperMethodWithContext(
               wrapperContext => CallWrapperMethod("setRewardedAdListeners", listener, wrapperContext));
		}

        /// <summary>
        /// Shows banner at given coordinates.
        /// </summary>
        /// <param name="x">X offset.</param>
        /// <param name="y">Y offset.</param>
        [Conditional(UNITY_ANDROID)]
        public static void ShowBanner(int x, int y)
        {
            CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("showBanner", wrapperContext, x, y));
        }

        /// <summary>
        /// Shows banner at given coordinates.
        /// </summary>
        /// <param name="x">X offset.</param>
        /// <param name="y">Y offset.</param>
        /// <param name="bannerSize">Width and height of the layout.</param>
        [Conditional(UNITY_ANDROID)]
        public static void ShowBanner(int x, int y, string bannerSize)
        {
            CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("showBanner", wrapperContext, x, y, bannerSize));
        }

        /// <summary>
        /// Shows banner at given position.
        /// </summary>
        /// <param name="bannerPositon">The banner's postion.</param>
        [Conditional(UNITY_ANDROID)]
        public static void ShowBannerAtPositon(string bannerPositon)
        {
            CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("showBannerAtPosition", wrapperContext, bannerPositon));
        }

        /// <summary>
        /// Shows banner at given position with given size.
        /// </summary>
        /// <param name="bannerPositon">The banner's postion.</param>
        /// <param name="bannerSize">Width and height of the layout.</param>
        [Conditional(UNITY_ANDROID)]
        public static void ShowBannerAtPositon(string bannerPositon, string bannerSize)
        {
            CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("showBannerAtPosition", wrapperContext, bannerPositon, bannerSize));
        }

        /// <summary>
        /// Remove all bunners from current activity.
        /// </summary>
        [Conditional(UNITY_ANDROID)]
        public static void RemoveAllBanners()
        {
            CallWrapperMethodWithContext(
                wrapperContext => CallWrapperMethod("removeAllBanners", wrapperContext));
        }

        /// <summary>
        /// Sets the banner ad listeners.
        /// </summary>
        /// <param name="listener">Instance with event listeners.</param>
        [Conditional(UNITY_ANDROID)]
        public static void SetBannerAdListeners(ATABannerAdListener listener)
        {
            CallWrapperMethod("setBannerListeners", listener);
        }

        /// <summary>
        /// Indicates whether interstitial ads are available.
        /// </summary>
        /// <returns>True if ads are available.</returns>
        public static bool IsInterstitialAvailable()
        {
            return GetResult<bool>("isInterstitialAvailable");
        }

        /// <summary>
        /// Indicates whether interstitial image ads available.
        /// </summary>
        /// <returns>True if ads are available.</returns>
        public static bool IsImageInterstitialAvailable()
        {
            return GetResult<bool>("isImageInterstitialAvailable");
        }

        /// <summary>
        /// InIndicates whether interstitial video ads available.
        /// </summary>
        /// <returns>True if ads are available.</returns>
        public static bool IsVideoInterstitialAvailable()
        {
            return GetResult<bool>("isVideoInterstitialAvailable");
        }

        /// <summary>
        /// Indicates whether rewarded ads are available.
        /// </summary>
        /// <returns>True if ads are available.</returns>
        public static bool IsRewardedAvailable()
        {
            return GetResult<bool>("isRewardedAvailable");
        }

        /// <summary>
        /// Load next banner.
        /// </summary>
        public static void LoadNextBanner()
        {
            CallWrapperMethod ("loadNextBanner");
        }

        /// <summary>
        /// Sets the banner refresh interval.
        /// </summary>
        /// <param name="refreshInterval">refresh interval in seconds.</param>
        public static void SetBannerRefreshInterval(double refreshInterval)
        {
            CallWrapperMethod("setBannerRefreshInterval", refreshInterval);
        }

	    private static T GetResult<T>(string methodName)
	    {
#if UNITY_ANDROID && !UNITY_EDITOR
            return CallWrapperMethod<T>(methodName);
#else
	        return default(T);
#endif
	    }
		
		private static void CallWrapperMethod(string methodName, params object[] args)
		{
#if UNITY_ANDROID && !UNITY_EDITOR
			AndroidJNI.AttachCurrentThread();
			using (AndroidJavaClass adToAppWrapper = GetWrapperClass()) 
			{
                adToAppWrapper.CallStatic(methodName, args);
			}
#endif
		}

        private static T CallWrapperMethod<T>(string methodName, params object[] args)
        {
#if UNITY_ANDROID && !UNITY_EDITOR 
            AndroidJNI.AttachCurrentThread();
            using (AndroidJavaClass adToAppWrapper = GetWrapperClass())
            {
                return adToAppWrapper.CallStatic<T>(methodName, args);
            }
#else
            return default(T);
#endif
        }

        private static void CallWrapperMethodWithContext(Action<object> action)
        {
#if UNITY_ANDROID && !UNITY_EDITOR 
            AndroidJNI.AttachCurrentThread();
            
            using (var wrapperContext = GetAndroidContext())
            {
                action(wrapperContext);
            }
#endif
        }

#if UNITY_ANDROID && !UNITY_EDITOR 

		/// <summary>
		/// Returns the AdToApp wrapper class.
		/// IMPORTANT: caller must dispose the returned proxy.
		/// </summary>
		/// <returns>The wrapper class proxy.</returns>
		private static AndroidJavaClass GetWrapperClass()
		{
			AndroidJNI.AttachCurrentThread();
            return new AndroidJavaClass("com.appintop.adtoappunitywrapper.AdToAppUnity");
		}
#endif

        /// <summary>
		/// Returns the instance of the current android context.
		/// IMPORTANT: caller must dispose the returned proxy.
		/// </summary>
		/// <returns>The android context proxy.</returns>
		private static IDisposable GetAndroidContext()
		{
#if UNITY_ANDROID && !UNITY_EDITOR 
			AndroidJNI.AttachCurrentThread();
			return new AndroidJavaClass ("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject> ("currentActivity");
#else
            return null;
#endif
		}

	    private static string NormalizeAdContentType(string adContentType)
	    {
	        if (adContentType == null)
	        {
                throw new ArgumentNullException("adContentType");
	        }

	        return adContentType.ToLowerInvariant();
	    }
	}
}
