namespace AdToApp
{
    public interface IAdToAppiOSSDKDelegate
    {
        //Fullscreen ads
        void onInterstitialWillAppear(string adContentType);
        void onInterstitialDidDisappear(string adContentType);
		void onInterstitialFailedToAppear(string adContentType);
		void onInterstitialClicked(string adContentType);
        void onRewardedCompleted(string reward);

        //Banners
        void onBannerDidDisplayAd();
        void onBannerFailedToDisplayAd(string errorDescription);
		void onBannerClicked();
    };
}
