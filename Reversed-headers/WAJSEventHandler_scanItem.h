//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WACameraScanViewControllerHelperDelegate-Protocol.h"

@class NSString;
@protocol IWACameraScanViewControllerHelper;

@interface WAJSEventHandler_scanItem : WAJSEventHandler_BaseEvent <WACameraScanViewControllerHelperDelegate>
{
    id <IWACameraScanViewControllerHelper> _viewControllerHelper;
    NSString *_scanResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) id <IWACameraScanViewControllerHelper> viewControllerHelper; // @synthesize viewControllerHelper=_viewControllerHelper;
- (void)onCameraScanViewControllerDidBePoped;
- (void)onScanItemResult:(id)arg1;
- (void)showScanItemWithParams:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
