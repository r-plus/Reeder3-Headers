//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CoreAnimator, NSArray, NSString, SlidingContentContainerView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface SlidingViewController : UIViewController <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *__rightPanViewTap;
    UIPanGestureRecognizer *__currentPan;
    struct {
        long long fromIndex;
        double x;
        double fullX;
    } __layoutOffset;
    CDUnknownBlockType __additionalSnapBlock;
    CoreAnimator *__additionalSnapAnimator;
    id __leftPanHandler;
    id __rightPanHandler;
    long long __orientation;
    _Bool _animatorWasPulling;
    _Bool _rotating;
    CoreAnimator *_animator;
    SlidingContentContainerView *_contentContainerView;
    UIView *_controllerContentView;
    NSArray *_viewControllers;
    UIViewController *_snappedViewController;
    UIView *_leftPanView;
    UIPanGestureRecognizer *_leftPan;
    UIView *_rightPanView;
    UIPanGestureRecognizer *_rightPan;
}

@property(readonly, nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) UIPanGestureRecognizer *rightPan; // @synthesize rightPan=_rightPan;
@property(readonly, nonatomic) UIView *rightPanView; // @synthesize rightPanView=_rightPanView;
@property(readonly, nonatomic) UIPanGestureRecognizer *leftPan; // @synthesize leftPan=_leftPan;
@property(readonly, nonatomic) UIView *leftPanView; // @synthesize leftPanView=_leftPanView;
@property(readonly, nonatomic) UIViewController *snappedViewController; // @synthesize snappedViewController=_snappedViewController;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) UIView *controllerContentView; // @synthesize controllerContentView=_controllerContentView;
@property(readonly, nonatomic) SlidingContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(readonly, nonatomic) _Bool animatorWasPulling; // @synthesize animatorWasPulling=_animatorWasPulling;
@property(readonly, nonatomic) CoreAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)didSnapToViewController:(id)arg1;
- (void)willSnapToViewController:(id)arg1;
- (long long)compareController:(id)arg1 toController:(id)arg2;
- (void)__main__notifyDidSnapAtController:(id)arg1;
- (void)__notifyDidSnapAtController;
- (void)__main__notifyWillSnapAtController:(id)arg1;
- (void)__notifyWillSnapAtController:(id)arg1;
- (void)__notifyOfSnapAtPosition:(double)arg1;
- (void)__animatorDidCancel:(id)arg1;
- (void)__animatorDidComplete:(id)arg1;
- (void)__snapToViewController:(id)arg1 animated:(_Bool)arg2 forInterfaceOrientation:(long long)arg3 snapToFirst:(_Bool)arg4;
- (void)__snapToViewController:(id)arg1 animated:(_Bool)arg2 forInterfaceOrientation:(long long)arg3;
- (void)__snapToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)__snapToViewController:(id)arg1 animated:(_Bool)arg2 snapToFirst:(_Bool)arg3;
- (void)snapToViewController:(id)arg1 offset:(long long)arg2 animated:(_Bool)arg3;
- (void)snapToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)snapToFirstViewControllerAnimated:(_Bool)arg1;
- (void)adjustRightPanViewForPosition:(struct CGPoint)arg1;
- (void)adjustRightPanView;
- (void)rightPanViewTap:(id)arg1;
- (void)handleNavigationPan:(id)arg1;
- (void)handleRightNavigationPan:(id)arg1;
- (void)handleLeftNavigationPan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)__cancelAnimator;
- (void)removeViewControllerAtIndex:(long long)arg1 animated:(_Bool)arg2 executeOnSnap:(_Bool)arg3;
- (void)__didInsertOrDelete;
- (void)__setLayoutOffset:(double)arg1;
- (void)insertViewController:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 executeOnSnap:(_Bool)arg4;
- (void)layoutViewControllers:(_Bool)arg1 forInterfaceOrientation:(long long)arg2;
- (void)layoutViewControllers:(_Bool)arg1;
- (void)layoutViewControllers;
@property(readonly, nonatomic) NSArray *visibleViewControllers;
@property(readonly, nonatomic) struct CGRect visibleContentRect;
- (void)__layoutForInterfaceOrientation:(long long)arg1;
- (void)layoutForCurrentInterfaceOrientation;
- (id)proposedSnapController:(id)arg1 forRotationToInterfaceOrientation:(long long)arg2;
- (long long)interfaceOrientation;
- (void)updateOrientation;
@property(readonly, nonatomic, getter=isPortrait) _Bool portrait;
@property(readonly, nonatomic, getter=isLandscape) _Bool landscape;
@property(readonly, nonatomic, getter=isOnSplitScreen) _Bool onSplitScreen;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setPaddingTop:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
