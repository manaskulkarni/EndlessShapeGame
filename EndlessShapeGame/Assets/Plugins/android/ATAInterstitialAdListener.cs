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
		/// Initializes a new instance of the <see cref="AdToApp.AndroidWrapper.ATAInterstitialAdListener"/> class.
		/// </summary>
		protected ATAInterstitialAdListener() 
#if UNITY_ANDROID
            : base("com.appintop.adlisteners.ATAInterstitialAdListener")
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
	}
}