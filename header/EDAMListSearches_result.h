//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMSystemException, EDAMUserException, NSArray;

@interface EDAMListSearches_result : NSObject <NSCoding>
{
    NSArray *__success;
    EDAMUserException *__userException;
    EDAMSystemException *__systemException;
    _Bool __success_isset;
    _Bool __userException_isset;
    _Bool __systemException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSystemException;
- (_Bool)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException;
- (void)unsetUserException;
- (_Bool)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException;
- (void)unsetSuccess;
- (_Bool)successIsSet;
@property(retain, nonatomic, getter=success, setter=setSuccess:) NSArray *success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(id)arg1 userException:(id)arg2 systemException:(id)arg3;

@end
