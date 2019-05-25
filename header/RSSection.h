//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableOrderedSet, NSString, RSSectionList;

@interface RSSection : NSObject <NSCopying>
{
    id __name;
    NSMutableOrderedSet *__objects;
    long long __idxInsert;
    long long __idxUpdate;
    RSSectionList *__list;
    _Bool __needsSort;
}

@property(readonly, nonatomic) __weak RSSectionList *list; // @synthesize list=__list;
- (void).cxx_destruct;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)insertObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfObjects;
- (void)endUpdates;
- (void)beginUpdates;
@property(readonly, nonatomic) NSString *name;
- (void)__setList:(id)arg1;
@property(readonly, nonatomic) id object;
@property(readonly, nonatomic) NSArray *ascendingObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionList:(id)arg1 name:(id)arg2;

@end

