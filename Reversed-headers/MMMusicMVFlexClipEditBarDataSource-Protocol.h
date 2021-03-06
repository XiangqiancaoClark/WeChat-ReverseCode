//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicMVFlexClipEditBar, NSMutableArray;

@protocol MMMusicMVFlexClipEditBarDataSource <NSObject>
- (double)mvFlexClipEditBarWidthPerSecond:(MMMusicMVFlexClipEditBar *)arg1;
- (void)thumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(void (^)(UIImage *))arg3;
- (_Bool)canDragSideWithIndex:(unsigned long long)arg1;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 maxDurationInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 offsetInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 durationInSecondWithItemIndex:(unsigned long long)arg2;
- (_Bool)mvFlexClipEditBarHasPlaceholderItem:(MMMusicMVFlexClipEditBar *)arg1;
- (long long)numberOfItems;

@optional
- (NSMutableArray *)mvFlexClipEditBarGetGhostIndexArr:(MMMusicMVFlexClipEditBar *)arg1;
- (_Bool)mvFlexClipEditBarSupportGhostMaterial:(MMMusicMVFlexClipEditBar *)arg1;
- (void)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 didTransitionCellClickedWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 isModifyTransitionWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (_Bool)mvFlexClipEditBarSupportTransitionSelection:(MMMusicMVFlexClipEditBar *)arg1;
- (_Bool)mvFlexClipEditBar:(MMMusicMVFlexClipEditBar *)arg1 shouldShowSelectedCellProgressLineWithIndex:(unsigned long long)arg2;
@end

