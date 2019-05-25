//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RSPredicate;

@interface RSFetchRequest : NSObject
{
    Class __entity;
    RSPredicate *__predicate;
    NSArray *__sortDescriptors;
    unsigned long long __fetchLimit;
    unsigned long long __fetchOffset;
    unsigned long long __fetchBatchSize;
}

+ (id)fetchRequestWithEntity:(Class)arg1;
@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=__fetchBatchSize;
@property(nonatomic) unsigned long long fetchOffset; // @synthesize fetchOffset=__fetchOffset;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=__fetchLimit;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=__sortDescriptors;
@property(retain, nonatomic) RSPredicate *predicate; // @synthesize predicate=__predicate;
@property(readonly, nonatomic) Class entity; // @synthesize entity=__entity;
- (void).cxx_destruct;
- (id)initWithEntity:(Class)arg1;

@end
