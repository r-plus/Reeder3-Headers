//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OASignatureProviding-Protocol.h"

@class NSString;

@interface OAHMAC_SHA1SignatureProvider : NSObject <OASignatureProviding>
{
}

- (id)signClearText:(id)arg1 withSecret:(id)arg2;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
