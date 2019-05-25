//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceBaseAuthConnector.h"

@interface RKServiceZootool : RKServiceBaseAuthConnector
{
}

+ (_Bool)canHandleObject:(id)arg1;
+ (_Bool)canShare;
- (void)prepareShareForm:(id)arg1 forObject:(id)arg2;
- (id)shareWithDictionary:(id)arg1;
- (void)shareFormDidSubmit:(id)arg1;
- (void)authFormDidSubmit:(id)arg1;
- (_Bool)verifyAuthorization:(id *)arg1;
- (_Bool)serviceResponseShouldValidateResponse:(id)arg1;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3 user:(id)arg4 pass:(id)arg5;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (void)setupShareForm;
- (void)setupAuthForm;
- (_Bool)flashBezelOnShare;
- (id)initWithService:(id)arg1 user:(id)arg2;

@end
