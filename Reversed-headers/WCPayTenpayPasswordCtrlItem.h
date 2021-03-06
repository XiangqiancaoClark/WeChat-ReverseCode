//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "TenpayPasswordCtrlDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class NSString, TenpayPasswordCtrl, UIColor, UIImage, WCPayInputView;

@interface WCPayTenpayPasswordCtrlItem : WCBaseInfoItem <TenpayPasswordCtrlDelegate, WCPayLogicMgrExt, UITextFieldDelegate>
{
    TenpayPasswordCtrl *m_textField;
    UIImage *m_image;
    WCPayInputView *_payInputView;
    UIColor *_numColor;
    UIColor *_numFontColor;
    UIColor *_extendColor;
    UIColor *_pressColor;
    UIColor *_lineColor;
}

- (void).cxx_destruct;
@property(retain) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain) UIColor *pressColor; // @synthesize pressColor=_pressColor;
@property(retain) UIColor *extendColor; // @synthesize extendColor=_extendColor;
@property(retain) UIColor *numFontColor; // @synthesize numFontColor=_numFontColor;
@property(retain) UIColor *numColor; // @synthesize numColor=_numColor;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
- (void)updatePwdViewStyle:(long long)arg1;
- (void)setTextFieldSalt;
- (void)autoRemarkKeyBoradType;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (_Bool)onError:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (id)getHashData;
- (void)setKeyboardAccessibility:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)initWithYogaNumColor:(id)arg1 numFontColor:(id)arg2 extendColor:(id)arg3 pressColor:(id)arg4 lineColor:(id)arg5;
- (id)initWithImage:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)clearInput;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)initView:(struct CGRect)arg1;
- (void)updatePasswordCtrl;
- (id)getValue;
- (struct CGSize)getSize;
- (long long)getTextLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

