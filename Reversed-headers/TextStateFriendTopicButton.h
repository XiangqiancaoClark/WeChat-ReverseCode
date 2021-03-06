//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class NSMutableArray, UIImageView, UILabel;

@interface TextStateFriendTopicButton : MMUIButton
{
    long long _buttonStyle;
    NSMutableArray *_headImageViews;
    UIImageView *_textStateIconView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *textStateIconView; // @synthesize textStateIconView=_textStateIconView;
@property(retain, nonatomic) NSMutableArray *headImageViews; // @synthesize headImageViews=_headImageViews;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (id)generateHeadImageView;
- (void)generateHeadImageViews;
- (void)layoutSubviews;
- (double)widthToFit:(double)arg1;
- (void)updateContent;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

