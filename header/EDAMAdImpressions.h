//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface EDAMAdImpressions : NSObject <NSCoding>
{
    int __adId;
    int __impressionCount;
    int __impressionTime;
    _Bool __adId_isset;
    _Bool __impressionCount_isset;
    _Bool __impressionTime_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetImpressionTime;
- (_Bool)impressionTimeIsSet;
@property(nonatomic, getter=impressionTime, setter=setImpressionTime:) int impressionTime;
- (void)unsetImpressionCount;
- (_Bool)impressionCountIsSet;
@property(nonatomic, getter=impressionCount, setter=setImpressionCount:) int impressionCount;
- (void)unsetAdId;
- (_Bool)adIdIsSet;
@property(nonatomic, getter=adId, setter=setAdId:) int adId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdId:(int)arg1 impressionCount:(int)arg2 impressionTime:(int)arg3;

@end

