//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class MMLivePivotViewController;

@interface MMLivePivotCollectionView : UICollectionView
{
    _Bool _forbidScroll;
    MMLivePivotViewController *_controller;
}

+ (_Bool)isPivotEnableToScroll;
- (void).cxx_destruct;
@property(nonatomic) _Bool forbidScroll; // @synthesize forbidScroll=_forbidScroll;
@property(nonatomic) __weak MMLivePivotViewController *controller; // @synthesize controller=_controller;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)adjustedContentInsetDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

