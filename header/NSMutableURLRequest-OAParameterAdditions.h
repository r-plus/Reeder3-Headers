//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@class NSArray;

@interface NSMutableURLRequest (OAParameterAdditions)
- (void)attachFileWithName:(id)arg1 filename:(id)arg2 contentType:(id)arg3 data:(id)arg4;
- (void)setHTTPBodyWithString:(id)arg1;
@property(retain, nonatomic) NSArray *parameters;
- (_Bool)isMultipart;
@end

