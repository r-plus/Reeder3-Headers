//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OARequestParameter : NSObject
{
    NSString *name;
    NSString *value;
}

+ (id)requestParameter:(id)arg1 value:(id)arg2;
@property(copy) NSString *value; // @synthesize value;
@property(copy) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (_Bool)isEqualToRequestParameter:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)URLEncodedNameValuePair;
- (id)URLEncodedValue;
- (id)URLEncodedName;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

