//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class CoreViewController, UITouch;
@protocol WindowTapDelegate;

@interface Window : UIWindow
{
    CoreViewController<WindowTapDelegate> *_tapDelegate;
    UITouch *_currentTouch;
}

@property(retain, nonatomic) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
@property(nonatomic) __weak CoreViewController<WindowTapDelegate> *tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;

@end
