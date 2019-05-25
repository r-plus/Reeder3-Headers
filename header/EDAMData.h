//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData;

@interface EDAMData : NSObject <NSCoding>
{
    NSData *__bodyHash;
    int __size;
    NSData *__body;
    _Bool __bodyHash_isset;
    _Bool __size_isset;
    _Bool __body_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetBody;
- (_Bool)bodyIsSet;
@property(retain, nonatomic, getter=body, setter=setBody:) NSData *body;
- (void)unsetSize;
- (_Bool)sizeIsSet;
@property(nonatomic, getter=size, setter=setSize:) int size;
- (void)unsetBodyHash;
- (_Bool)bodyHashIsSet;
@property(retain, nonatomic, getter=bodyHash, setter=setBodyHash:) NSData *bodyHash;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBodyHash:(id)arg1 size:(int)arg2 body:(id)arg3;

@end

