//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView;

@interface ModalView : UIView
{
    UIActivityIndicatorView *_activityIndicator;
}

+ (id)startModalInView:(id)arg1 fullscreen:(_Bool)arg2;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)endModal;
- (id)initWithFrame:(struct CGRect)arg1;

@end

