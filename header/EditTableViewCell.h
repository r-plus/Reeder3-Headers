//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TableViewCell.h"

@class RKUser;

@interface EditTableViewCell : TableViewCell
{
    RKUser *_user;
}

@property(retain, nonatomic) RKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)drawContentView:(id)arg1 rect:(struct CGRect)arg2;
- (id)text;
- (id)title;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

