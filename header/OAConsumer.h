//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OAConsumer : NSObject
{
    NSString *key;
    NSString *secret;
}

@property(copy) NSString *secret; // @synthesize secret;
@property(copy) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (_Bool)isEqualToConsumer:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 secret:(id)arg2;

@end

