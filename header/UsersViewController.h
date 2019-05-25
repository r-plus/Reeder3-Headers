//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CollectionViewController.h"

#import "AccountServiceSelectionViewControllerDelegate-Protocol.h"
#import "CRFetchedUsersControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CRFetchedUsersController, NSString, ToolbarItem;

@interface UsersViewController : CollectionViewController <CRFetchedUsersControllerDelegate, AccountServiceSelectionViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool __disableSelection;
    ToolbarItem *__issuesButtonItem;
    CRFetchedUsersController *_fetcher;
}

@property(readonly, nonatomic) CRFetchedUsersController *fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;
- (void)updateApplicationBadge;
- (void)updateApplicationBadge:(id)arg1;
- (void)slidingController:(id)arg1 didSnapToViewController:(id)arg2;
- (void)slidingController:(id)arg1 willSnapToViewController:(id)arg2;
- (void)scrollHeaderViewDidTriggerPull:(id)arg1;
- (id)scrollHeaderViewPullTitle:(id)arg1;
- (_Bool)scrollHeaderViewCanPull:(id)arg1;
- (void)settings:(id)arg1;
- (void)importOPML:(id)arg1;
- (void)accountController:(id)arg1 didImportOPML:(id)arg2;
- (void)addAccount:(id)arg1;
- (void)controller:(id)arg1 didChangeContent:(id)arg2;
- (void)controllerDidPerformInitialFetch:(id)arg1;
- (void)__checkEmpty;
- (void)collectionView:(id)arg1 didSelectItemWithRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemWithRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 reuseIdentifierForCellAtIndexPath:(id)arg2 representedObject:(id)arg3;
- (void)didTapHeader:(id)arg1;
- (double)widthForInterfaceOrientation:(long long)arg1;
- (void)sync:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)painterDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleToolbarNavigationPan:(id)arg1;
- (void)collectionViewDidReload:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updatePadding;
- (Class)cellClass;
- (double)rowHeight;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)issuesManagerDidUpdate:(id)arg1;
- (void)restore;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

