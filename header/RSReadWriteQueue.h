//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RSQueue;
@protocol OS_dispatch_queue;

@interface RSReadWriteQueue : NSObject
{
    NSString *__name;
    RSQueue *__reader;
    RSQueue *__writer;
    NSObject<OS_dispatch_queue> *__controlQueue;
}

+ (id)queueWithName:(id)arg1;
@property(readonly, nonatomic) RSQueue *writer; // @synthesize writer=__writer;
@property(readonly, nonatomic) RSQueue *reader; // @synthesize reader=__reader;
@property(readonly, nonatomic) NSString *name; // @synthesize name=__name;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic) _Bool suspended;
@property(nonatomic) _Bool cancelled;
- (void)dealloc;
- (_Bool)allowsWeakReference;
- (id)initWithName:(id)arg1;

@end

