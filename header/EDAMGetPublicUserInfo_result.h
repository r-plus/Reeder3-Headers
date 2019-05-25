//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNotFoundException, EDAMPublicUserInfo, EDAMSystemException, EDAMUserException;

@interface EDAMGetPublicUserInfo_result : NSObject <NSCoding>
{
    EDAMPublicUserInfo *__success;
    EDAMNotFoundException *__notFoundException;
    EDAMSystemException *__systemException;
    EDAMUserException *__userException;
    _Bool __success_isset;
    _Bool __notFoundException_isset;
    _Bool __systemException_isset;
    _Bool __userException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUserException;
- (_Bool)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException;
- (void)unsetSystemException;
- (_Bool)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException;
- (void)unsetNotFoundException;
- (_Bool)notFoundExceptionIsSet;
@property(retain, nonatomic, getter=notFoundException, setter=setNotFoundException:) EDAMNotFoundException *notFoundException;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(retain, nonatomic, getter=success, setter=setSuccess:) EDAMPublicUserInfo *success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(id)arg1 notFoundException:(id)arg2 systemException:(id)arg3 userException:(id)arg4;

@end

