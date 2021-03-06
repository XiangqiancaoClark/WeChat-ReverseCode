//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSArray;
@protocol CameraVideoDeviceDelegate, OS_dispatch_queue;

@interface FaceRecogCameraDevice : NSObject
{
    NSObject<OS_dispatch_queue> *deviceOperationQueue;
    NSObject<OS_dispatch_queue> *videoProcessingQueue;
    NSArray *observers;
    _Bool focusListening;
    _Bool _lowLightBoost;
    _Bool _isAdjustingWhiteBalance;
    _Bool _isCustomExposureSupported;
    int _flashMode;
    int _frameRate;
    NSObject<CameraVideoDeviceDelegate> *_delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    double _DeviceISO;
    double _Device_minISO;
    double _Device_maxISO;
    double _DeviceAperture;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    double _width;
    double _height;
    struct CGPoint _focusPoint;
    struct CGPoint _exposurePoint;
    CDStruct_1b6d18a9 _DeviceExposureDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool isCustomExposureSupported; // @synthesize isCustomExposureSupported=_isCustomExposureSupported;
@property(nonatomic) CDStruct_1b6d18a9 DeviceExposureDuration; // @synthesize DeviceExposureDuration=_DeviceExposureDuration;
@property(nonatomic) double DeviceAperture; // @synthesize DeviceAperture=_DeviceAperture;
@property(nonatomic) double Device_maxISO; // @synthesize Device_maxISO=_Device_maxISO;
@property(nonatomic) double Device_minISO; // @synthesize Device_minISO=_Device_minISO;
@property(nonatomic) double DeviceISO; // @synthesize DeviceISO=_DeviceISO;
@property(nonatomic) _Bool isAdjustingWhiteBalance; // @synthesize isAdjustingWhiteBalance=_isAdjustingWhiteBalance;
@property(nonatomic) int frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) _Bool lowLightBoost; // @synthesize lowLightBoost=_lowLightBoost;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) struct CGPoint exposurePoint; // @synthesize exposurePoint=_exposurePoint;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(nonatomic) __weak NSObject<CameraVideoDeviceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFocusChangeListener;
- (void)addFocusChangeListener;
- (id)deviceWithType:(id)arg1 position:(long long)arg2;
- (void)stopDevice;
- (void)startDevice;
- (_Bool)isRunning;
@property(readonly, nonatomic) _Bool hasFront;
@property(readonly, nonatomic) _Bool hasFlash;
@property(nonatomic) long long whiteBalanceMode;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
@property(nonatomic) long long exposureMode;
@property(nonatomic) long long focusMode;
- (_Bool)frameRateSupported:(int)arg1;
- (void)setupCaptureSession;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

