//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceBaseAuthConnector.h"

@class NSMutableDictionary;

@interface RKServiceMinimalReader : RKServiceBaseAuthConnector
{
    NSMutableDictionary *__items;
}

+ (_Bool)canEditItemTags;
+ (_Bool)canEditFolderTags;
+ (_Bool)canEditFolders;
+ (_Bool)canUnsubscribe;
+ (_Bool)canSubscribe;
+ (_Bool)canSync;
- (void).cxx_destruct;
- (id)deleteFolder:(id)arg1;
- (id)createFolder:(id)arg1 error:(id *)arg2;
- (id)removeStream:(id)arg1 fromFolder:(id)arg2;
- (id)moveStream:(id)arg1 toFolder:(id)arg2;
- (id)unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1 title:(id)arg2 folders:(id)arg3;
- (id)feedUrlStringForStream:(id)arg1;
- (id)opmlEntryForFeed:(id)arg1;
- (_Bool)canExportSubscriptions;
- (id)removeTagWithDictionary:(id)arg1;
- (void)removeTag:(id)arg1 forItem:(id)arg2;
- (id)addTagWithDictionary:(id)arg1;
- (void)addTag:(id)arg1 forItem:(id)arg2;
- (id)createTagWithDictionary:(id)arg1;
- (void)createTag:(id)arg1;
- (id)markWithDictionary:(id)arg1;
- (void)mark:(id)arg1 action:(id)arg2 value:(id)arg3;
- (void)setReadForItems:(id)arg1 stream:(id)arg2 markAll:(_Bool)arg3;
- (void)setStarred:(int)arg1 forItem:(id)arg2;
- (void)setUnread:(int)arg1 forItem:(id)arg2;
- (void)sync:(id)arg1;
- (id)processItemDataWithStore:(id)arg1 transaction:(id)arg2 data:(id)arg3 stream:(id)arg4 dayDateFormatter:(id)arg5;
- (void)syncDidFail:(id)arg1;
- (void)syncDidSucceed;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3 user:(id)arg4 pass:(id)arg5;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)authFormDidSubmit:(id)arg1;
- (void)setupAuthForm;
- (void)didDeleteUser;
- (void)willDeleteUser:(id)arg1;
- (id)imageNameForFolderStream:(id)arg1;
- (id)initWithService:(id)arg1 user:(id)arg2;

@end

