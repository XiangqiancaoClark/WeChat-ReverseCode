//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol BrandPaySubcribeMgrExt

@optional
- (void)onUpdateUserPaySubcribeEntry:(_Bool)arg1 entryUrl:(NSString *)arg2;
- (void)onBatchUpdateMPPagePaySubcribeHasPaid:(NSArray *)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(NSString *)arg1 fullUrl:(NSString *)arg2;
@end
