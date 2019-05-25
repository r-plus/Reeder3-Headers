//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EDAMexpungeNotes_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    NSArray *__noteGuids;
    _Bool __authenticationToken_isset;
    _Bool __noteGuids_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetNoteGuids;
- (_Bool)noteGuidsIsSet;
@property(retain, nonatomic, getter=noteGuids, setter=setNoteGuids:) NSArray *noteGuids;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 noteGuids:(id)arg2;

@end

