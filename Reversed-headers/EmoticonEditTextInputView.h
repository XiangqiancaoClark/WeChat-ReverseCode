//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageColorBarDeleagate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class EditImageColorBar, MMTextView, MMUIButton, NSString, UIButton, UIColor, UIView;
@protocol EmoticonEditTextInputDelegate;

@interface EmoticonEditTextInputView : MMUIView <UITextViewDelegate, EditImageColorBarDeleagate>
{
    UIView *m_bgView;
    UIButton *m_cancelBtn;
    UIButton *m_confirmBtn;
    MMTextView *m_textView;
    MMUIButton *m_clearBtn;
    EditImageColorBar *m_colorBar;
    _Bool m_isFirstTyping;
    EmoticonEditTextInputView *m_tempTextInputView;
    id <EmoticonEditTextInputDelegate> _delegate;
    UIColor *_color;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <EmoticonEditTextInputDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEditImageColorBarChangeSelectedColor:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didChangeText:(id)arg1;
- (void)onClearText;
- (void)onConfirm;
- (void)onCancel;
- (void)addBlurViewWithImage:(id)arg1;
- (void)configColorBar;
- (void)configTextView;
- (void)configConfirmBtn;
- (void)configCancelButton;
- (void)adjustClearButtonPosition;
- (void)adjustTextViewMaxWidth:(double)arg1;
- (void)adjustTextViewFont:(id)arg1;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

