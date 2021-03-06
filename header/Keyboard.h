//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface Keyboard : NSObject
{
    _Bool _visible;
    double _duration;
    struct CGRect _frame;
}

+ (id)sharedKeyboard;
+ (void)initialize;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)didHideKeyboard:(id)arg1;
- (void)willHideKeyboard:(id)arg1;
- (void)didShowKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (double)insetForView:(id)arg1;
- (struct CGRect)frameForView:(id)arg1;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)dealloc;
- (id)init;

@end

