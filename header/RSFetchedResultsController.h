//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, NSString, RSDataStore, RSFetchRequest, RSSectionList;
@protocol OS_dispatch_queue, RSFetchedResultsControllerDelegate;

@interface RSFetchedResultsController : NSObject
{
    RSFetchRequest *__fetchRequest;
    RSDataStore *__recordStore;
    NSString *__sectionNameKeyPath;
    id <RSFetchedResultsControllerDelegate> __delegate;
    RSSectionList *__sections;
    NSObject<OS_dispatch_queue> *__processQueue;
    NSMutableArray *__changes;
    _Bool __loading;
    int __lock;
    _Bool __processing;
    double __backgroundFetchDelay;
}

@property(readonly, nonatomic) RSSectionList *sections; // @synthesize sections=__sections;
@property(nonatomic) __weak id <RSFetchedResultsControllerDelegate> delegate; // @synthesize delegate=__delegate;
@property(readonly, nonatomic) NSString *sectionNameKeyPath; // @synthesize sectionNameKeyPath=__sectionNameKeyPath;
@property(readonly, nonatomic) RSDataStore *recordStore; // @synthesize recordStore=__recordStore;
@property(readonly, nonatomic) RSFetchRequest *fetchRequest; // @synthesize fetchRequest=__fetchRequest;
@property(readonly, nonatomic) _Bool processing; // @synthesize processing=__processing;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=__loading;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldCancelFetch;
- (id)nextObject:(id)arg1;
- (id)previousObject:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSSet *fetchedObjects;
- (_Bool)performFetch:(id *)arg1 background:(_Bool)arg2 cacheOnly:(_Bool)arg3 firstBatchLimit:(long long)arg4;
- (_Bool)performFetch:(id *)arg1 background:(_Bool)arg2 cacheOnly:(_Bool)arg3;
- (_Bool)performFetch:(id *)arg1 background:(_Bool)arg2;
- (_Bool)performFetch:(id *)arg1 cacheOnly:(_Bool)arg2;
- (_Bool)performFetch:(id *)arg1;
- (void)reorderWithSectionKeyNamePath:(id)arg1 sortDescriptors:(id)arg2;
- (void)waitForProcessQueue:(CDUnknownBlockType)arg1;
- (void)waitForProcessQueue;
- (void)__didProcessChanges:(id)arg1;
- (void)__processChanges:(id)arg1;
- (void)lock:(_Bool)arg1;
- (void)storeDidChange:(id)arg1;
- (void)processChangeSet:(id)arg1;
- (void)dealloc;
- (_Bool)allowsWeakReference;
- (void)delayInitialBackgroundFetch:(double)arg1;
- (id)initWithFetchRequest:(id)arg1 recordStore:(id)arg2 sectionNameKeyPath:(id)arg3;

@end
