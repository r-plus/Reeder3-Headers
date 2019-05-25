//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RSDataStoring-Protocol.h"

@class NSMutableArray, NSString, RSDataChangeSet, RSDataStore;

@interface RSDataStoreTransaction : NSObject <RSDataStoring>
{
    RSDataStore *__store;
    NSMutableArray *__operations;
    RSDataChangeSet *__changes;
}

+ (id)begin:(id)arg1;
@property(readonly, nonatomic) RSDataChangeSet *changes; // @synthesize changes=__changes;
- (void).cxx_destruct;
- (void)destroy:(Class)arg1 where:(id)arg2;
- (void)update:(Class)arg1 set:(id)arg2 where:(id)arg3 postChangesBeforeCommit:(_Bool)arg4;
- (void)update:(Class)arg1 set:(id)arg2 where:(id)arg3;
- (void)destroy:(id)arg1;
- (void)save:(id)arg1;
- (void)execute:(id)arg1;
- (void)add:(CDUnknownBlockType)arg1;
- (void)commitPrioritized:(CDUnknownBlockType)arg1;
- (void)commit:(CDUnknownBlockType)arg1 wait:(_Bool)arg2;
- (void)commit:(CDUnknownBlockType)arg1;
- (void)commit;
- (void)commitOnCurrentThread;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

