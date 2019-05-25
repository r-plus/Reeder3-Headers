//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ArticleView, NSString, NSURLRequest, UIScrollView;

@protocol ArticleViewDelegate <NSObject>
- (void)articleView:(ArticleView *)arg1 scrollViewWillBeginDecelerating:(UIScrollView *)arg2;
- (void)articleView:(ArticleView *)arg1 shareSelectionWithSender:(id)arg2;
- (void)articleView:(ArticleView *)arg1 presentCallOutForUrl:(NSString *)arg2;
- (void)articleView:(ArticleView *)arg1 didMoveToWindow:(id)arg2;
- (void)articleView:(ArticleView *)arg1 didScroll:(UIScrollView *)arg2;
- (void)articleViewDidTapImage:(ArticleView *)arg1;
- (_Bool)articleView:(ArticleView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
- (void)articleViewDidLoad:(ArticleView *)arg1;
@end

