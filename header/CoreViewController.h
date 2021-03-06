//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreViewControllerBase.h"

@class CoreFrameView, UIView;

@interface CoreViewController : CoreViewControllerBase
{
    double _contentViewPaddingTop;
    double _contentViewPaddingBottom;
}

@property(nonatomic) double contentViewPaddingBottom; // @synthesize contentViewPaddingBottom=_contentViewPaddingBottom;
@property(nonatomic) double contentViewPaddingTop; // @synthesize contentViewPaddingTop=_contentViewPaddingTop;
@property(readonly, nonatomic) UIView *contentView;
- (void)setOverlayOpacity:(double)arg1;
@property(readonly, nonatomic) CoreFrameView *frameView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)loadContentView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

