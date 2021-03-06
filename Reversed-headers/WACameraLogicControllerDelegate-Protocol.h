//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage;

@protocol WACameraLogicControllerDelegate <NSObject>

@optional
- (void)onCameraDidRotate;
- (void)onCameraFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCameraVideoRecordingWithFrameImg:(UIImage *)arg1;
- (void)onCameraVideoTakenFail;
- (void)onCameraVideoTakenSuccess:(NSString *)arg1 thumbImg:(UIImage *)arg2 isMuted:(_Bool)arg3;
- (void)onCameraPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onCameraScanCode:(NSDictionary *)arg1;
- (void)onCameraStopRecord;
- (void)onCameraStartRecord;
- (void)onCameraStop;
- (void)onCameraInitDone;
- (void)onCameraNeedAuthCancel;
@end

