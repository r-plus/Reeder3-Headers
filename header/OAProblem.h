//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OAProblem : NSObject
{
    NSString *problem;
}

+ (id)TokenNotRenewable;
+ (id)TokenExpired;
+ (id)TimestampRefused;
+ (id)NonceUsed;
+ (id)SignatureInvalid;
+ (id)TokenRejected;
+ (id)ConsumerKeyUnknown;
+ (id)VersionRejected;
+ (id)ParameterAbsent;
+ (id)SignatureMethodRejected;
+ (id)validProblems;
+ (id)problemWithResponseBody:(id)arg1;
@property(readonly) NSString *problem; // @synthesize problem;
- (void).cxx_destruct;
- (id)description;
- (int)code;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToProblem:(id)arg1;
- (id)initWithResponseBody:(id)arg1;
- (id)initWithProblem:(id)arg1;
- (id)initWithPointer:(id)arg1;

@end

