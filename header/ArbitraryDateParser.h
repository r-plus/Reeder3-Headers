//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSCharacterSet, NSDictionary;

@interface ArbitraryDateParser : NSObject
{
    NSDictionary *_timezoneValues;
    NSCharacterSet *_timeValueCharacterSet;
    NSCharacterSet *_europeanDateValueCharacterSet;
    NSCharacterSet *_americanDateValueCharacterSet;
    NSCharacterSet *_dotDateValueCharacterSet;
    NSCharacterSet *_iso8601CharacterSet;
    NSCharacterSet *_iso8601TimeAndTimezoneValueCharacterSet;
    NSArray *_postMeridiemTokens;
    NSDictionary *_monthTokens;
    NSArray *_dayTokens;
    NSCharacterSet *_decimalCharacterSet;
    NSCalendar *_calendar;
}

@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSCharacterSet *decimalCharacterSet; // @synthesize decimalCharacterSet=_decimalCharacterSet;
@property(retain, nonatomic) NSArray *dayTokens; // @synthesize dayTokens=_dayTokens;
@property(retain, nonatomic) NSDictionary *monthTokens; // @synthesize monthTokens=_monthTokens;
@property(retain, nonatomic) NSArray *postMeridiemTokens; // @synthesize postMeridiemTokens=_postMeridiemTokens;
@property(retain, nonatomic) NSCharacterSet *iso8601TimeAndTimezoneValueCharacterSet; // @synthesize iso8601TimeAndTimezoneValueCharacterSet=_iso8601TimeAndTimezoneValueCharacterSet;
@property(retain, nonatomic) NSCharacterSet *iso8601CharacterSet; // @synthesize iso8601CharacterSet=_iso8601CharacterSet;
@property(retain, nonatomic) NSCharacterSet *dotDateValueCharacterSet; // @synthesize dotDateValueCharacterSet=_dotDateValueCharacterSet;
@property(retain, nonatomic) NSCharacterSet *americanDateValueCharacterSet; // @synthesize americanDateValueCharacterSet=_americanDateValueCharacterSet;
@property(retain, nonatomic) NSCharacterSet *europeanDateValueCharacterSet; // @synthesize europeanDateValueCharacterSet=_europeanDateValueCharacterSet;
@property(retain, nonatomic) NSCharacterSet *timeValueCharacterSet; // @synthesize timeValueCharacterSet=_timeValueCharacterSet;
@property(retain, nonatomic) NSDictionary *timezoneValues; // @synthesize timezoneValues=_timezoneValues;
- (void).cxx_destruct;
- (id)dateFromString:(id)arg1;
- (double)timeIntervalSince1970ForTokens:(id)arg1;
- (long long)typeForToken:(id)arg1;
- (double)dateIntervalSince1970ForDotDateString:(id)arg1;
- (double)dateIntervalSince1970ForAmericanDateString:(id)arg1;
- (double)dateIntervalSince1970ForEuropeanDateString:(id)arg1;
- (double)dateIntervalSince1970ForEuropeanDateString:(id)arg1 separator:(id)arg2 inverseNotation:(_Bool)arg3;
- (double)timeIntervalForTimeValue:(id)arg1;
- (double)timeIntervalForTimezoneValue:(id)arg1;
- (double)timeIntervalForTimezoneString:(id)arg1;
- (id)init;

@end
