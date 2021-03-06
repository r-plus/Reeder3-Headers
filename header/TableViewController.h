//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreViewController.h"

#import "ScrollHeaderViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TableHeaderView, UITableView;

@interface TableViewController : CoreViewController <UITableViewDataSource, UITableViewDelegate, ScrollHeaderViewDelegate>
{
    _Bool __scrolling;
    double __statusbarOffset;
    _Bool _smallerHeader;
    TableHeaderView *_headerView;
}

@property(nonatomic) _Bool smallerHeader; // @synthesize smallerHeader=_smallerHeader;
@property(readonly, nonatomic) TableHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)__titleForSectionHeader:(long long)arg1;
- (void)scrollHeaderViewDidTriggerPull:(id)arg1;
- (id)scrollHeaderViewScrollView:(id)arg1;
- (id)scrollHeaderViewPullTitle:(id)arg1;
- (_Bool)scrollHeaderViewCanPull:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)updateInsetForKeyBoard:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutHeader;
- (void)layoutViewForStatusbar;
- (void)viewWillLayoutSubviews;
- (void)didTapHeader:(id)arg1;
@property(readonly, nonatomic) _Bool hasNavigationHeaderViewOnly;
@property(readonly, nonatomic) _Bool hasHeaderView;
@property(readonly, nonatomic) UITableView *tableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)loadContentView;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

