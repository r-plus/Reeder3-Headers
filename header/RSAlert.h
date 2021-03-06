//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RSAlert-Protocol.h"

@class NSString;

@interface RSAlert : NSObject <RSAlert>
{
}

+ (void)presentSheetWithTitle:(id)arg1 buttonTitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)presentInput:(id)arg1 withTitle:(id)arg2 placeholder:(id)arg3 description:(id)arg4 buttonTitle:(id)arg5 cancelButtonTitle:(id)arg6 handler:(CDUnknownBlockType)arg7 inView:(id)arg8;
+ (void)presentInput:(id)arg1 withTitle:(id)arg2 placeholder:(id)arg3 description:(id)arg4 buttonTitle:(id)arg5 cancelButtonTitle:(id)arg6 handler:(CDUnknownBlockType)arg7;
+ (void)presentSheetWithViews:(id)arg1 inView:(id)arg2 align:(int)arg3;
+ (void)presentSheetWithTitle:(id)arg1 buttonTitle:(id)arg2 cancelButtonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5 inView:(id)arg6;
+ (void)presentSheetWithTitle:(id)arg1 buttonTitle:(id)arg2 cancelButtonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4 inView:(id)arg5;
+ (void)presentSheetWithTitle:(id)arg1 buttonTitle:(id)arg2 cancelButtonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)presentWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)presentWithImage:(id)arg1 buttonTitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)currentPanel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

