//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RKServiceconnectorOptional-Protocol.h"
#import "RSFormDelegate-Protocol.h"
#import "RSServiceResponseDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, RKService, RKServiceConnectorUser, RKUser, RSForm, RSReadWriteQueue;
@protocol RKServiceConnectorDelegate, RKServiceConnectorUIDelegate;

@interface RKServiceConnector : NSObject <RSFormDelegate, RSServiceResponseDelegate, RKServiceconnectorOptional>
{
    NSString *__serviceKey;
    RSReadWriteQueue *__queue;
    CDUnknownBlockType __authorizeHandler;
    int __state;
    RKServiceConnectorUser *__userinfo;
    RKUser *__user;
    RKService *__service;
    _Bool __syncing;
    CDUnknownBlockType __syncHandler;
    id <RKServiceConnectorDelegate> __delegate;
    id <RKServiceConnectorUIDelegate> __uiDelegate;
    NSMutableDictionary *__configuration;
    CDUnknownBlockType __sharingHandler;
    RSForm *__authForm;
    RSForm *__shareForm;
    _Bool __authFormSetupDone;
    _Bool __shareFormSetupDone;
    NSString *__userData1;
    NSString *__userData2;
    _Bool __syncDidFail;
    _Bool _cancelledAuthorization;
    NSString *_titleForToggleRead;
    NSString *_titleForRead;
    NSString *_titleForUnread;
    NSString *_titleForDidRead;
    NSString *_titleForDidUnread;
    NSString *_titleForToggleStarred;
    NSString *_titleForStar;
    NSString *_titleForUnstar;
    NSString *_titleForDidStar;
    NSString *_titleForDidUnstar;
}

+ (_Bool)canHandleObject:(id)arg1;
+ (id)errorWithCode:(int)arg1 title:(id)arg2 description:(id)arg3 options:(id)arg4;
+ (_Bool)canDeleteItems;
+ (_Bool)canImportOPML;
+ (_Bool)canRenameSubscriptions;
+ (id)oidFromTagName:(id)arg1;
+ (_Bool)hasMutlipleItemTags;
+ (_Bool)canEditItemTags;
+ (_Bool)canDeleteFolders;
+ (_Bool)canEditFolderTags;
+ (_Bool)canEditFolders;
+ (_Bool)canUnsubscribe;
+ (_Bool)canSubscribe;
+ (_Bool)unsupported;
+ (_Bool)canShare;
+ (_Bool)canSync;
+ (_Bool)needsUser;
+ (_Bool)supportsMultipleUsers;
+ (_Bool)isReadLaterService;
+ (id)remoteConfiguration;
+ (void)setRemoteConfiguration:(id)arg1;
@property(readonly, nonatomic) _Bool cancelledAuthorization; // @synthesize cancelledAuthorization=_cancelledAuthorization;
@property(readonly, nonatomic) NSString *titleForDidUnstar; // @synthesize titleForDidUnstar=_titleForDidUnstar;
@property(readonly, nonatomic) NSString *titleForDidStar; // @synthesize titleForDidStar=_titleForDidStar;
@property(readonly, nonatomic) NSString *titleForUnstar; // @synthesize titleForUnstar=_titleForUnstar;
@property(readonly, nonatomic) NSString *titleForStar; // @synthesize titleForStar=_titleForStar;
@property(readonly, nonatomic) NSString *titleForToggleStarred; // @synthesize titleForToggleStarred=_titleForToggleStarred;
@property(readonly, nonatomic) NSString *titleForDidUnread; // @synthesize titleForDidUnread=_titleForDidUnread;
@property(readonly, nonatomic) NSString *titleForDidRead; // @synthesize titleForDidRead=_titleForDidRead;
@property(readonly, nonatomic) NSString *titleForUnread; // @synthesize titleForUnread=_titleForUnread;
@property(readonly, nonatomic) NSString *titleForRead; // @synthesize titleForRead=_titleForRead;
@property(readonly, nonatomic) NSString *titleForToggleRead; // @synthesize titleForToggleRead=_titleForToggleRead;
@property(retain, nonatomic) RSForm *shareForm; // @synthesize shareForm=__shareForm;
@property(retain, nonatomic) RSForm *authForm; // @synthesize authForm=__authForm;
@property(readonly, nonatomic) RSReadWriteQueue *queue; // @synthesize queue=__queue;
@property(readonly, nonatomic) NSString *serviceKey; // @synthesize serviceKey=__serviceKey;
@property(retain, nonatomic) RKServiceConnectorUser *userinfo; // @synthesize userinfo=__userinfo;
@property(nonatomic) __weak RKService *service; // @synthesize service=__service;
@property(nonatomic) __weak RKUser *user; // @synthesize user=__user;
@property(nonatomic) __weak id <RKServiceConnectorUIDelegate> uiDelegate; // @synthesize uiDelegate=__uiDelegate;
@property(nonatomic) __weak id <RKServiceConnectorDelegate> delegate; // @synthesize delegate=__delegate;
- (void).cxx_destruct;
- (void)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)flashBezelOnShare;
- (void)prepareShareForm:(id)arg1 forObject:(id)arg2;
- (id)shareFormForObject:(id)arg1;
- (void)shareForm:(id)arg1 didPickTextOption:(id)arg2;
- (void)shareForm:(id)arg1 cellDidChange:(id)arg2;
- (void)shareFormTextDidChange:(id)arg1;
- (void)shareFormDidCancel:(id)arg1;
- (void)shareFormDidSubmit:(id)arg1;
- (void)didFailToShareWithErrorCode:(int)arg1 title:(id)arg2 description:(id)arg3 options:(id)arg4;
- (void)didFailToShare:(id)arg1;
- (void)didShare;
- (void)share:(id)arg1;
- (void)share:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteItem:(id)arg1;
- (void)removeTag:(id)arg1 forItem:(id)arg2;
- (void)addTag:(id)arg1 forItem:(id)arg2;
- (void)createTag:(id)arg1;
- (void)setReadForItems:(id)arg1 stream:(id)arg2 markAll:(_Bool)arg3;
- (void)setReadForItems:(id)arg1 stream:(id)arg2;
- (void)setStarred:(int)arg1 forItem:(id)arg2;
- (void)setUnread:(int)arg1 forItem:(id)arg2;
- (void)sync:(id)arg1;
@property(readonly, nonatomic) _Bool shouldCancelSyncing;
- (void)__syncCache;
- (void)syncCache;
- (double)dateForStarItemOperation:(id)arg1;
- (void)cancelSyncing;
- (void)syncDidFailWithErrorCode:(int)arg1 title:(id)arg2 description:(id)arg3 options:(id)arg4;
- (void)syncDidFail:(id)arg1;
- (void)syncDidSucceed;
- (void)syncDidStart:(id)arg1;
- (void)syncDidStart;
- (_Bool)syncing:(id)arg1;
- (_Bool)syncing;
- (_Bool)canQueueSync;
@property(readonly, nonatomic) NSString *stringSyncing;
@property(readonly, nonatomic) NSString *stringNotSyncedYet;
- (void)sync:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addToSync:(id)arg1;
- (void)didDeleteFolder:(id)arg1 withStreams:(id)arg2;
- (id)deleteFolder:(id)arg1;
- (id)createFolder:(id)arg1 error:(id *)arg2;
- (id)unsubscribe:(id)arg1;
- (id)removeStream:(id)arg1 fromFolder:(id)arg2;
- (id)moveStream:(id)arg1 toFolder:(id)arg2;
- (id)renameSubscription:(id)arg1 withTitle:(id)arg2;
- (void)importFromOPML:(id)arg1;
- (id)subscribe:(id)arg1 title:(id)arg2 folders:(id)arg3;
- (void)didImportStarredItems:(id)arg1;
- (void)didImportSubscriptions:(id)arg1;
- (void)didSubscribe;
- (id)feedUrlForStream:(id)arg1;
- (id)feedUrlStringForStream:(id)arg1;
- (_Bool)hasSubscriptionWithUrl:(id)arg1;
- (id)opmlEntryForFeed:(id)arg1;
- (_Bool)canExportSubscriptions;
- (_Bool)checkUserWithUserInfo;
- (void)fetchUserInfo;
- (_Bool)recoverFromError:(id)arg1;
- (_Bool)prepare:(id *)arg1;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)authorize;
- (_Bool)authNeedsSafari;
- (_Bool)authNeedsWebView;
- (void)authForm:(id)arg1 didPickTextOption:(id)arg2;
- (void)authForm:(id)arg1 cellDidChange:(id)arg2;
- (void)authFormDidCancel:(id)arg1;
- (void)authFormDidSubmit:(id)arg1;
- (void)endModal:(id)arg1;
- (void)startModal;
- (void)verifyAuthorizationOnCurrentThread;
- (void)verifyAuthorization;
- (id)didFailToAuthorizeWithErrorCode:(int)arg1 title:(id)arg2 description:(id)arg3 options:(id)arg4 endModal:(_Bool)arg5;
- (id)didFailToAuthorizeWithErrorCode:(int)arg1 title:(id)arg2 description:(id)arg3 options:(id)arg4;
- (void)didFailToAuthorize:(id)arg1 endModal:(_Bool)arg2;
- (void)didFailToAuthorize:(id)arg1;
- (void)postprocessDidAuthorize;
- (void)didAuthorize;
- (void)willAuthorize;
- (void)authorize:(CDUnknownBlockType)arg1;
- (void)cancelAuthorization;
@property(readonly, nonatomic) _Bool authorizing;
@property(readonly, nonatomic) _Bool authorized;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (id)executeWithQueue:(id)arg1 target:(id)arg2 parameters:(id)arg3 method:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)write:(id)arg1 parameters:(id)arg2 method:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)write:(id)arg1 parameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)write:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (id)write:(id)arg1 parameters:(id)arg2;
- (id)write:(id)arg1;
- (void)read:(id)arg1 parameters:(id)arg2 method:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)read:(id)arg1 parameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)read:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)read:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (id)read:(id)arg1 parameters:(id)arg2;
- (id)read:(id)arg1;
- (void)setupShareForm;
- (void)setupAuthForm;
- (void)form:(id)arg1 didPickTextOption:(id)arg2;
- (void)form:(id)arg1 cellDidChange:(id)arg2;
- (void)formTextDidChange:(id)arg1;
- (void)formDidSubmit:(id)arg1;
- (void)formDidCancel:(id)arg1;
- (void)__setupShareFormIfNeeded;
- (void)__setupAuthFormIfNeeded;
- (id)sortDescriptorForFolder:(id)arg1 ofUser:(id)arg2;
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) NSString *name;
- (void)handleUrlEvent:(id)arg1;
- (void)__handleUrlEvent:(id)arg1;
- (id)handleUrlsWithPrefix;
- (id)configurationValueForKey:(id)arg1;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *configuration;
@property(readonly, nonatomic) _Bool isNew;
- (void)backupStarredItems:(id)arg1;
- (void)backupStreams:(id)arg1;
- (void)didDeleteUser;
- (void)willDeleteUser:(id)arg1;
- (id)imageNameForFolderStream:(id)arg1;
@property(readonly, nonatomic) NSString *serviceSheetSaveTitle;
- (void)dealloc;
- (id)initWithService:(id)arg1 user:(id)arg2;
- (void)didProcessItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

