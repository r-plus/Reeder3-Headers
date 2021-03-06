//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceConnector.h"

@interface RKServiceOAuth2Connector : RKServiceConnector
{
}

- (void)setReadForItems:(id)arg1 stream:(id)arg2 markAll:(_Bool)arg3;
- (void)setStarred:(int)arg1 forItem:(id)arg2;
- (void)setUnread:(int)arg1 forItem:(id)arg2;
- (void)sync:(id)arg1;
- (void)fetchUserInfo;
- (_Bool)recoverFromError:(id)arg1;
- (_Bool)prepare:(id *)arg1;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)authorize;
- (_Bool)authNeedsWebView;
- (void)handleUrlEvent:(id)arg1;
- (_Bool)refreshToken:(id *)arg1;
- (void)getToken:(id)arg1;
- (void)clearAdditionalCookies;
- (void)getCode;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (id)initWithService:(id)arg1 user:(id)arg2;

@end

