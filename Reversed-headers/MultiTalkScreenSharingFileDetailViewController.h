//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileDetailViewController.h"

#import "MultiTalkScreenSharingFileProtocol-Protocol.h"

@class NSString, UIColor;

@interface MultiTalkScreenSharingFileDetailViewController : FileDetailViewController <MultiTalkScreenSharingFileProtocol>
{
    _Bool _automaticallyAdjustsWebScrollViewInsets;
    _Bool _showsToastForSwitchingLandscape;
    UIColor *_previewBackgroundColor;
    long long _fileEncryptType;
}

- (void).cxx_destruct;
@property(nonatomic) long long fileEncryptType; // @synthesize fileEncryptType=_fileEncryptType;
@property(nonatomic) _Bool showsToastForSwitchingLandscape; // @synthesize showsToastForSwitchingLandscape=_showsToastForSwitchingLandscape;
@property(nonatomic) _Bool automaticallyAdjustsWebScrollViewInsets; // @synthesize automaticallyAdjustsWebScrollViewInsets=_automaticallyAdjustsWebScrollViewInsets;
@property(retain, nonatomic) UIColor *previewBackgroundColor; // @synthesize previewBackgroundColor=_previewBackgroundColor;
- (id)filePathForScreenSharing;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)arg1;
- (void)showToastForSwitchingLandscape;
- (void)showToastForSwitchingLandscapeIfNeeded;
- (void)updateViewAndSubviews:(id)arg1 withBackgroundColor:(id)arg2;
- (_Bool)findWKPasswordViewInView:(id)arg1;
- (void)checkFileEncryptType;
- (void)didLoadWebView;
- (void)didInitPreview;
- (void)updateWebScrollViewInset;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
