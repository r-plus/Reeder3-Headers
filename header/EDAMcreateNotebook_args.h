//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNotebook, NSString;

@interface EDAMcreateNotebook_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNotebook *__notebook;
    _Bool __authenticationToken_isset;
    _Bool __notebook_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetNotebook;
- (_Bool)notebookIsSet;
@property(retain, nonatomic, getter=notebook, setter=setNotebook:) EDAMNotebook *notebook;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 notebook:(id)arg2;

@end

