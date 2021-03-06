//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface RSSettings : NSObject
{
    NSMutableArray *__sections;
    NSString *__prefix;
}

+ (id)settingsWithArray:(id)arg1;
+ (id)settingsWithJSON:(id)arg1;
+ (id)settingsWithFileNamed:(id)arg1 fallback:(id)arg2;
+ (id)settingsWithFileNamed:(id)arg1;
+ (id)named:(id)arg1;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=__prefix;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=__sections;
- (void).cxx_destruct;
- (void)setCustomDictionary:(id)arg1 forKey:(id)arg2;
- (id)customDictionaryForKey:(id)arg1;
- (void)setStringValue:(id)arg1 forKey:(id)arg2;
- (void)setIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1;
- (_Bool)boolValueForKey:(id)arg1;
- (id)keyPathForKey:(id)arg1;
- (void)destroy;
- (id)itemForKey:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (void)setDefaultsIfNeeded;
- (id)description;
- (id)initWithArray:(id)arg1;

@end

