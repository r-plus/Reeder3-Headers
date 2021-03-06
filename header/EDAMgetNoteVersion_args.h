//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMgetNoteVersion_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__noteGuid;
    int __updateSequenceNum;
    _Bool __withResourcesData;
    _Bool __withResourcesRecognition;
    _Bool __withResourcesAlternateData;
    _Bool __authenticationToken_isset;
    _Bool __noteGuid_isset;
    _Bool __updateSequenceNum_isset;
    _Bool __withResourcesData_isset;
    _Bool __withResourcesRecognition_isset;
    _Bool __withResourcesAlternateData_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWithResourcesAlternateData;
- (_Bool)withResourcesAlternateDataIsSet;
@property(nonatomic, getter=withResourcesAlternateData, setter=setWithResourcesAlternateData:) _Bool withResourcesAlternateData;
- (void)unsetWithResourcesRecognition;
- (_Bool)withResourcesRecognitionIsSet;
@property(nonatomic, getter=withResourcesRecognition, setter=setWithResourcesRecognition:) _Bool withResourcesRecognition;
- (void)unsetWithResourcesData;
- (_Bool)withResourcesDataIsSet;
@property(nonatomic, getter=withResourcesData, setter=setWithResourcesData:) _Bool withResourcesData;
- (void)unsetUpdateSequenceNum;
- (_Bool)updateSequenceNumIsSet;
@property(nonatomic, getter=updateSequenceNum, setter=setUpdateSequenceNum:) int updateSequenceNum;
- (void)unsetNoteGuid;
- (_Bool)noteGuidIsSet;
@property(retain, nonatomic, getter=noteGuid, setter=setNoteGuid:) NSString *noteGuid;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 noteGuid:(id)arg2 updateSequenceNum:(int)arg3 withResourcesData:(_Bool)arg4 withResourcesRecognition:(_Bool)arg5 withResourcesAlternateData:(_Bool)arg6;

@end

