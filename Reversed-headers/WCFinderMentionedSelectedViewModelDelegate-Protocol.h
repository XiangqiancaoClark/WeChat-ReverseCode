//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, WCFinderMentionedSelectedViewModel;

@protocol WCFinderMentionedSelectedViewModelDelegate <NSObject>

@optional
- (void)mentionedSelectedVMStopLoading:(WCFinderMentionedSelectedViewModel *)arg1;
- (void)onViewModelReqeustDataFailed:(WCFinderMentionedSelectedViewModel *)arg1;
- (void)onViewModelDataChanged:(WCFinderMentionedSelectedViewModel *)arg1;
- (void)onViewModel:(WCFinderMentionedSelectedViewModel *)arg1 mentionedItemUpdateAtIdxSet:(NSIndexSet *)arg2;
- (void)onViewModel:(WCFinderMentionedSelectedViewModel *)arg1 onAppendDataAtRange:(struct _NSRange)arg2;
@end

