//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, RichTextView, UIImageView;
@protocol WCFinderImageTextContainerViewDelegate;

@interface WCFinderImageTextContainerView : MMUIView
{
    UIImageView *_imageView;
    RichTextView *_richTextView;
    long long _type;
    id <WCFinderImageTextContainerViewDelegate> _delegate;
    NSString *_imageName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) __weak id <WCFinderImageTextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)enableClick:(_Bool)arg1 disableColor:(id)arg2;
- (void)onClickTapGes;
- (void)updateWithImageName:(id)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 delegate:(id)arg3;

@end
