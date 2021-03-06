//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderImageUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>
{
    NSMutableDictionary *_uploadDict;
    NSMutableArray *_uploadWaitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
@property(retain, nonatomic) NSMutableDictionary *uploadDict; // @synthesize uploadDict=_uploadDict;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)realUploadImageWithMeta:(id)arg1;
- (void)checkQueue;
- (void)cancelUploadImagePath:(id)arg1;
- (void)startUploadImagePath:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

