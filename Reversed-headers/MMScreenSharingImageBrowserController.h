//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class ImageScrollView, NSArray;

@interface MMScreenSharingImageBrowserController : MMUIViewController
{
    NSArray *_imageURLs;
    double _contentRatioY;
    ImageScrollView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageScrollView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double contentRatioY; // @synthesize contentRatioY=_contentRatioY;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void)layoutImageViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithImageURLs:(id)arg1;

@end

