using System;
using UnityEngine;

namespace AdToApp.AndroidWrapper 
{
	/// <summary>
	/// ATA interstitial ad listener.
	/// </summary>
	public abstract class ATAInterstitialAdListener 
#if UNITY_ANDROID 
        : AndroidJavaProxy
#endif
	{
        /// <summary>
        /// Initializes a new instance of the <see cref="AdToApp.AndroidWrapper.InterstitialListener"/> class.
        /// </summary>
        protected ATAInterstitialAdListener() 
#if UNITY_ANDROID
            : base("com.appintop.interstitialads.InterstitialListener")
#endif
		{
		}

		/// <summary>
		/// Interstitial started callback.
		/// </summary>
		/// <param name="adType">Ad type.</param>
		/// <param name="provider">Ad provider.</param>
		public virtual void onInterstitialStarted (String adType, String provider)
		{
		}

		/// <summary>
		/// Interstitial closed callback.
		/// </summary>
		/// <param name="adType">Ad type.</param>
		/// <param name="provider">Ad provider.</param>
		public virtual void onInterstitialClosed (String adType, String provider)
		{
		}

		/// <summary>
		/// Interstitial clicked callback.
		/// </summary>
		/// <param name="adType">Ad type.</param>
		/// <param name="provider">Ad provider.</param>
		public virtual void onInterstitialClicked (String adType, String provider)
		{
		}

		/// <summary>
		/// First interstitial loaded callback.
		/// </summary>
		/// <param name="adType">Ad type.</param>
		/// <param name="provider">Ad provider.</param>
		public virtual void onFirstInterstitialLoad (String adType, String provider)
		{
        }

        /// <summary>
        /// Interstitial failed to show.
        /// </summary>
        /// <param name="adType">Ad type.</param>
        public virtual bool onInterstitialFailedToShow (String adType)
        {
            return false;
        }

        /// <summary>
		/// Rewarded completed callback.
		/// </summary>
		/// <param name="adProvider">Ad provider.</param>
		/// <param name="currencyName">Name of the currency.</param>
		/// <param name="currencyValue">Value of the currency.</param>
		public virtual void onRewardedCompleted(String adProvider, String currencyName, String currencyValue)
        {
        }
    }
}