//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class RKService;

@interface SharePanelButton : UIButton
{
    RKService *_service;
}

@property(retain, nonatomic) RKService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

