//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface ResendFileIdAndStatus : NSObject <PBCoding>
{
    unsigned int fileStatus;
    unsigned int isThumb;
    int dataType;
    NSString *fileId;
    NSString *localDataId;
    NSString *md5;
    NSString *dataFmt;
    NSString *clientMsgId;
    NSString *fileUrl;
    NSString *fileAesKey;
    NSString *streamId;
    NSString *filePath;
}

+ (void)initialize;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_streamId;
+ (void)PBArrayAdd_fileAesKey;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_clientMsgId;
+ (void)PBArrayAdd_dataFmt;
+ (void)PBArrayAdd_dataType;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isThumb;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_fileStatus;
+ (void)PBArrayAdd_fileId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId;
@property(retain, nonatomic) NSString *fileAesKey; // @synthesize fileAesKey;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned int isThumb; // @synthesize isThumb;
@property(retain, nonatomic) NSString *localDataId; // @synthesize localDataId;
@property(nonatomic) unsigned int fileStatus; // @synthesize fileStatus;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

