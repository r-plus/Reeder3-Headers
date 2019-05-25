//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class RootViewController;

@interface UIViewController (iPad)
+ (double)defaultFixedWidth;
- (_Bool)shouldAutorotate;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
- (void)handleNavigationPan:(id)arg1;
- (void)handleCustomRightPan:(id)arg1;
- (void)handleCustomLeftPan:(id)arg1;
- (_Bool)canSnapForInterfaceOrientation:(long long)arg1;
- (double)widthForInterfaceOrientation:(long long)arg1;
- (void)setOverlayOpacity:(double)arg1;
- (id)slidingController:(id)arg1 handlerForRightPan:(id)arg2;
- (id)slidingController:(id)arg1 handlerForLeftPan:(id)arg2;
- (void)slidingController:(id)arg1 didSnapToViewController:(id)arg2;
- (void)slidingController:(id)arg1 willSnapToViewController:(id)arg2;
- (void)restore;
@property(readonly, nonatomic) RootViewController *rootViewController;
@end

