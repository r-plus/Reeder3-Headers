//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CollectionViewCell.h"

@class RKUser;

@interface UsersViewCell : CollectionViewCell
{
}

- (void)didHighlightOrSelect:(_Bool)arg1;
- (void)drawContentViewRect:(struct CGRect)arg1;
- (void)displayTitleDidChange:(id)arg1;
- (void)didChangeSyncStatusText:(id)arg1;
@property(readonly, nonatomic) RKUser *user;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end
