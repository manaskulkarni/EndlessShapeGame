using System;
using UnityEngine;

namespace AdToApp.AndroidWrapper 
{
	/// <summary>
	/// ATA rewarded ad listener.
	/// </summary>
	public abstract class ATABannerAdListener 
#if UNITY_ANDROID 
        : AndroidJavaProxy
#endif
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="AdToApp.AndroidWrapper.ATABannerAdListener"/> class.
		/// </summary>
        protected ATABannerAdListener()
#if UNITY_ANDROID 
            : base("com.appintop.adbanner.BannerListener")
#endif
		{
		}

		/// <summary>
		/// Banner loaded callback.
		/// </summary>
        public virtual void onBannerLoad()
        {
        }

        /// <summary>
        /// Banner failed to load callback.
        /// </summary>
        public virtual void onBannerFailedToLoad()
        {
        }

        /// <summary>
        /// Banner clicked callback.
        /// </summary>
        public virtual void onBannerClicked()
        {
        }
	}
}