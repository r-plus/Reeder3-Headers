//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ArticleViewDelegate-Protocol.h"

@class ArticleView, NSString, RKItem, RootViewController;

@interface ArticlePreviewController : UIViewController <ArticleViewDelegate>
{
    ArticleView *__articleView;
    RKItem *__itemToLoad;
    RKItem *_item;
    RootViewController *_rootViewController;
}

@property(nonatomic) __weak RootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) RKItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)articleView:(id)arg1 scrollViewWillBeginDecelerating:(id)arg2;
- (void)articleView:(id)arg1 shareSelectionWithSender:(id)arg2;
- (void)articleView:(id)arg1 presentCallOutForUrl:(id)arg2;
- (void)articleView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)articleView:(id)arg1 didScroll:(id)arg2;
- (void)articleViewDidTapImage:(id)arg1;
- (_Bool)articleView:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)articleViewDidLoad:(id)arg1;
- (void)load:(id)arg1;
- (id)previewActionItems;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

