//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface OverlayPanelTextField : UITextField
{
    double __fontHeight;
    CDUnknownBlockType __onChange;
    id __selfDelegate;
}

@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=__onChange;
- (void).cxx_destruct;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

