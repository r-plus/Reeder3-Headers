//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CollectionViewCell.h"

@class CRStream, UILongPressGestureRecognizer;

@interface SubscriptionsViewCell : CollectionViewCell
{
    UILongPressGestureRecognizer *__longTap;
}

- (void).cxx_destruct;
- (void)didHighlightOrSelect:(_Bool)arg1;
- (void)drawContentViewRect:(struct CGRect)arg1;
@property(readonly, nonatomic) CRStream *item;
- (void)longTap:(id)arg1;
- (void)fetchedIcon:(id)arg1;
- (void)clearedIconCache:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

