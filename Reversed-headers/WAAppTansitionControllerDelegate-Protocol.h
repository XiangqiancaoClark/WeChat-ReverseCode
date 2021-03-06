//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, WAWebViewController;

@protocol WAAppTansitionControllerDelegate <NSObject>
- (void)sheetDismissalTransitionDidEnd:(_Bool)arg1;
- (void)sheetDismissalTransitionWillBegin;
- (void)sheetPresentationTransitionDidEnd:(_Bool)arg1;
- (void)sheetPresentationTransitionWillBegin;
- (_Bool)sheetBackgroundUserInteractionEnabledInSheetLaunchMode;
- (UIColor *)sheetBackgroundColorInSheetLaunchMode;
- (void)sheetDragGestureInSheetLaunchModeDidEnd:(UIPanGestureRecognizer *)arg1;
- (void)sheetDragGestureInSheetLaunchModeDidBegin:(UIPanGestureRecognizer *)arg1;
- (void)sheetContentYDidChangeInSheetLaunchMode:(double)arg1;
- (_Bool)sheetShouldRespondsToTapGestureInSheetLaunchMode:(UITapGestureRecognizer *)arg1;
- (_Bool)sheetShouldForbidDragUpGestureInSheetLaunchMode:(UIPanGestureRecognizer *)arg1;
- (_Bool)sheetShouldRespondsToDragGestureInSheetLaunchMode:(UIPanGestureRecognizer *)arg1;
- (unsigned long long)dismissType;
- (double)sheetCornerRadiusInSheetLaunchMode;
- (unsigned long long)sheetRectCornerInSheetLaunchMode;
- (struct CGSize)landscapeSheetSizeInSheetLaunchMode;
- (struct CGSize)sheetSizeInSheetLaunchMode;
- (void)onPresentationControllerDragToExpand;
- (void)onPresentationControllerWillDragToExpand;
- (void)onPresentationControllerDragToDismiss;
- (void)onTapPresentationControllerContainerBackground;
- (WAWebViewController *)currentTaskWebView;
- (WAWebViewController *)currentTaskFirstWebView;
@end

