//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMLinkedNotebook : NSObject <NSCoding>
{
    NSString *__shareName;
    NSString *__username;
    NSString *__shardId;
    NSString *__shareKey;
    NSString *__uri;
    NSString *__guid;
    int __updateSequenceNum;
    NSString *__noteStoreUrl;
    NSString *__webApiUrlPrefix;
    _Bool __shareName_isset;
    _Bool __username_isset;
    _Bool __shardId_isset;
    _Bool __shareKey_isset;
    _Bool __uri_isset;
    _Bool __guid_isset;
    _Bool __updateSequenceNum_isset;
    _Bool __noteStoreUrl_isset;
    _Bool __webApiUrlPrefix_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWebApiUrlPrefix;
- (_Bool)webApiUrlPrefixIsSet;
@property(retain, nonatomic, getter=webApiUrlPrefix, setter=setWebApiUrlPrefix:) NSString *webApiUrlPrefix;
- (void)unsetNoteStoreUrl;
- (_Bool)noteStoreUrlIsSet;
@property(retain, nonatomic, getter=noteStoreUrl, setter=setNoteStoreUrl:) NSString *noteStoreUrl;
- (void)unsetUpdateSequenceNum;
- (_Bool)updateSequenceNumIsSet;
@property(nonatomic, getter=updateSequenceNum, setter=setUpdateSequenceNum:) int updateSequenceNum;
- (void)unsetGuid;
- (_Bool)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid;
- (void)unsetUri;
- (_Bool)uriIsSet;
@property(retain, nonatomic, getter=uri, setter=setUri:) NSString *uri;
- (void)unsetShareKey;
- (_Bool)shareKeyIsSet;
@property(retain, nonatomic, getter=shareKey, setter=setShareKey:) NSString *shareKey;
- (void)unsetShardId;
- (_Bool)shardIdIsSet;
@property(retain, nonatomic, getter=shardId, setter=setShardId:) NSString *shardId;
- (void)unsetUsername;
- (_Bool)usernameIsSet;
@property(retain, nonatomic, getter=username, setter=setUsername:) NSString *username;
- (void)unsetShareName;
- (_Bool)shareNameIsSet;
@property(retain, nonatomic, getter=shareName, setter=setShareName:) NSString *shareName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareName:(id)arg1 username:(id)arg2 shardId:(id)arg3 shareKey:(id)arg4 uri:(id)arg5 guid:(id)arg6 updateSequenceNum:(int)arg7 noteStoreUrl:(id)arg8 webApiUrlPrefix:(id)arg9;

@end
