//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureSession, NSString;

@interface NativeCaptureSessionIOS : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_captureSession;
    struct ARNativeCameraInstance *_callback;
    struct __CVBuffer *_curPixelBuffer;
    struct __CVBuffer *_curAcquiredPixelBuffer;
    struct ARNativeCameraFrame _curFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *curAcquiredPixelBuffer; // @synthesize curAcquiredPixelBuffer=_curAcquiredPixelBuffer;
@property(nonatomic) struct ARNativeCameraFrame curFrame; // @synthesize curFrame=_curFrame;
@property(nonatomic) struct __CVBuffer *curPixelBuffer; // @synthesize curPixelBuffer=_curPixelBuffer;
@property(nonatomic) struct ARNativeCameraInstance *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)initCaptureSession;
- (id)cameraWithPosition:(long long)arg1;
- (struct ARNativeCameraFrame)acquireLatestFrame;
- (void)stopRunning;
- (void)startRunning;
- (_Bool)isRunning;
- (id)initWithCallback:(struct ARNativeCameraInstance *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

