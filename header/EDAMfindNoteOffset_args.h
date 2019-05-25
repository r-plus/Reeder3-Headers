//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNoteFilter, NSString;

@interface EDAMfindNoteOffset_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNoteFilter *__filter;
    NSString *__guid;
    _Bool __authenticationToken_isset;
    _Bool __filter_isset;
    _Bool __guid_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetGuid;
- (_Bool)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid;
- (void)unsetFilter;
- (_Bool)filterIsSet;
@property(retain, nonatomic, getter=filter, setter=setFilter:) EDAMNoteFilter *filter;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 filter:(id)arg2 guid:(id)arg3;

@end
