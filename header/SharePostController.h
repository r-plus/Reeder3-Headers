//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "RKServiceConnectorUIDelegate-Protocol.h"

@class FormViewController, NSString, RKService, RKServiceConnector, RKShareObject, RKUser, RSForm;
@protocol SharePostControllerDelegate;

@interface SharePostController : UINavigationController <RKServiceConnectorUIDelegate>
{
    RKServiceConnector *__connector;
    RKUser *__user;
    RKService *__service;
    RKShareObject *__object;
    id <SharePostControllerDelegate> __sharingDelegate;
    FormViewController *__formViewController;
    SharePostController *__strongSelf;
    RSForm *__postForm;
    RSForm *__authForm;
    _Bool __suppressBezelFlash;
}

+ (id)controller;
@property(nonatomic) _Bool suppressBezelFlash; // @synthesize suppressBezelFlash=__suppressBezelFlash;
@property(retain, nonatomic) RKShareObject *object; // @synthesize object=__object;
@property(retain, nonatomic) RKServiceConnector *connector; // @synthesize connector=__connector;
@property(retain, nonatomic) RKUser *user; // @synthesize user=__user;
@property(retain, nonatomic) RKService *service; // @synthesize service=__service;
@property(nonatomic) __weak id <SharePostControllerDelegate> sharingDelegate; // @synthesize sharingDelegate=__sharingDelegate;
- (void).cxx_destruct;
- (void)serviceConnectorDidEndModalSession:(id)arg1 withError:(id)arg2;
- (void)serviceConnectorWillStartModalSession:(id)arg1;
- (_Bool)serviceConnector:(id)arg1 shouldOpenUrl:(id)arg2;
- (_Bool)serviceConnectorWillSaveNewUser:(id)arg1;
- (void)done;
- (void)postForm;
- (void)performPost;
- (void)cancel:(id)arg1;
- (void)authIsDone:(id)arg1;
- (void)authForm;
- (void)go;
- (void)dealloc;
- (void)flashBezel;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
