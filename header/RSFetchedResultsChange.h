//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface RSFetchedResultsChange : NSObject
{
    NSIndexPath *__fromIndexPath;
    NSIndexPath *__toIndexPath;
    id __record;
}

@property(copy, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=__toIndexPath;
@property(copy, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=__fromIndexPath;
@property(retain, nonatomic) id record; // @synthesize record=__record;
- (void).cxx_destruct;

@end

