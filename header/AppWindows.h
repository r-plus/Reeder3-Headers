//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface AppWindows : NSObject
{
    UIWindow *_status;
    UIWindow *_main;
}

+ (id)shared;
@property(nonatomic) __weak UIWindow *main; // @synthesize main=_main;
@property(nonatomic) __weak UIWindow *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

