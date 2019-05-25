//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EDAMNoteStore-Protocol.h"

@class NSString;
@protocol TProtocol;

@interface EDAMNoteStoreClient : NSObject <EDAMNoteStore>
{
    id <TProtocol> inProtocol;
    id <TProtocol> outProtocol;
}

- (id)authenticateToSharedNote:(id)arg1:(id)arg2;
- (id)recv_authenticateToSharedNote;
- (void)send_authenticateToSharedNote:(id)arg1:(id)arg2;
- (void)stopSharingNote:(id)arg1:(id)arg2;
- (void)recv_stopSharingNote;
- (void)send_stopSharingNote:(id)arg1:(id)arg2;
- (id)shareNote:(id)arg1:(id)arg2;
- (id)recv_shareNote;
- (void)send_shareNote:(id)arg1:(id)arg2;
- (void)emailNote:(id)arg1:(id)arg2;
- (void)recv_emailNote;
- (void)send_emailNote:(id)arg1:(id)arg2;
- (id)getSharedNotebookByAuth:(id)arg1;
- (id)recv_getSharedNotebookByAuth;
- (void)send_getSharedNotebookByAuth:(id)arg1;
- (id)authenticateToSharedNotebook:(id)arg1:(id)arg2;
- (id)recv_authenticateToSharedNotebook;
- (void)send_authenticateToSharedNotebook:(id)arg1:(id)arg2;
- (int)expungeLinkedNotebook:(id)arg1:(id)arg2;
- (int)recv_expungeLinkedNotebook;
- (void)send_expungeLinkedNotebook:(id)arg1:(id)arg2;
- (id)listLinkedNotebooks:(id)arg1;
- (id)recv_listLinkedNotebooks;
- (void)send_listLinkedNotebooks:(id)arg1;
- (int)updateLinkedNotebook:(id)arg1:(id)arg2;
- (int)recv_updateLinkedNotebook;
- (void)send_updateLinkedNotebook:(id)arg1:(id)arg2;
- (id)createLinkedNotebook:(id)arg1:(id)arg2;
- (id)recv_createLinkedNotebook;
- (void)send_createLinkedNotebook:(id)arg1:(id)arg2;
- (int)expungeSharedNotebooks:(id)arg1:(id)arg2;
- (int)recv_expungeSharedNotebooks;
- (void)send_expungeSharedNotebooks:(id)arg1:(id)arg2;
- (id)listSharedNotebooks:(id)arg1;
- (id)recv_listSharedNotebooks;
- (void)send_listSharedNotebooks:(id)arg1;
- (int)sendMessageToSharedNotebookMembers:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (int)recv_sendMessageToSharedNotebookMembers;
- (void)send_sendMessageToSharedNotebookMembers:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)createSharedNotebook:(id)arg1:(id)arg2;
- (id)recv_createSharedNotebook;
- (void)send_createSharedNotebook:(id)arg1:(id)arg2;
- (id)getPublicNotebook:(int)arg1:(id)arg2;
- (id)recv_getPublicNotebook;
- (void)send_getPublicNotebook:(int)arg1:(id)arg2;
- (id)getRandomAd:(id)arg1:(id)arg2;
- (id)recv_getRandomAd;
- (void)send_getRandomAd:(id)arg1:(id)arg2;
- (id)getAds:(id)arg1:(id)arg2;
- (id)recv_getAds;
- (void)send_getAds:(id)arg1:(id)arg2;
- (long long)getAccountSize:(id)arg1;
- (long long)recv_getAccountSize;
- (void)send_getAccountSize:(id)arg1;
- (id)getResourceAttributes:(id)arg1:(id)arg2;
- (id)recv_getResourceAttributes;
- (void)send_getResourceAttributes:(id)arg1:(id)arg2;
- (id)getResourceAlternateData:(id)arg1:(id)arg2;
- (id)recv_getResourceAlternateData;
- (void)send_getResourceAlternateData:(id)arg1:(id)arg2;
- (id)getResourceRecognition:(id)arg1:(id)arg2;
- (id)recv_getResourceRecognition;
- (void)send_getResourceRecognition:(id)arg1:(id)arg2;
- (id)getResourceByHash:(id)arg1:(id)arg2:(id)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)recv_getResourceByHash;
- (void)send_getResourceByHash:(id)arg1:(id)arg2:(id)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)getResourceData:(id)arg1:(id)arg2;
- (id)recv_getResourceData;
- (void)send_getResourceData:(id)arg1:(id)arg2;
- (int)updateResource:(id)arg1:(id)arg2;
- (int)recv_updateResource;
- (void)send_updateResource:(id)arg1:(id)arg2;
- (int)unsetResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (int)recv_unsetResourceApplicationDataEntry;
- (void)send_unsetResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (int)setResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (int)recv_setResourceApplicationDataEntry;
- (void)send_setResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)getResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (id)recv_getResourceApplicationDataEntry;
- (void)send_getResourceApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (id)getResourceApplicationData:(id)arg1:(id)arg2;
- (id)recv_getResourceApplicationData;
- (void)send_getResourceApplicationData:(id)arg1:(id)arg2;
- (id)getResource:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)recv_getResource;
- (void)send_getResource:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)getNoteVersion:(id)arg1:(id)arg2:(int)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)recv_getNoteVersion;
- (void)send_getNoteVersion:(id)arg1:(id)arg2:(int)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)listNoteVersions:(id)arg1:(id)arg2;
- (id)recv_listNoteVersions;
- (void)send_listNoteVersions:(id)arg1:(id)arg2;
- (id)copyNote:(id)arg1:(id)arg2:(id)arg3;
- (id)recv_copyNote;
- (void)send_copyNote:(id)arg1:(id)arg2:(id)arg3;
- (int)expungeInactiveNotes:(id)arg1;
- (int)recv_expungeInactiveNotes;
- (void)send_expungeInactiveNotes:(id)arg1;
- (int)expungeNotes:(id)arg1:(id)arg2;
- (int)recv_expungeNotes;
- (void)send_expungeNotes:(id)arg1:(id)arg2;
- (int)expungeNote:(id)arg1:(id)arg2;
- (int)recv_expungeNote;
- (void)send_expungeNote:(id)arg1:(id)arg2;
- (int)deleteNote:(id)arg1:(id)arg2;
- (int)recv_deleteNote;
- (void)send_deleteNote:(id)arg1:(id)arg2;
- (id)updateNote:(id)arg1:(id)arg2;
- (id)recv_updateNote;
- (void)send_updateNote:(id)arg1:(id)arg2;
- (id)createNote:(id)arg1:(id)arg2;
- (id)recv_createNote;
- (void)send_createNote:(id)arg1:(id)arg2;
- (id)getNoteTagNames:(id)arg1:(id)arg2;
- (id)recv_getNoteTagNames;
- (void)send_getNoteTagNames:(id)arg1:(id)arg2;
- (id)getResourceSearchText:(id)arg1:(id)arg2;
- (id)recv_getResourceSearchText;
- (void)send_getResourceSearchText:(id)arg1:(id)arg2;
- (id)getNoteSearchText:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4;
- (id)recv_getNoteSearchText;
- (void)send_getNoteSearchText:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4;
- (id)getNoteContent:(id)arg1:(id)arg2;
- (id)recv_getNoteContent;
- (void)send_getNoteContent:(id)arg1:(id)arg2;
- (int)unsetNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (int)recv_unsetNoteApplicationDataEntry;
- (void)send_unsetNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (int)setNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (int)recv_setNoteApplicationDataEntry;
- (void)send_setNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)getNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (id)recv_getNoteApplicationDataEntry;
- (void)send_getNoteApplicationDataEntry:(id)arg1:(id)arg2:(id)arg3;
- (id)getNoteApplicationData:(id)arg1:(id)arg2;
- (id)recv_getNoteApplicationData;
- (void)send_getNoteApplicationData:(id)arg1:(id)arg2;
- (id)getNote:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)recv_getNote;
- (void)send_getNote:(id)arg1:(id)arg2:(_Bool)arg3:(_Bool)arg4:(_Bool)arg5:(_Bool)arg6;
- (id)findNoteCounts:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)recv_findNoteCounts;
- (void)send_findNoteCounts:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)findNotesMetadata:(id)arg1:(id)arg2:(int)arg3:(int)arg4:(id)arg5;
- (id)recv_findNotesMetadata;
- (void)send_findNotesMetadata:(id)arg1:(id)arg2:(int)arg3:(int)arg4:(id)arg5;
- (int)findNoteOffset:(id)arg1:(id)arg2:(id)arg3;
- (int)recv_findNoteOffset;
- (void)send_findNoteOffset:(id)arg1:(id)arg2:(id)arg3;
- (id)findNotes:(id)arg1:(id)arg2:(int)arg3:(int)arg4;
- (id)recv_findNotes;
- (void)send_findNotes:(id)arg1:(id)arg2:(int)arg3:(int)arg4;
- (int)expungeSearch:(id)arg1:(id)arg2;
- (int)recv_expungeSearch;
- (void)send_expungeSearch:(id)arg1:(id)arg2;
- (int)updateSearch:(id)arg1:(id)arg2;
- (int)recv_updateSearch;
- (void)send_updateSearch:(id)arg1:(id)arg2;
- (id)createSearch:(id)arg1:(id)arg2;
- (id)recv_createSearch;
- (void)send_createSearch:(id)arg1:(id)arg2;
- (id)getSearch:(id)arg1:(id)arg2;
- (id)recv_getSearch;
- (void)send_getSearch:(id)arg1:(id)arg2;
- (id)listSearches:(id)arg1;
- (id)recv_listSearches;
- (void)send_listSearches:(id)arg1;
- (int)expungeTag:(id)arg1:(id)arg2;
- (int)recv_expungeTag;
- (void)send_expungeTag:(id)arg1:(id)arg2;
- (void)untagAll:(id)arg1:(id)arg2;
- (void)recv_untagAll;
- (void)send_untagAll:(id)arg1:(id)arg2;
- (int)updateTag:(id)arg1:(id)arg2;
- (int)recv_updateTag;
- (void)send_updateTag:(id)arg1:(id)arg2;
- (id)createTag:(id)arg1:(id)arg2;
- (id)recv_createTag;
- (void)send_createTag:(id)arg1:(id)arg2;
- (id)getTag:(id)arg1:(id)arg2;
- (id)recv_getTag;
- (void)send_getTag:(id)arg1:(id)arg2;
- (id)listTagsByNotebook:(id)arg1:(id)arg2;
- (id)recv_listTagsByNotebook;
- (void)send_listTagsByNotebook:(id)arg1:(id)arg2;
- (id)listTags:(id)arg1;
- (id)recv_listTags;
- (void)send_listTags:(id)arg1;
- (int)expungeNotebook:(id)arg1:(id)arg2;
- (int)recv_expungeNotebook;
- (void)send_expungeNotebook:(id)arg1:(id)arg2;
- (int)updateNotebook:(id)arg1:(id)arg2;
- (int)recv_updateNotebook;
- (void)send_updateNotebook:(id)arg1:(id)arg2;
- (id)createNotebook:(id)arg1:(id)arg2;
- (id)recv_createNotebook;
- (void)send_createNotebook:(id)arg1:(id)arg2;
- (id)getDefaultNotebook:(id)arg1;
- (id)recv_getDefaultNotebook;
- (void)send_getDefaultNotebook:(id)arg1;
- (id)getNotebook:(id)arg1:(id)arg2;
- (id)recv_getNotebook;
- (void)send_getNotebook:(id)arg1:(id)arg2;
- (id)listNotebooks:(id)arg1;
- (id)recv_listNotebooks;
- (void)send_listNotebooks:(id)arg1;
- (id)getLinkedNotebookSyncChunk:(id)arg1:(id)arg2:(int)arg3:(int)arg4:(_Bool)arg5;
- (id)recv_getLinkedNotebookSyncChunk;
- (void)send_getLinkedNotebookSyncChunk:(id)arg1:(id)arg2:(int)arg3:(int)arg4:(_Bool)arg5;
- (id)getLinkedNotebookSyncState:(id)arg1:(id)arg2;
- (id)recv_getLinkedNotebookSyncState;
- (void)send_getLinkedNotebookSyncState:(id)arg1:(id)arg2;
- (id)getFilteredSyncChunk:(id)arg1:(int)arg2:(int)arg3:(id)arg4;
- (id)recv_getFilteredSyncChunk;
- (void)send_getFilteredSyncChunk:(id)arg1:(int)arg2:(int)arg3:(id)arg4;
- (id)getSyncChunk:(id)arg1:(int)arg2:(int)arg3:(_Bool)arg4;
- (id)recv_getSyncChunk;
- (void)send_getSyncChunk:(id)arg1:(int)arg2:(int)arg3:(_Bool)arg4;
- (id)getSyncStateWithMetrics:(id)arg1:(id)arg2;
- (id)recv_getSyncStateWithMetrics;
- (void)send_getSyncStateWithMetrics:(id)arg1:(id)arg2;
- (id)getSyncState:(id)arg1;
- (id)recv_getSyncState;
- (void)send_getSyncState:(id)arg1;
- (void)dealloc;
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;
- (id)initWithProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

