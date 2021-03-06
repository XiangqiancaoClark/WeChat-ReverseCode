//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMBrandHeadImageView, MMUILabel, NSString, UIImageView;

@interface WSVideoSourceView : UIView
{
    UIImageView *_sourceArrow;
    _Bool _needAccessoryView;
    MMBrandHeadImageView *_headView;
    MMUILabel *_sourceLabel;
    NSString *_headUrl;
    NSString *_text;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool needAccessoryView; // @synthesize needAccessoryView=_needAccessoryView;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) MMUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) MMBrandHeadImageView *headView; // @synthesize headView=_headView;
- (void)layoutSubviews;
- (void)layoutSize;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

