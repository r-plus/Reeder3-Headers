//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceOAuth2Connector.h"

@interface RKServiceXAuth2Connector : RKServiceOAuth2Connector
{
}

- (_Bool)recoverFromError:(id)arg1;
- (_Bool)prepare;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)authorize;
- (void)authFormDidSubmit:(id)arg1;
- (_Bool)authNeedsWebView;
- (void)setupAuthForm;
- (id)initWithService:(id)arg1 user:(id)arg2;

@end

