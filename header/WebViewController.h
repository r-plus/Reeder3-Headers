//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class BrowserView, BrowserViewNavigationBar, CoreAnimator, NSString, ShareController, UIView;

@interface WebViewController : CoreViewController <UIWebViewDelegate>
{
    NSString *__nonReadabilityUrl;
    NSString *__userUrl;
    _Bool __loading;
    CoreAnimator *__panAnimator;
    UIView *__panBack;
    UIView *__panForward;
    UIView *__progressView;
    double __progress;
    BrowserViewNavigationBar *_navigationBar;
    NSString *_backButtonImage;
    ShareController *_shareController;
    UIView *_barView;
}

@property(readonly, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(readonly, nonatomic) __weak ShareController *shareController; // @synthesize shareController=_shareController;
@property(copy, nonatomic) NSString *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(readonly, nonatomic) BrowserViewNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)displayReadabilityActive:(_Bool)arg1;
- (void)toggleReadability:(id)arg1;
- (_Bool)isReadabilityUrl:(id)arg1;
@property(readonly, nonatomic) _Bool isReadabilityActive;
@property(readonly, nonatomic) NSString *url;
- (void)loadRequest:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadUrl:(id)arg1;
- (id)shareObject:(id)arg1 customContentForService:(id)arg2;
- (void)sharePan:(id)arg1;
- (void)share:(id)arg1;
- (id)__shareObject;
- (void)webView:(id)arg1 shareSelectionWithSender:(id)arg2;
- (void)webView:(id)arg1 presentCallOutForUrl:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)uiWebView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)pop:(id)arg1;
- (void)slidingController:(id)arg1 didSnapToViewController:(id)arg2;
- (void)slidingController:(id)arg1 willSnapToViewController:(id)arg2;
- (void)handleCustomRightPan:(id)arg1;
- (id)slidingController:(id)arg1 handlerForRightPan:(id)arg2;
- (void)longPress:(id)arg1;
- (double)widthForInterfaceOrientation:(long long)arg1;
- (void)webView:(id)arg1 didScroll:(id)arg2;
- (id)coloredImage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)reloadOrStop:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)painterDidChange:(id)arg1;
- (void)viewDidLoad;
- (double)contentViewPaddingTop;
@property(readonly, nonatomic) BrowserView *webView;
- (void)articleDidChange:(id)arg1;
- (int)loadArticleRequest:(id)arg1 mobilized:(_Bool)arg2 externalIfNeeded:(_Bool)arg3;
- (int)loadArticleRequest:(id)arg1 mobilized:(_Bool)arg2;
- (int)loadArticleRequest:(id)arg1;
- (void)openLinksSettingDidChange:(id)arg1;
- (void)readNowServiceDidChange:(id)arg1;
- (void)validateReloadButton;
- (void)validateMobilizerButton;
- (void)validateActionButton;
- (void)validateToolbarItems;
- (void)discardWebView;
- (id)loadContentView;
- (void)setProgress:(double)arg1;
- (void)progress:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

