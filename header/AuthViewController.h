//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class ModalView, NSString, ReederWebView, UIActivityIndicatorView, WebViewNavigationBar;

@interface AuthViewController : CoreViewController <UIWebViewDelegate>
{
    UIActivityIndicatorView *__loading;
    _Bool __handled;
    ModalView *__modal;
    _Bool __isLoading;
    double __statusbarOffset;
    WebViewNavigationBar *_navigationBar;
}

+ (void)initialize;
@property(readonly, nonatomic) WebViewNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)endModal;
- (void)startModal;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)uiWebView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)__updateTitleWithRequest:(id)arg1;
- (void)__stoppedLoading2;
- (void)__stoppedLoading;
- (void)loadRequest:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)webView:(id)arg1 didScroll:(id)arg2;
@property(readonly, nonatomic) ReederWebView *webView;
- (void)dealloc;
- (void)layoutViewForStatusbar;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)pop:(id)arg1;
- (double)contentViewPaddingTop;
- (id)loadContentView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

