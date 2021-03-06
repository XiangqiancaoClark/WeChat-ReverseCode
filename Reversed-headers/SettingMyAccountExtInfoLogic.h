//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "SettingLastHeadImgViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CUsrInfo, NSString, UIImage, UIViewController;
@protocol settingMyAccountExtInfoLogicDelegate;

@interface SettingMyAccountExtInfoLogic : MMObject <SettingLastHeadImgViewControllerDelegate, MMSightCameraViewControllerDelegate, WCActionSheetDelegate, MessageObserverDelegate, MMImagePickerManagerDelegate>
{
    id <settingMyAccountExtInfoLogicDelegate> m_delegate;
    UIViewController *m_viewController;
    CUsrInfo *m_usrInfo;
    unsigned int m_uiUploadHeadEventID;
    UIImage *_lastImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUsrInfo *m_usrInfo; // @synthesize m_usrInfo;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)dealloc;
- (void)reload;
- (void)resetViewControllerAndDelegate;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)saveLastImage;
- (id)loadLastImage;
- (id)lastImagePath;
- (void)showChangeImg:(id)arg1;
- (void)onSelectLastImage:(id)arg1;
- (void)onPhotoLast;
- (void)onPhotoSave;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)handleImage:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (id)getNavigationController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

