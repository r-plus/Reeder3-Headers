//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString, NSXMLParser, RKOPMLItem;

@interface RKOPMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *__parser;
    NSString *__path;
    NSMutableArray *__items;
    RKOPMLItem *__parent;
    id __target;
    SEL __selector;
    RKOPMLItem *__root;
    long long __depth;
    NSError *_error;
}

+ (id)parserWithFileAtPath:(id)arg1;
+ (id)itemsAtPath:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
- (void)parse;
- (id)initWithFileAtPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

