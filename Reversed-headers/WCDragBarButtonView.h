//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface WCDragBarButtonView : UIButton
{
    long long _option;
    UIButton *_iconView;
    UIButton *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long option; // @synthesize option=_option;
- (void)setSelected:(_Bool)arg1;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 title:(id)arg3 selectedTitle:(id)arg4 bgColor:(id)arg5 selectedBGColor:(id)arg6;

@end
