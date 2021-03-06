//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ShareController.h"

@class ArticleView;

@interface ArticleStylePanelController : ShareController
{
    ArticleView *_articleView;
}

@property(nonatomic) __weak ArticleView *articleView; // @synthesize articleView=_articleView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemWithRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 heightForHeaderInSection:(long long)arg2 representedObject:(id)arg3;
- (id)collectionView:(id)arg1 reuseIdentifierForHeaderInSection:(long long)arg2 representedObject:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemWithRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 reuseIdentifierForCellAtIndexPath:(id)arg2 representedObject:(id)arg3;
- (double)collectionView:(id)arg1 heightForItemAtIndexPath:(id)arg2 representedObject:(id)arg3;
- (void)cell:(id)arg1 didTapSwitch:(int)arg2 on:(_Bool)arg3;
- (void)cell:(id)arg1 didTapRight:(int)arg2;
- (void)cell:(id)arg1 didTapLeft:(int)arg2;
- (void)painterDidChange:(id)arg1;
- (void)appearInView:(id)arg1;
- (void)registerListCellClasses;
- (id)createDataSource;
- (double)listWidth;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

