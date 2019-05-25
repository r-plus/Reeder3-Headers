//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNoteEmailParameters, NSString;

@interface EDAMemailNote_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNoteEmailParameters *__parameters;
    _Bool __authenticationToken_isset;
    _Bool __parameters_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetParameters;
- (_Bool)parametersIsSet;
@property(retain, nonatomic, getter=parameters, setter=setParameters:) EDAMNoteEmailParameters *parameters;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 parameters:(id)arg2;

@end
