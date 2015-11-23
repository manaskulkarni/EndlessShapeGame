using System;
using AdToApp.AndroidWrapper;
using UnityEngine;

namespace AdToApp
{
    public sealed class AdToAppSDKDelegate : MonoBehaviour, IAdToAppiOSSDKDelegate
    {
        private AdToAppSDKDelegate()
        {
        }

        public static AdToAppSDKDelegate CreateInstance(MonoBehaviour obj)
        {
            var sdkDelegate = obj.gameObject.AddComponent<AdToAppSDKDelegate>();
            return sdkDelegate;
        }

        #region Common Interface

        // Interstitial events
        public event Action<string, string> OnInterstitialStarted;
        public event Action<string, string> OnInterstitialClosed;
		public event Action<string, string> OnInterstitialFailedToAppear;
        public event Action<string, string> OnInterstitialClicked;
        public event Action<string, string> OnFirstInterstitialLoad;

        // Rewarded events
        public event Action<string> OnRewardedStarted;
        public event Action<string> OnRewardedDismissed;
        public event Action<string, string, string> OnRewardedCompleted;
        public event Action<string> OnFirstRewardedLoad;

        // Banner events
        public event Action OnBannerLoad;
        public event Action<string> OnBannerFailedToLoad;
        public event Action OnBannerClicked;

        #endregion

        #region iOS callbacks

        public void onInterstitialWillAppear(string adContentType)
        {
            if (OnInterstitialStarted != null)
            {
                OnInterstitialStarted(adContentType, null);
            }
        }

        public void onInterstitialDidDisappear(string adContentType)
        {
            if (OnInterstitialClosed != null)
            {
                OnInterstitialClosed(adContentType, null);
            }
        }

		public void onInterstitialFailedToAppear(string adContentType)
		{
			if (OnInterstitialFailedToAppear != null)
			{
				OnInterstitialFailedToAppear(adContentType, null);
			}
		}

		public void onInterstitialClicked(string adContentType)
		{
			if (OnInterstitialClicked != null)
			{
				OnInterstitialClicked(adContentType, null);
			}
		}

        public void onRewardedCompleted(string reward)
        {
            if (OnRewardedCompleted != null)
            {
                OnRewardedCompleted(null, null, reward);
            }
        }

        //Banners
        public void onBannerDidDisplayAd()
        {
            if (OnBannerLoad != null)
            {
                OnBannerLoad();
            }
        }

        public void onBannerFailedToDisplayAd(string errorDescription)
        {
            if (OnBannerFailedToLoad != null)
            {
                OnBannerFailedToLoad(errorDescription);
            }
        }

		public void onBannerClicked()
		{
			if (OnBannerClicked != null)
			{
				OnBannerClicked();
			}
		}

        #endregion

        #region Android Callbacks

        public ATAInterstitialAdListener GetInterstitialAndroidAdListener()
        {
            return new AndroidInterstitialListener(this);
        }

        public ATARewardedAdListener GetRewardedAndroidAdListener()
        {
            return new AndroidRewardedListener(this);
        }

        public ATABannerAdListener GetBannerAndroidAdListener()
        {
            return new AndroidBannerListener(this);
        }

        private class AndroidInterstitialListener : ATAInterstitialAdListener
        {
            private readonly AdToAppSDKDelegate _sdkDelegate;

            public AndroidInterstitialListener(AdToAppSDKDelegate sdkDelegate)
            {
                _sdkDelegate = sdkDelegate;
            }

            public override void onInterstitialStarted(string adType, string provider)
            {
                if (_sdkDelegate.OnInterstitialStarted != null)
                {
                    _sdkDelegate.OnInterstitialStarted(adType, provider);
                }
            }

            public override void onInterstitialClosed(String adType, String provider)
            {
                if (_sdkDelegate.OnInterstitialClosed != null)
                {
                    _sdkDelegate.OnInterstitialClosed(adType, provider);
                }
            }

            public override void onInterstitialClicked(String adType, String provider)
            {
                if (_sdkDelegate.OnInterstitialClicked != null)
                {
                    _sdkDelegate.OnInterstitialClicked(adType, provider);
                }
            }

            public override void onFirstInterstitialLoad(String adType, String provider)
            {
                if (_sdkDelegate.OnFirstInterstitialLoad != null)
                {
                    _sdkDelegate.OnFirstInterstitialLoad(adType, provider);
                }
            }
        }

        private class AndroidRewardedListener : ATARewardedAdListener
        {
            private readonly AdToAppSDKDelegate _sdkDelegate;

            public AndroidRewardedListener(AdToAppSDKDelegate sdkDelegate)
            {
                _sdkDelegate = sdkDelegate;
            }

            public override void onRewardedStarted(String adProvider)
            {
                if (_sdkDelegate.OnRewardedStarted != null)
                {
                    _sdkDelegate.OnRewardedStarted(adProvider);
                }
            }

            public override void onRewardedDismissed(String adProvider)
            {
                if (_sdkDelegate.OnRewardedDismissed != null)
                {
                    _sdkDelegate.OnRewardedDismissed(adProvider);
                }
            }

#if UNITY_ANDROID
            public void onRewardedCompleted(String adProvider, AndroidJavaObject currencyName, AndroidJavaObject currencyValue)
            {
                if (_sdkDelegate.OnRewardedCompleted != null)
                {
                    _sdkDelegate.OnRewardedCompleted(adProvider, currencyName.ToString(), currencyValue.ToString());
                }
            }
#endif

            public override void onRewardedCompleted(String adProvider, String currencyName, String currencyValue)
            {
                if (_sdkDelegate.OnRewardedCompleted != null)
                {
                    _sdkDelegate.OnRewardedCompleted(adProvider, currencyName, currencyValue);
                }
            }

            public override void onFirstRewardedLoad(String adProvider)
            {
                if (_sdkDelegate.OnFirstRewardedLoad != null)
                {
                    _sdkDelegate.OnFirstRewardedLoad(adProvider);
                }
            }
        }

        private class AndroidBannerListener : ATABannerAdListener
        {
            private readonly AdToAppSDKDelegate _sdkDelegate;

            public AndroidBannerListener(AdToAppSDKDelegate sdkDelegate)
            {
                _sdkDelegate = sdkDelegate;
            }


            public override void onBannerLoad()
            {
                if (_sdkDelegate.OnBannerLoad != null)
                {
                    _sdkDelegate.OnBannerLoad();
                }
            }

            public override void onBannerFailedToLoad()
            {
                if (_sdkDelegate.OnBannerFailedToLoad != null)
                {
                    _sdkDelegate.OnBannerFailedToLoad(null);
                }
            }

            public override void onBannerClicked()
            {
                if (_sdkDelegate.OnBannerClicked != null)
                {
                    _sdkDelegate.OnBannerClicked();
                }
            }
        }

        #endregion
    };
}
