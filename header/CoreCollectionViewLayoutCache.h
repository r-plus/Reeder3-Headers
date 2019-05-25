//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreCollectionView, CoreCollectionViewDataSource, CoreCollectionViewLayout, CorePrimitiveArray, NSIndexPath, NSMutableArray;

@interface CoreCollectionViewLayoutCache : NSObject
{
    long long __firstVisibleSectionIndex;
    long long __lastVisibleSectionIndex;
    NSIndexPath *__firstVisibleItemIndexPath;
    NSIndexPath *__lastVisibleItemIndexPath;
    _Bool _cached;
    CDStruct_6398ef64 _list;
    double _diffY;
    CoreCollectionView *_collectionView;
    CoreCollectionViewLayout *_layout;
    CoreCollectionViewDataSource *_dataSource;
    CDStruct_a3deaebe _grid;
    CorePrimitiveArray *_heightOfSection;
    NSMutableArray *_heightOfItemAtIndexPath;
    CorePrimitiveArray *_heightOfHeaderInSection;
    CorePrimitiveArray *_heightOfFooterInSection;
    struct CGRect _bounds;
    struct UIEdgeInsets _contentPadding;
}

@property(nonatomic, getter=isCached) _Bool cached; // @synthesize cached=_cached;
@property(readonly, nonatomic) CorePrimitiveArray *heightOfFooterInSection; // @synthesize heightOfFooterInSection=_heightOfFooterInSection;
@property(readonly, nonatomic) CorePrimitiveArray *heightOfHeaderInSection; // @synthesize heightOfHeaderInSection=_heightOfHeaderInSection;
@property(readonly, nonatomic) NSMutableArray *heightOfItemAtIndexPath; // @synthesize heightOfItemAtIndexPath=_heightOfItemAtIndexPath;
@property(readonly, nonatomic) CorePrimitiveArray *heightOfSection; // @synthesize heightOfSection=_heightOfSection;
@property(readonly, nonatomic) CDStruct_6398ef64 list; // @synthesize list=_list;
@property(readonly, nonatomic) CDStruct_a3deaebe grid; // @synthesize grid=_grid;
@property(readonly, nonatomic) CoreCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CoreCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) __weak CoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double diffY; // @synthesize diffY=_diffY;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (id)lastVisibleItemIndexPath;
- (id)firstVisibleItemIndexPath;
- (long long)lastVisibleSectionIndex;
- (long long)firstVisibleSectionIndex;
- (struct CGRect)rectForSectionFooterAtIndex:(long long)arg1 sticky:(_Bool *)arg2;
- (struct CGRect)rectForSectionFooterAtIndex:(long long)arg1;
- (struct CGRect)rectForSectionHeaderAtIndex:(long long)arg1 sticky:(_Bool *)arg2;
- (struct CGRect)rectForSectionHeaderAtIndex:(long long)arg1;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (struct CGRect)rectForSectionAtIndex:(long long)arg1;
- (double)heightOfItemAtIndexPath:(id)arg1;
- (double)heightOfFooterInSection:(long long)arg1;
- (double)heightOfHeaderInSection:(long long)arg1;
- (double)heightOfSectionAtIndex:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) _Bool isListLayout;
@property(readonly, nonatomic) _Bool isGridLayout;
- (void)cacheList;
- (void)cacheGrid;
- (void)cacheIfNeeded;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2 dataSource:(id)arg3;

@end

