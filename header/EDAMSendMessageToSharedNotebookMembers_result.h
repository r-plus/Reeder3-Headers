//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNotFoundException, EDAMSystemException, EDAMUserException;

@interface EDAMSendMessageToSharedNotebookMembers_result : NSObject <NSCoding>
{
    int __success;
    EDAMUserException *__userException;
    EDAMNotFoundException *__notFoundException;
    EDAMSystemException *__systemException;
    _Bool __success_isset;
    _Bool __userException_isset;
    _Bool __notFoundException_isset;
    _Bool __systemException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSystemException;
- (_Bool)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException;
- (void)unsetNotFoundException;
- (_Bool)notFoundExceptionIsSet;
@property(retain, nonatomic, getter=notFoundException, setter=setNotFoundException:) EDAMNotFoundException *notFoundException;
- (void)unsetUserException;
- (_Bool)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(nonatomic, getter=success, setter=setSuccess:) int success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(int)arg1 userException:(id)arg2 notFoundException:(id)arg3 systemException:(id)arg4;

@end

