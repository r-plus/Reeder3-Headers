//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMgetPublicUserInfo_args : NSObject <NSCoding>
{
    NSString *__username;
    _Bool __username_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUsername;
- (_Bool)usernameIsSet;
@property(retain, nonatomic, getter=username, setter=setUsername:) NSString *username;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1;

@end
