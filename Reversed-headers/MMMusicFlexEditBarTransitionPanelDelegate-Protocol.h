//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicFlexEditBarTransitionPanel, MMMusicVideoTransitionModel;

@protocol MMMusicFlexEditBarTransitionPanelDelegate <NSObject>
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didTransitionPanelCellClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didReplayBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didDoneBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didCancelBtnClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didBlankAreaClicked:(MMMusicVideoTransitionModel *)arg2;
- (void)mvFlexEditBarTransitionPanel:(MMMusicFlexEditBarTransitionPanel *)arg1 didLoadCompleteWithCurTransitionModel:(MMMusicVideoTransitionModel *)arg2;
@end
