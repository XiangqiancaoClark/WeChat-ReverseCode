//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DeviceRankDetailResonse, NSArray, NSString;

@protocol IDeviceRankProfileMgrExt

@optional
- (void)onDelFollowWithUserName:(NSString *)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(NSArray *)arg1 error:(int)arg2;
- (void)onGotUserRankDetail:(NSString *)arg1 rankDetailResp:(DeviceRankDetailResonse *)arg2 err:(int)arg3;
- (void)onUpdateCoverImageError:(int)arg1;
- (void)onCoverImageChanged;
@end

