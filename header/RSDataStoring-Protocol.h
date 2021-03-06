//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, RSDataObject;

@protocol RSDataStoring <NSObject>
- (void)destroy:(Class)arg1 where:(id)arg2;
- (void)update:(Class)arg1 set:(NSDictionary *)arg2 where:(id)arg3 postChangesBeforeCommit:(_Bool)arg4;
- (void)update:(Class)arg1 set:(NSDictionary *)arg2 where:(id)arg3;
- (void)destroy:(RSDataObject *)arg1;
- (void)save:(RSDataObject *)arg1;
- (void)execute:(NSString *)arg1;
@end

