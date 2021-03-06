//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMNotFoundException : NSException <NSCoding>
{
    NSString *__identifier;
    NSString *__key;
    _Bool __identifier_isset;
    _Bool __key_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetKey;
- (_Bool)keyIsSet;
@property(retain, nonatomic, getter=key, setter=setKey:) NSString *key;
- (void)unsetIdentifier;
- (_Bool)identifierIsSet;
@property(retain, nonatomic, getter=identifier, setter=setIdentifier:) NSString *identifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 key:(id)arg2;
- (id)init;

@end

