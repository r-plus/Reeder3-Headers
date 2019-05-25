//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceLocalConnector.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface RKServiceMailArticle : RKServiceLocalConnector <MFMailComposeViewControllerDelegate>
{
}

+ (_Bool)canHandleObject:(id)arg1;
+ (_Bool)canShare;
- (void)share:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

