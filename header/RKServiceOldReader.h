//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RKServiceBaseAuthConnector.h"

@interface RKServiceOldReader : RKServiceBaseAuthConnector
{
}

+ (_Bool)canEditFolderTags;
+ (_Bool)canEditFolders;
+ (_Bool)canUnsubscribe;
+ (_Bool)canSubscribe;
+ (_Bool)canSync;
- (id)deleteFolder:(id)arg1;
- (id)createFolder:(id)arg1 error:(id *)arg2;
- (id)unsubscribe:(id)arg1;
- (id)removeStream:(id)arg1 fromFolder:(id)arg2;
- (id)moveStream:(id)arg1 toFolder:(id)arg2;
- (id)subscribe:(id)arg1 title:(id)arg2 folders:(id)arg3;
- (id)feedUrlStringForStream:(id)arg1;
- (id)opmlEntryForFeed:(id)arg1;
- (id)unstarWithDictionary:(id)arg1;
- (id)starWithDictionary:(id)arg1;
- (id)readWithDictionary:(id)arg1;
- (id)unreadWithDictionary:(id)arg1;
- (void)setStarred:(int)arg1 forItem:(id)arg2;
- (void)setUnread:(int)arg1 forItem:(id)arg2;
- (void)setReadForItems:(id)arg1 stream:(id)arg2 markAll:(_Bool)arg3;
- (void)sync:(id)arg1;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3 user:(id)arg4 pass:(id)arg5;
- (id)requestWithTarget:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (_Bool)verifyAuthorization:(id *)arg1;
- (void)fetchUserInfo;
- (void)authFormDidSubmit:(id)arg1;
- (void)setupAuthForm;
- (id)initWithService:(id)arg1 user:(id)arg2;

@end

