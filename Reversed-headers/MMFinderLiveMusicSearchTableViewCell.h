//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveMusicSearchDataItem, MMUIButton, MMUILabel;

@interface MMFinderLiveMusicSearchTableViewCell : UITableViewCell
{
    MMFinderLiveMusicSearchDataItem *_searchMusicDataItem;
    CDUnknownBlockType _musicAddedCallback;
    MMUILabel *_musicDesciptionLabel;
    MMUIButton *_addMusicButton;
    double _contentWidth;
}

+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) MMUIButton *addMusicButton; // @synthesize addMusicButton=_addMusicButton;
@property(retain, nonatomic) MMUILabel *musicDesciptionLabel; // @synthesize musicDesciptionLabel=_musicDesciptionLabel;
@property(copy, nonatomic) CDUnknownBlockType musicAddedCallback; // @synthesize musicAddedCallback=_musicAddedCallback;
@property(retain, nonatomic) MMFinderLiveMusicSearchDataItem *searchMusicDataItem; // @synthesize searchMusicDataItem=_searchMusicDataItem;
- (void)addButtonAction;
- (void)updateMusicAddedState;
- (void)updateMusicDesciptionLabelWidth;
- (void)updateMusicDescription;
- (void)layoutAddMusicButton;
- (void)layoutMusicDesciptionLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

