//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMAppAttachFileMgrExt-Protocol.h"

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray, NSString;

@interface RecordDownloadCDNMgr : MMObject <MMAppAttachFileMgrExt, ICdnComMgrExt>
{
    CMessageWrap *m_curDownMsgWrap;
    CMessageWrap *m_waitDownMsgWrap;
    NSMutableArray *m_arrCDNDownloadInfo;
    CdnRecordMediaInfo *m_curDownMediaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnRecordMediaInfo *m_curDownMediaInfo; // @synthesize m_curDownMediaInfo;
@property(retain, nonatomic) CMessageWrap *m_waitDownMsgWrap; // @synthesize m_waitDownMsgWrap;
@property(retain, nonatomic) CMessageWrap *m_curDownMsgWrap; // @synthesize m_curDownMsgWrap;
- (void)CallPlayeDownloadErrorWithClientMsgID:(id)arg1 RetCode:(int)arg2 WithDownloadInfo:(id)arg3;
- (void)videoKVReport:(id)arg1 cdnInfo:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2 DownloadInfo:(id)arg3;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (void)onCheckBigFileDownloadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)CheckDownloadRecordData;
- (void)StartDownloadCurMsg;
- (void)AddDownloadTasksFromDataList:(id)arg1;
- (_Bool)needDownloadFromDataList:(id)arg1 inMsgWrap:(id)arg2;
- (id)getDownloadInfo:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4;
- (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
- (_Bool)StopDownloadRecordMsg:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4 prior:(_Bool)arg5;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (_Bool)StartDownloadByRecordMsg:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

