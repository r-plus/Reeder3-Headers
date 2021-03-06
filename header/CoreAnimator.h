//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSRunLoop;
@protocol OS_dispatch_semaphore;

@interface CoreAnimator : NSObject
{
    id __strongSelf;
    NSRunLoop *__runLoop;
    NSObject<OS_dispatch_semaphore> *__semaphore;
    _Bool __updateTarget;
    struct CGPoint __newTarget;
    double __frameRate;
    _Bool _elasticDamping;
    double _linearDampFactor;
    unsigned long long _type;
    unsigned long long _state;
    double _bounciness;
    double _dampiness;
    double _tightness;
    double _minBounce;
    double _decelerationRate;
    CDUnknownBlockType _snapHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancelHandler;
    double _unclampedProgress;
    double _progress;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _tickHandler;
    double _t;
    double _dt;
    struct CGPoint _velocity;
    struct CGSize _elasticDampingRange;
    struct CGPoint _offset;
    struct CGRect _boundaries;
    CDStruct_848f5a37 _position;
}

+ (id)translateAnimatorWithStartPosition:(struct CGPoint)arg1 targetPosition:(struct CGPoint)arg2 tickHandler:(CDUnknownBlockType)arg3;
+ (id)dragAnimatorWithStartPosition:(struct CGPoint)arg1 tickHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) CDStruct_848f5a37 position; // @synthesize position=_position;
@property(readonly, nonatomic) double dt; // @synthesize dt=_dt;
@property(nonatomic) double t; // @synthesize t=_t;
@property(readonly, nonatomic) CDUnknownBlockType tickHandler; // @synthesize tickHandler=_tickHandler;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) double unclampedProgress; // @synthesize unclampedProgress=_unclampedProgress;
@property(nonatomic) struct CGSize elasticDampingRange; // @synthesize elasticDampingRange=_elasticDampingRange;
@property(nonatomic) _Bool elasticDamping; // @synthesize elasticDamping=_elasticDamping;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType snapHandler; // @synthesize snapHandler=_snapHandler;
@property(nonatomic) struct CGRect boundaries; // @synthesize boundaries=_boundaries;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) double minBounce; // @synthesize minBounce=_minBounce;
@property(nonatomic) double tightness; // @synthesize tightness=_tightness;
@property(nonatomic) double dampiness; // @synthesize dampiness=_dampiness;
@property(nonatomic) double bounciness; // @synthesize bounciness=_bounciness;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double linearDampFactor; // @synthesize linearDampFactor=_linearDampFactor;
- (void).cxx_destruct;
- (void)setPaused:(_Bool)arg1;
- (_Bool)updateTargetPosition:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint targetPosition;
- (void)__executePrepare;
- (void)__executeWithDependingAnimator:(id)arg1;
- (void)__execute;
- (void)executeImmediately;
- (void)execute;
- (void)executeWithDependingAnimator:(id)arg1;
@property(readonly, nonatomic) double durationToTarget;
- (void)tickTranslate:(id)arg1;
- (void)__updateBounce;
- (void)__updatePull;
- (void)dragDidEnd;
- (void)relativeDragX:(double)arg1 dragY:(double)arg2;
- (void)absoluteDragX:(double)arg1 dragY:(double)arg2;
- (void)tickDrag:(id)arg1;
- (struct CGPoint)__clampToBoundaries:(struct CGPoint)arg1 dx:(double)arg2 dy:(double)arg3;
- (struct CGPoint)__point:(struct CGPoint)arg1 dx:(double)arg2 dy:(double)arg3 toY:(double)arg4;
- (struct CGPoint)__point:(struct CGPoint)arg1 dx:(double)arg2 dy:(double)arg3 toX:(double)arg4;
@property(readonly, nonatomic) struct CGPoint currentFixedPosition;
@property(readonly, nonatomic) struct CGPoint currentPosition;
@property(readonly, nonatomic, getter=isDone) _Bool done;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic, getter=isTranslating) _Bool translating;
@property(readonly, nonatomic, getter=isSnapping) _Bool snapping;
@property(readonly, nonatomic, getter=isBouncing) _Bool bouncing;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, nonatomic, getter=isPulling) _Bool pulling;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
- (void)setCriticalDampiness;
- (void)dealloc;
- (void)__doneClean;
- (void)__done;
- (void)cancel;
- (void)setCompletionAndCancelHandler:(CDUnknownBlockType)arg1;
- (void)__createDisplayLink;
- (void)__createDisplayLinkIfNeeded;
- (void)prepareDisplayLink;
- (id)init;
- (void)__setDefaults;
- (void)setTimestamp:(id)arg1;
@property(readonly, nonatomic) double frameRate;

@end

