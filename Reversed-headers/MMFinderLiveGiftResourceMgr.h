//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveGiftResourceBaseMgr.h"

#import "MMServiceProtocol-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSRecursiveLock, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface MMFinderLiveGiftResourceMgr : MMFinderLiveGiftResourceBaseMgr <NSURLSessionDelegate, NSURLSessionDownloadDelegate, MMServiceProtocol>
{
    NSRecursiveLock *_cacheLock;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_thumbnailCaches;
    NSMutableDictionary *_fullPagFileCaches;
    NSMutableDictionary *_previewPagFileCaches;
    NSMutableDictionary *_requestObjectDict;
    NSMutableArray *_waittingRequestObjectQueue;
    NSMutableArray *_downloadingRequestObjectQueue;
    NSURLSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue; // @synthesize downloadingRequestObjectQueue=_downloadingRequestObjectQueue;
@property(retain, nonatomic) NSMutableArray *waittingRequestObjectQueue; // @synthesize waittingRequestObjectQueue=_waittingRequestObjectQueue;
@property(retain, nonatomic) NSMutableDictionary *requestObjectDict; // @synthesize requestObjectDict=_requestObjectDict;
@property(retain, nonatomic) NSMutableDictionary *previewPagFileCaches; // @synthesize previewPagFileCaches=_previewPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *fullPagFileCaches; // @synthesize fullPagFileCaches=_fullPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *thumbnailCaches; // @synthesize thumbnailCaches=_thumbnailCaches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) NSRecursiveLock *cacheLock; // @synthesize cacheLock=_cacheLock;
- (_Bool)loadFromCachePathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)bundlePathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)cachePathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)getMd5ForURL:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)readDataFromFile:(id)arg1;
- (void)getThumbnailWithProductID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (void)getPreviewPagFileWithProductID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (void)getFullPagFileWithProductID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (id)getThumbnailWithProductID:(id)arg1 fileMD5:(id)arg2;
- (id)getPreviewPagFileWithProductID:(id)arg1 fileMD5:(id)arg2;
- (id)getFullPagFileWithProductID:(id)arg1 fileMD5:(id)arg2;
- (_Bool)checkGiftResExistenceWithProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (void)tryResumeNextDownloadRequest;
- (void)cleanGiftResourceCaches;
- (void)cleanUnusedGiftResources;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 observer:(id)arg7;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 oberver:(id)arg5;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

