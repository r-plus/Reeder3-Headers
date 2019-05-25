//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMNoteAttributes, NSArray, NSData, NSString;

@interface EDAMNote : NSObject <NSCoding>
{
    NSString *__guid;
    NSString *__title;
    NSString *__content;
    NSData *__contentHash;
    int __contentLength;
    long long __created;
    long long __updated;
    long long __deleted;
    _Bool __active;
    int __updateSequenceNum;
    NSString *__notebookGuid;
    NSArray *__tagGuids;
    NSArray *__resources;
    EDAMNoteAttributes *__attributes;
    NSArray *__tagNames;
    _Bool __guid_isset;
    _Bool __title_isset;
    _Bool __content_isset;
    _Bool __contentHash_isset;
    _Bool __contentLength_isset;
    _Bool __created_isset;
    _Bool __updated_isset;
    _Bool __deleted_isset;
    _Bool __active_isset;
    _Bool __updateSequenceNum_isset;
    _Bool __notebookGuid_isset;
    _Bool __tagGuids_isset;
    _Bool __resources_isset;
    _Bool __attributes_isset;
    _Bool __tagNames_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetTagNames;
- (_Bool)tagNamesIsSet;
@property(retain, nonatomic, getter=tagNames, setter=setTagNames:) NSArray *tagNames;
- (void)unsetAttributes;
- (_Bool)attributesIsSet;
@property(retain, nonatomic, getter=attributes, setter=setAttributes:) EDAMNoteAttributes *attributes;
- (void)unsetResources;
- (_Bool)resourcesIsSet;
@property(retain, nonatomic, getter=resources, setter=setResources:) NSArray *resources;
- (void)unsetTagGuids;
- (_Bool)tagGuidsIsSet;
@property(retain, nonatomic, getter=tagGuids, setter=setTagGuids:) NSArray *tagGuids;
- (void)unsetNotebookGuid;
- (_Bool)notebookGuidIsSet;
@property(retain, nonatomic, getter=notebookGuid, setter=setNotebookGuid:) NSString *notebookGuid;
- (void)unsetUpdateSequenceNum;
- (_Bool)updateSequenceNumIsSet;
@property(nonatomic, getter=updateSequenceNum, setter=setUpdateSequenceNum:) int updateSequenceNum;
- (void)unsetActive;
- (_Bool)activeIsSet;
@property(nonatomic, getter=active, setter=setActive:) _Bool active;
- (void)unsetDeleted;
- (_Bool)deletedIsSet;
@property(nonatomic, getter=deleted, setter=setDeleted:) long long deleted;
- (void)unsetUpdated;
- (_Bool)updatedIsSet;
@property(nonatomic, getter=updated, setter=setUpdated:) long long updated;
- (void)unsetCreated;
- (_Bool)createdIsSet;
@property(nonatomic, getter=created, setter=setCreated:) long long created;
- (void)unsetContentLength;
- (_Bool)contentLengthIsSet;
@property(nonatomic, getter=contentLength, setter=setContentLength:) int contentLength;
- (void)unsetContentHash;
- (_Bool)contentHashIsSet;
@property(retain, nonatomic, getter=contentHash, setter=setContentHash:) NSData *contentHash;
- (void)unsetContent;
- (_Bool)contentIsSet;
@property(retain, nonatomic, getter=content, setter=setContent:) NSString *content;
- (void)unsetTitle;
- (_Bool)titleIsSet;
@property(retain, nonatomic, getter=title, setter=setTitle:) NSString *title;
- (void)unsetGuid;
- (_Bool)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGuid:(id)arg1 title:(id)arg2 content:(id)arg3 contentHash:(id)arg4 contentLength:(int)arg5 created:(long long)arg6 updated:(long long)arg7 deleted:(long long)arg8 active:(_Bool)arg9 updateSequenceNum:(int)arg10 notebookGuid:(id)arg11 tagGuids:(id)arg12 resources:(id)arg13 attributes:(id)arg14 tagNames:(id)arg15;

@end
