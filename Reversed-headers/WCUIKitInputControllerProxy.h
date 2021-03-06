//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "InputControllerDelegate-Protocol.h"

@class NSString;
@protocol IWCUIKitInputControllerDelegate;

@interface WCUIKitInputControllerProxy : NSObject <InputControllerDelegate>
{
    id <IWCUIKitInputControllerDelegate> _delegate;
}

+ (long long)getInputControlerModeWith:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IWCUIKitInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getVisibleHeight;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (id)getGrowTextView;
- (id)getInputControllerWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

