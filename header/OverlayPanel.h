//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreAnimator, NSDictionary, NSMutableArray, NSString, OverlayPanelTextField, OverlayPanelView, UIView, UIWindow;

@interface OverlayPanel : NSObject
{
    UIWindow *__window;
    _Bool __isModal;
    id __strongSelf;
    CoreAnimator *__animator;
    NSMutableArray *__views;
    int _verticalAlignment;
    CDUnknownBlockType _autocloseHandler;
    OverlayPanelTextField *_inputView;
    UIView *_parentView;
    UIWindow *_root;
    UIView *_modalBackground;
    NSMutableArray *_buttons;
    NSDictionary *_cancelButton;
    NSString *_title;
    NSString *_message;
    double _width;
    OverlayPanelView *_panel;
    UIView *_contentView;
    NSMutableArray *_buttonViews;
}

+ (id)panelWithWidth:(double)arg1;
@property(readonly, nonatomic) NSMutableArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) OverlayPanelView *panel; // @synthesize panel=_panel;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDictionary *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) UIView *modalBackground; // @synthesize modalBackground=_modalBackground;
@property(readonly, nonatomic) UIWindow *root; // @synthesize root=_root;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) OverlayPanelTextField *inputView; // @synthesize inputView=_inputView;
@property(copy, nonatomic) CDUnknownBlockType autocloseHandler; // @synthesize autocloseHandler=_autocloseHandler;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void).cxx_destruct;
- (void)clean;
- (void)close;
- (void)appearSheet;
- (void)appearSheetOnPlace;
- (void)appearAlert;
- (void)performAutoclose;
- (void)autoclose:(id)arg1;
- (void)showInView:(id)arg1;
- (void)layoutPanel;
- (void)createPanel;
- (void)show;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double contentHeight;
- (void)addView:(id)arg1;
- (void)setCancelButton:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButton:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setInputPlaceholder:(id)arg1 value:(id)arg2;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setFrameAndTranform;
- (void)setFrameAndTranformAnimated;
- (void)updateRotation:(id)arg1;
- (void)dealloc;
- (id)initWithWidth:(double)arg1;

@end

