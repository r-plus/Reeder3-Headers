//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding>
{
    NSMutableDictionary *_store;
}

+ (id)load;
@property(retain, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)clearAllCredentials;
- (void)removeCredentials:(id)arg1;
- (id)credentialsForHost:(id)arg1;
- (void)addCredentials:(id)arg1;
- (void)delete;
- (void)save;
- (id)init;
- (void)dealloc;

@end

