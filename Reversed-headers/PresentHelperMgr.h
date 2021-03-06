//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface PresentHelperMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_tmpCannotShowViewControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tmpCannotShowViewControllers; // @synthesize tmpCannotShowViewControllers=_tmpCannotShowViewControllers;
- (_Bool)isViewControllerCanSetStatusBarStyleWhenSlientProcess:(id)arg1;
- (void)removeSnapshotViews:(id)arg1;
- (id)getSnapShotViewFor:(id)arg1;
- (id)addSnapShotOf:(id)arg1 ToViewControllerList:(id)arg2;
- (void)addViewControllersToNavigationController:(id)arg1 ViewControllers:(id)arg2;
- (id)getPresentationStack:(id)arg1 NeedNavigationStack:(_Bool)arg2;
- (void)PresentSlientlyFrom:(id)arg1 NeedPresentViewControllerList:(id)arg2 ToVCIndex:(long long)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)slientlyPreparePresentStackForPresentationFor:(id)arg1 NeedSaveNavigationStackAfter:(_Bool)arg2 Completion:(CDUnknownBlockType)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

