//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseWebView.h"

@class UIColor, UIView;

@interface ReederWebView : BaseWebView
{
    _Bool _superRespondsToDidScroll;
    _Bool _showsProgressIndicator;
    UIColor *_borderColor;
    UIColor *_progressIndicatorColor;
    UIView *_borderTop;
    UIView *_borderBottom;
}

@property(readonly, nonatomic) __weak UIView *borderBottom; // @synthesize borderBottom=_borderBottom;
@property(readonly, nonatomic) __weak UIView *borderTop; // @synthesize borderTop=_borderTop;
@property(nonatomic) _Bool showsProgressIndicator; // @synthesize showsProgressIndicator=_showsProgressIndicator;
@property(copy, nonatomic) UIColor *progressIndicatorColor; // @synthesize progressIndicatorColor=_progressIndicatorColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sizeDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)showsProgressIndicator:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

