//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRPainterStatefulItem.h"

@class UIColor;

@interface CRPainterStatefulColorItem : CRPainterStatefulItem
{
    UIColor *_normal;
    UIColor *_highlighted;
    UIColor *_selected;
    UIColor *_disabled;
}

@property(retain, nonatomic) UIColor *disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIColor *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *normal; // @synthesize normal=_normal;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasDisabled;
@property(readonly, nonatomic) _Bool hasSelected;
@property(readonly, nonatomic) _Bool hasHighlighted;
@property(readonly, nonatomic) _Bool hasNormal;

@end

