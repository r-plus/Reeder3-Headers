//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreCollectionViewCell.h"

@class UIButton, UISwitch;

@interface ArticleStylePanelCell : CoreCollectionViewCell
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    UISwitch *_switchButton;
}

@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)drawContentViewRect:(struct CGRect)arg1;
- (id)rightButtonImageName;
- (id)leftButtonImageName;
- (id)title;
- (void)setRepresentedObject:(id)arg1;
- (void)layoutSubviews;
- (void)tapSwitch:(id)arg1;
- (void)tapRight:(id)arg1;
- (void)tapLeft:(id)arg1;
- (id)__collectionViewDelegate;
- (void)painterDidChange;
- (id)initWithReuseIdentifier:(id)arg1;

@end

