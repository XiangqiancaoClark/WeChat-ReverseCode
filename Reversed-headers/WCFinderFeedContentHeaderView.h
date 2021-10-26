//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WCFinderFeedContentHeaderActionDelegate;

@interface WCFinderFeedContentHeaderView : UIView
{
    _Bool _shouldMoreBtnHidden;
    _Bool _shouldShowFollowTips;
    id <WCFinderFeedContentHeaderActionDelegate> _delegate;
    unsigned long long _type;
}

+ (double)headerHeightForType:(unsigned long long)arg1;
+ (id)headerWithType:(unsigned long long)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldShowFollowTips; // @synthesize shouldShowFollowTips=_shouldShowFollowTips;
@property(nonatomic) _Bool shouldMoreBtnHidden; // @synthesize shouldMoreBtnHidden=_shouldMoreBtnHidden;
@property(nonatomic) __weak id <WCFinderFeedContentHeaderActionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)followAuthorBtnCanShow;
- (void)setShowFollowBtn:(_Bool)arg1;
- (void)changeHeaderPositionStyle:(_Bool)arg1;
- (void)resetReuseState;
- (void)reloadHeaderWithContact:(id)arg1;
- (void)updateHeaderContentWithContact:(id)arg1 showLiveState:(_Bool)arg2;

@end
