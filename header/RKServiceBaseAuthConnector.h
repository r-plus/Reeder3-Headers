//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceConnector.h"

@interface RKServiceBaseAuthConnector : RKServiceConnector
{
}

- (_Bool)recoverFromError:(id)arg1;
- (_Bool)prepare;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)authorize;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;

@end

