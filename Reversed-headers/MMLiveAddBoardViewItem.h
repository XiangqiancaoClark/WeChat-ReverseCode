//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;

@interface MMLiveAddBoardViewItem : UIView
{
    _Bool _isActionEnabled;
    unsigned long long _type;
    CDUnknownBlockType _itemClickBlock;
    MMUIButton *_functionButton;
    MMUILabel *_functionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *functionLabel; // @synthesize functionLabel=_functionLabel;
@property(retain, nonatomic) MMUIButton *functionButton; // @synthesize functionButton=_functionButton;
@property(nonatomic) _Bool isActionEnabled; // @synthesize isActionEnabled=_isActionEnabled;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)functionButtonClick;
- (void)layoutUI;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

