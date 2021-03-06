//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreAnimator, CoreViewAnimatorGroup, UIView;

@interface CoreViewAnimator : NSObject
{
    CoreViewAnimatorGroup *__group;
    _Bool _bounces;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_view;
    double _tightness;
    double _dampiness;
    CoreAnimator *_animator;
    struct CGRect _fromFrame;
    struct CGRect _toFrame;
}

+ (id)animatorWithView:(id)arg1;
@property(readonly, nonatomic) CoreAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) double dampiness; // @synthesize dampiness=_dampiness;
@property(nonatomic) double tightness; // @synthesize tightness=_tightness;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)__cancelled;
- (void)__finished;
- (void)commit;
- (void)cancel;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isDone) _Bool done;
- (void)setAnimatorGroup:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

