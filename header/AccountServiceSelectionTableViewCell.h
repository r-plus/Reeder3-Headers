//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TableViewCell.h"

@class RKService;

@interface AccountServiceSelectionTableViewCell : TableViewCell
{
    RKService *_service;
}

@property(retain, nonatomic) RKService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)drawContentView:(id)arg1 rect:(struct CGRect)arg2;
- (id)text;
- (id)title;
- (id)image;

@end
