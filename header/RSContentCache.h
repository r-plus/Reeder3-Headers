//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RSContentCache : NSObject
{
    NSString *__path;
    NSString *__html;
    _Bool __directoryOK;
}

+ (id)cacheWithPath:(id)arg1 html:(id)arg2;
- (void).cxx_destruct;
- (id)cachedHtml;
- (int)cache;
- (id)saveImageWithSrc:(id)arg1 data:(id)arg2 extension:(id)arg3;
- (id)initWithPath:(id)arg1 html:(id)arg2;

@end
