//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMauthenticateToSharedNote_args : NSObject <NSCoding>
{
    NSString *__guid;
    NSString *__noteKey;
    _Bool __guid_isset;
    _Bool __noteKey_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetNoteKey;
- (_Bool)noteKeyIsSet;
@property(retain, nonatomic, getter=noteKey, setter=setNoteKey:) NSString *noteKey;
- (void)unsetGuid;
- (_Bool)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGuid:(id)arg1 noteKey:(id)arg2;

@end
