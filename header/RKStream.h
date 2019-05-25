//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RSDataObject.h"

@class NSString, RKStreamList, RKUser;

@interface RKStream : RSDataObject
{
    NSString *__oid;
    id __user;
    NSString *__title;
    NSString *__htmlTitle;
    NSString *__link;
    int __unreadCount;
    int __starredCount;
    int __itemCount;
    _Bool __listed;
    _Bool __isFolder;
    _Bool __isSmartStream;
    int __index;
    NSString *__data1;
    NSString *__data2;
    RKStreamList *__folders;
    RKStreamList *__streams;
}

+ (void)refreshCountsForStore:(id)arg1 withChangeSet:(id)arg2;
+ (id)primaryKey;
+ (_Bool)caches;
+ (_Bool)isStreamExpanded:(id)arg1;
+ (_Bool)setExpanded:(_Bool)arg1 forStream:(id)arg2;
+ (void)saveExpandedFolders;
+ (void)setupExpandedFolderSupport;
- (void).cxx_destruct;
- (long long)caseInsensitiveCompare:(id)arg1;
@property(readonly, nonatomic) _Bool hasStarredItems;
@property(readonly, nonatomic) _Bool hasUnreadItems;
@property(readonly, nonatomic) int currentItemCount;
@property(readonly, nonatomic) int currentStarredCount;
@property(readonly, nonatomic) int currentUnreadCount;
- (void)__updStarredCountForItem:(id)arg1 withChangeSet:(id)arg2;
- (void)__updUnreadCountForItem:(id)arg1 withChangeSet:(id)arg2;
- (void)__updStreamZeroCountWithChangeSet:(id)arg1;
- (void)refreshCountsWithChangeSet:(id)arg1;
- (id)description;
- (void)removeFromFolder:(id)arg1;
- (void)addToFolder:(id)arg1;
@property(nonatomic, getter=isExpanded) _Bool expanded;
- (id)identifierForExpandedFolderSet;

// Remaining properties
@property(copy) NSString *data1; // @dynamic data1;
@property(copy) NSString *data2; // @dynamic data2;
@property(retain) RKStreamList *folders; // @dynamic folders;
@property(copy) NSString *htmlTitle; // @dynamic htmlTitle;
@property int index; // @dynamic index;
@property _Bool isFolder; // @dynamic isFolder;
@property _Bool isSmartStream; // @dynamic isSmartStream;
@property(readonly) int itemCount; // @dynamic itemCount;
@property(copy) NSString *link; // @dynamic link;
@property _Bool listed; // @dynamic listed;
@property(copy) NSString *oid; // @dynamic oid;
@property(readonly) int starredCount; // @dynamic starredCount;
@property(retain) RKStreamList *streams; // @dynamic streams;
@property(copy) NSString *title; // @dynamic title;
@property(readonly) int unreadCount; // @dynamic unreadCount;
@property(retain) RKUser *user; // @dynamic user;

@end

