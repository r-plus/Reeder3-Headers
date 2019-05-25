//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol TTransport;

@protocol TProtocol <NSObject>
- (void)writeListEnd;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeMapEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeBinary:(NSData *)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeString:(NSString *)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeI16:(short)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeI32:(int)arg1;
- (void)writeFieldBeginWithName:(NSString *)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)writeStructEnd;
- (void)writeStructBeginWithName:(NSString *)arg1;
- (void)writeMessageEnd;
- (void)writeMessageBeginWithName:(NSString *)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)readListEnd;
- (void)readListBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readSetEnd;
- (void)readSetBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readMapEnd;
- (void)readMapBeginReturningKeyType:(int *)arg1 valueType:(int *)arg2 size:(int *)arg3;
- (NSData *)readBinary;
- (double)readDouble;
- (long long)readI64;
- (int)readI32;
- (short)readI16;
- (unsigned char)readByte;
- (_Bool)readBool;
- (NSString *)readString;
- (void)readFieldEnd;
- (void)readFieldBeginReturningName:(id *)arg1 type:(int *)arg2 fieldID:(int *)arg3;
- (void)readStructEnd;
- (void)readStructBeginReturningName:(id *)arg1;
- (void)readMessageEnd;
- (void)readMessageBeginReturningName:(id *)arg1 type:(int *)arg2 sequenceID:(int *)arg3;
- (id <TTransport>)transport;
@end

