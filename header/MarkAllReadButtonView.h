//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ToolbarButton, UIActivityIndicatorView;

@interface MarkAllReadButtonView : UIView
{
    ToolbarButton *_button;
    UIActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) ToolbarButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)painterDidChange;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

