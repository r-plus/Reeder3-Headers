//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, RSDataStore;

@interface RSDataObjectList : NSObject
{
    NSMutableArray *__objects;
    NSString *__objectsString;
    RSDataStore *__store;
}

+ (id)listWithString:(id)arg1 store:(id)arg2;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)stringRepresentation;
@property(readonly, nonatomic) Class contentsEntity;
@property(readonly, nonatomic) NSMutableArray *__objects;
@property(readonly, nonatomic) NSArray *objects;
- (id)init;
- (id)initWithString:(id)arg1 store:(id)arg2;

@end

