//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface RSQueue : NSObject
{
    NSString *__name;
    _Bool __cancelled;
    long long __suspended;
    NSMutableArray *__operations;
    NSMutableArray *__prependedOperations;
    long long __maxConcurrentOperationCount;
    NSObject<OS_dispatch_queue> *__queue;
    long long __concurrentOperationCount;
}

+ (id)queueWithName:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatch_queue; // @synthesize dispatch_queue=__queue;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=__cancelled;
@property(readonly, nonatomic) long long concurrentOperationCount; // @synthesize concurrentOperationCount=__concurrentOperationCount;
@property(nonatomic) long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=__maxConcurrentOperationCount;
- (void).cxx_destruct;
- (void)prependAsyncBarrier:(CDUnknownBlockType)arg1;
- (void)prependSyncBarrier:(CDUnknownBlockType)arg1;
- (void)prependAsync:(CDUnknownBlockType)arg1;
- (void)prependSync:(CDUnknownBlockType)arg1;
- (void)addAsyncBarrier:(CDUnknownBlockType)arg1;
- (void)addSyncBarrier:(CDUnknownBlockType)arg1;
- (void)addAsync:(CDUnknownBlockType)arg1;
- (void)addSync:(CDUnknownBlockType)arg1;
- (void)__operationDone;
- (void)__dequeue;
- (void)resume;
@property(readonly, nonatomic) _Bool suspended;
- (void)suspend;
- (void)dealloc;
- (_Bool)allowsWeakReference;
- (id)initWithName:(id)arg1;

@end
