//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRPainterGroup.h"

@class CRPainterCollectionGroup, CRPainterHeaderGroup, UIColor;

@interface CRPainterForm : CRPainterGroup
{
    UIColor *_color;
    CRPainterHeaderGroup *_header;
    CRPainterCollectionGroup *_list;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) CRPainterCollectionGroup *list; // @synthesize list=_list;
@property(retain, nonatomic) CRPainterHeaderGroup *header; // @synthesize header=_header;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;

@end

