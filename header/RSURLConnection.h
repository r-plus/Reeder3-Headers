//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLConnection.h>

@interface RSURLConnection : NSURLConnection
{
}

+ (void)sendAsynchronousRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendSynchronousRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)sendSynchronousRequestAcceptingAnyCertificate:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)updateActivityIndicator;
+ (void)setActive:(_Bool)arg1;

@end
