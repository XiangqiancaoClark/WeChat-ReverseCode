//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CdnSnsTaskInfo, NSMutableArray, NSString;

@interface WCStoryDownloadImageCdnMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrQueue;
    CdnSnsTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnSnsTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *arrQueue; // @synthesize arrQueue=_arrQueue;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)realStartDownloadWithTaskInfo:(id)arg1;
- (void)startDownloadWithTaskInfo:(id)arg1;
- (void)CheckQueue;
- (id)generateDownloadTaskInfo:(id)arg1;
- (_Bool)IsImageDownloadingWithMediaItem:(id)arg1;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(_Bool)arg2;
- (void)StartDownloadImageWithMediaItem:(id)arg1;
- (void)StartPreloadImageWithItems:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
