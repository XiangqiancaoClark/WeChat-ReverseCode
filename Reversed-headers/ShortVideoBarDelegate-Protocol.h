//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditImageAttr, EditVideoAttr, MMShortVideoParamModel, NSData, NSString, UIImage, UIViewController, WCFinderDataItem;

@protocol ShortVideoBarDelegate <NSObject>
- (UIViewController *)currentViewController;
- (void)onCameraResign;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;

@optional
- (void)onShortVideoShootBtnClicked;
- (NSString *)chatUserNameForSightStatistics;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStopRecord;
- (void)onStartRecord;
- (void)onDeactiveAnimStart:(double)arg1;
- (void)onPanelDrag:(double)arg1;
- (void)onDeactiveAnimEnd;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void)didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg1;
@end

