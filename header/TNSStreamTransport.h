//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTransport-Protocol.h"

@class NSInputStream, NSOutputStream, NSString;

@interface TNSStreamTransport : NSObject <TTransport>
{
    NSInputStream *mInput;
    NSOutputStream *mOutput;
}

- (void)flush;
- (void)write:(char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)initWithInputStream:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
