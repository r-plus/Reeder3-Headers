//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TableViewController.h"

@class NSArray, NSMutableArray, SettingsViewCellSelect;

@interface SettingsSelectViewController : TableViewController
{
    SettingsViewCellSelect *__parentCell;
    NSMutableArray *__cells;
}

@property(retain, nonatomic) SettingsViewCellSelect *parentCell; // @synthesize parentCell=__parentCell;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) NSArray *cells;
- (void)pop:(id)arg1;
- (_Bool)hasNavigationHeaderViewOnly;
- (void)viewDidLoad;

@end

