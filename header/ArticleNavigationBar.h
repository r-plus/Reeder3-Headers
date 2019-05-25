//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MobilizerButton, UIButton;

@interface ArticleNavigationBar : UIView
{
    UIButton *_backButton;
    UIButton *_styleButton;
    MobilizerButton *_mobilizerButton;
}

@property(readonly, nonatomic) MobilizerButton *mobilizerButton; // @synthesize mobilizerButton=_mobilizerButton;
@property(readonly, nonatomic) UIButton *styleButton; // @synthesize styleButton=_styleButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)painterDidChange;
- (void)layoutSubviews;
- (id)initWithFrameView:(id)arg1;

@end
