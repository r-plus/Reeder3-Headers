//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CATextLayer, ImageViewerContentView, NSString, UIImage, UIScrollView;
@protocol ImageViewerDelegate;

@interface ImageViewer : UIView <UIScrollViewDelegate>
{
    UIScrollView *__scrollView;
    NSString *__src;
    NSString *__altText;
    UIView *__backgroundView;
    UIView *__imageBackground;
    id <ImageViewerDelegate> __delegate;
    double __lastZoom;
    struct CGRect __lastBounds;
    _Bool __shouldClose;
    CATextLayer *__textLayer;
    ImageViewerContentView *__contentView;
    UIImage *__image;
}

+ (id)viewerWithContentView:(id)arg1 inView:(id)arg2;
+ (id)viewerWithImage:(id)arg1 inView:(id)arg2;
+ (id)contentViewWithImage:(id)arg1;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=__backgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=__contentView;
@property(nonatomic) __weak id <ImageViewerDelegate> delegate; // @synthesize delegate=__delegate;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=__altText;
@property(copy, nonatomic) NSString *src; // @synthesize src=__src;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)updatePosition;
- (void)close:(_Bool)arg1;
- (void)show:(_Bool)arg1 fromFrame:(struct CGRect)arg2 coverBackground:(_Bool)arg3;
- (void)show:(_Bool)arg1 fromFrame:(struct CGRect)arg2;
- (void)show:(_Bool)arg1;
- (void)update;
@property(readonly, nonatomic) _Bool fits;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleTapOnImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupViews;
- (void)rotate:(id)arg1;
- (void)dealloc;
- (id)initWithContentView:(id)arg1 inView:(id)arg2;
- (id)initWithImage:(id)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
