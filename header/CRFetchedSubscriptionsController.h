//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RSFetchedResultsControllerDelegate-Protocol.h"

@class CRStream, CoreCollectionViewDataSource, NSString, NSTimer, RKStream, RKUser, RSFetchedResultsController;
@protocol CRFetchedSubscriptionsControllerDelegate;

@interface CRFetchedSubscriptionsController : NSObject <RSFetchedResultsControllerDelegate>
{
    RSFetchedResultsController *__fetcher;
    NSTimer *__refreshTimer;
    _Bool __needsRefresh;
    CoreCollectionViewDataSource *__dataSource;
    _Bool _restoring;
    _Bool _includeHotItem;
    _Bool _prioritizeNext;
    _Bool _togglingFolder;
    _Bool _changingFilter;
    id <CRFetchedSubscriptionsControllerDelegate> _delegate;
    RKUser *_user;
    RKStream *_stream;
    CRStream *_selectedObject;
}

+ (_Bool)isStreamExpanded:(id)arg1;
+ (_Bool)setExpanded:(_Bool)arg1 forStream:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) CRStream *selectedObject; // @synthesize selectedObject=_selectedObject;
@property(nonatomic) _Bool changingFilter; // @synthesize changingFilter=_changingFilter;
@property(nonatomic) _Bool togglingFolder; // @synthesize togglingFolder=_togglingFolder;
@property(nonatomic) _Bool prioritizeNext; // @synthesize prioritizeNext=_prioritizeNext;
@property(readonly, nonatomic) RKStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) RKUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool includeHotItem; // @synthesize includeHotItem=_includeHotItem;
@property(nonatomic) __weak id <CRFetchedSubscriptionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=__needsRefresh;
@property(readonly, nonatomic) _Bool restoring; // @synthesize restoring=_restoring;
@property(readonly, nonatomic) CoreCollectionViewDataSource *dataSource; // @synthesize dataSource=__dataSource;
- (void).cxx_destruct;
- (void)didCollapseFolder:(id)arg1;
- (void)didExpandFolder:(id)arg1;
- (void)setupExpandedFolderSupport;
- (void)filter:(_Bool)arg1;
- (void)forceFilter;
- (void)controller:(id)arg1 didChangeContent:(id)arg2;
- (void)controllerDidChangeContent:(id)arg1;
@property(readonly, nonatomic) RSFetchedResultsController *fetcher;
- (void)clearFetcher;
- (void)setUser:(id)arg1 stream:(id)arg2;
- (void)setUser:(id)arg1 includeHotItems:(_Bool)arg2;
- (void)restoreUser:(id)arg1 stream:(id)arg2;
- (void)restoreUser:(id)arg1 includeHotItems:(_Bool)arg2;
- (void)syncHotItemsDidChange:(id)arg1;
- (void)didChangeSortSubscriptions:(id)arg1;
- (void)stateDidChangeFilter:(id)arg1;
- (void)tick:(id)arg1;
- (void)done;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

