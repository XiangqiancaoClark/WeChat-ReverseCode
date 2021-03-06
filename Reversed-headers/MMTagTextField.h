//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UILabel;

@interface MMTagTextField : UITextField
{
    double _tipsLabelFontSize;
    double _textEditMarginLeft;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) double textEditMarginLeft; // @synthesize textEditMarginLeft=_textEditMarginLeft;
@property(nonatomic) double tipsLabelFontSize; // @synthesize tipsLabelFontSize=_tipsLabelFontSize;
- (id)recursiveFindTextFieldActionButton:(id)arg1;
- (id)findTextFieldActionButton;
- (void)customizeClearButtonColor;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTagAttributeText:(id)arg1;
- (void)setCustomTipsLabelHidden:(_Bool)arg1;
- (void)setTipsLabelText:(id)arg1;
- (void)internalInitTipsLabel;

@end

