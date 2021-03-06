//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CameraScanLogicDelegate-Protocol.h"
#import "CameraScanUIDelegate-Protocol.h"
#import "IWACameraScanViewControllerHelper-Protocol.h"

@class CameraScanViewController, NSString;
@protocol WACameraScanViewControllerHelperDelegate;

@interface WACameraScanViewControllerHelper : NSObject <CameraScanLogicDelegate, CameraScanUIDelegate, IWACameraScanViewControllerHelper>
{
    CameraScanViewController *_viewController;
    id <WACameraScanViewControllerHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WACameraScanViewControllerHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CameraScanViewController *viewController; // @synthesize viewController=_viewController;
- (void)onCameraScanViewControllerDidBePoped;
- (void)onScanItemResult:(id)arg1;
- (void)onScanCodeResult:(id)arg1;
- (void)obtainScanResultDidFinish:(id)arg1;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;
- (id)getCameraScanViewViewController;
- (id)initWithScanItemParam:(id)arg1;
- (id)initWithScanCodeParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

