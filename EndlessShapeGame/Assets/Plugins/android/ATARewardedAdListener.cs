using System;
using UnityEngine;

namespace AdToApp.AndroidWrapper 
{
	/// <summary>
	/// ATA rewarded ad listener.
	/// </summary>
	public abstract class ATARewardedAdListener 
#if UNITY_ANDROID 
        : AndroidJavaProxy
#endif
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="AdToApp.AndroidWrapper.ATARewardedAdListener"/> class.
		/// </summary>
		protected ATARewardedAdListener() 
#if UNITY_ANDROID
            : base("com.appintop.adlisteners.ATARewardedAdListener")
#endif
        {
		}

		/// <summary>
		/// Rewarded started callback.
		/// </summary>
		/// <param name="adProvider">Ad provider.</param>
		public virtual void onRewardedStarted (String adProvider)
		{
		}

		/// <summary>
		/// Rewarded dismissed callback.
		/// </summary>
		/// <param name="adProvider">Ad provider.</param>
		public virtual void onRewardedDismissed (String adProvider)
		{
		}

		/// <summary>
		/// Rewarded completed callback.
		/// </summary>
		/// <param name="adProvider">Ad provider.</param>
		/// <param name="currencyName">Name of the currency.</param>
		/// <param name="currencyValue">Value of the currency.</param>
		public virtual void onRewardedCompleted (String adProvider, String currencyName, String currencyValue)
		{
		}

		/// <summary>
		/// First rewarded loaded callback.
		/// </summary>
		/// <param name="adProvider">Ad provider.</param>
		public virtual void onFirstRewardedLoad (String adProvider)
		{
		}
	}
}