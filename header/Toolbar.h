//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CRPainterFooterGroup, FilterControl, NSArray, ToolbarSeparatorView;

@interface Toolbar : UIView
{
    NSArray *__items;
    ToolbarSeparatorView *_separatorView;
    CRPainterFooterGroup *_painter;
    FilterControl *_filterControl;
    double _itemPadding;
}

+ (double)barHeight;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(nonatomic) __weak FilterControl *filterControl; // @synthesize filterControl=_filterControl;
@property(readonly, nonatomic) CRPainterFooterGroup *painter; // @synthesize painter=_painter;
@property(readonly, nonatomic) ToolbarSeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(copy, nonatomic) NSArray *items; // @synthesize items=__items;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)painterDidChange;
@property(nonatomic) _Bool hasFilterControl;
- (id)initWithContainerView:(id)arg1;

@end

