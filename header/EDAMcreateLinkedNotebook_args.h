//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMLinkedNotebook, NSString;

@interface EDAMcreateLinkedNotebook_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMLinkedNotebook *__linkedNotebook;
    _Bool __authenticationToken_isset;
    _Bool __linkedNotebook_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetLinkedNotebook;
- (_Bool)linkedNotebookIsSet;
@property(retain, nonatomic, getter=linkedNotebook, setter=setLinkedNotebook:) EDAMLinkedNotebook *linkedNotebook;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 linkedNotebook:(id)arg2;

@end

