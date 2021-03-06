//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AchievementInfo, NSMutableArray;

@interface WCFinderGameTitleAuthView : UIView
{
    _Bool _displayCovered;
    NSMutableArray *_authIconViews;
    AchievementInfo *_achievementInfo;
}

+ (_Bool)shouldDispalyWithAchievementInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AchievementInfo *achievementInfo; // @synthesize achievementInfo=_achievementInfo;
@property(retain, nonatomic) NSMutableArray *authIconViews; // @synthesize authIconViews=_authIconViews;
@property(nonatomic) _Bool displayCovered; // @synthesize displayCovered=_displayCovered;
- (void)onClickGameAchievement:(id)arg1;
- (void)reLayoutElements;
- (void)setupWithAchievementInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

