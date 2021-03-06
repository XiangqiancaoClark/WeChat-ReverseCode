//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class MMResSignatureDataInfos, NSData, NSString;

@interface MMResDownloadUrlInfo : MMObject <PBCoding, WCTColumnCoding>
{
    _Bool isEncrypt;
    _Bool isCompress;
    _Bool isLoginUsrRelated;
    _Bool isDownloaded;
    _Bool _isPage;
    unsigned int fileId;
    unsigned int supportVersion;
    unsigned int downloadPriority;
    unsigned int retryCnt;
    unsigned int _protocal;
    NSString *srcUrl;
    NSString *version;
    NSString *md5;
    NSData *signatureData;
    MMResSignatureDataInfos *arrSignatureDataInfo;
    NSString *originalMd5;
    NSString *originalSha1;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_originalSha1;
+ (void)PBArrayAdd_retryCnt;
+ (void)PBArrayAdd_downloadPriority;
+ (void)PBArrayAdd_originalMd5;
+ (void)PBArrayAdd_arrSignatureDataInfo;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_isDownloaded;
+ (void)PBArrayAdd_supportVersion;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_isLoginUsrRelated;
+ (void)PBArrayAdd_isCompress;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_srcUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int protocal; // @synthesize protocal=_protocal;
@property(nonatomic) _Bool isPage; // @synthesize isPage=_isPage;
@property(retain, nonatomic) NSString *originalSha1; // @synthesize originalSha1;
@property(nonatomic) unsigned int retryCnt; // @synthesize retryCnt;
@property(nonatomic) unsigned int downloadPriority; // @synthesize downloadPriority;
@property(retain, nonatomic) NSString *originalMd5; // @synthesize originalMd5;
@property(retain, nonatomic) MMResSignatureDataInfos *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData;
@property(nonatomic) _Bool isDownloaded; // @synthesize isDownloaded;
@property(nonatomic) unsigned int supportVersion; // @synthesize supportVersion;
@property(nonatomic) unsigned int fileId; // @synthesize fileId;
@property(nonatomic) _Bool isLoginUsrRelated; // @synthesize isLoginUsrRelated;
@property(nonatomic) _Bool isCompress; // @synthesize isCompress;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

