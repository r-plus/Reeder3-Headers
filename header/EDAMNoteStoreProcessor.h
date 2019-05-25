//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TProcessor-Protocol.h"

@class NSDictionary, NSString;
@protocol EDAMNoteStore;

@interface EDAMNoteStoreProcessor : NSObject <TProcessor>
{
    id <EDAMNoteStore> mService;
    NSDictionary *mMethodMap;
}

- (void)dealloc;
- (void)process_authenticateToSharedNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_stopSharingNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_shareNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_emailNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getSharedNotebookByAuth_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_authenticateToSharedNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeLinkedNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listLinkedNotebooks_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateLinkedNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createLinkedNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeSharedNotebooks_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listSharedNotebooks_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_sendMessageToSharedNotebookMembers_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createSharedNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getPublicNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getRandomAd_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getAds_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getAccountSize_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceAttributes_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceAlternateData_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceRecognition_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceByHash_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceData_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateResource_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_unsetResourceApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_setResourceApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceApplicationData_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResource_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteVersion_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listNoteVersions_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_copyNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeInactiveNotes_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeNotes_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_deleteNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteTagNames_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getResourceSearchText_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteSearchText_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteContent_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_unsetNoteApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_setNoteApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteApplicationDataEntry_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNoteApplicationData_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNote_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_findNoteCounts_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_findNotesMetadata_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_findNoteOffset_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_findNotes_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeSearch_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateSearch_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createSearch_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getSearch_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listSearches_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeTag_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_untagAll_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateTag_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createTag_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getTag_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listTagsByNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listTags_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_expungeNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_updateNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_createNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getDefaultNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getNotebook_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_listNotebooks_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getLinkedNotebookSyncChunk_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getLinkedNotebookSyncState_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getFilteredSyncChunk_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getSyncChunk_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getSyncStateWithMetrics_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (void)process_getSyncState_withSequenceID:(int)arg1 inProtocol:(id)arg2 outProtocol:(id)arg3;
- (_Bool)processOnInputProtocol:(id)arg1 outputProtocol:(id)arg2;
- (id)service;
- (id)initWithNoteStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

