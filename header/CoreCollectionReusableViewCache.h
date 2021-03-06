//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface CoreCollectionReusableViewCache : NSObject
{
    NSMutableSet *__reusableViews;
    NSMutableSet *__usedViews;
    Class _viewClass;
    NSString *_reuseIdentifier;
    long long _zPosition;
}

+ (id)cacheWithReuseIdentifier:(id)arg1 viewClass:(Class)arg2;
@property(nonatomic) long long zPosition; // @synthesize zPosition=_zPosition;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
- (void).cxx_destruct;
- (void)queueForReuse:(id)arg1;
- (id)dequeueViewForIndexPath:(id)arg1 representedObject:(id)arg2;
@property(readonly, nonatomic) NSArray *reusableViews;
@property(readonly, nonatomic) NSArray *usedViews;
- (id)initWithReuseIdentifier:(id)arg1 viewClass:(Class)arg2;

@end

