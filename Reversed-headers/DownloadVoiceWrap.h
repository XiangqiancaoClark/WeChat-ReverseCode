//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface DownloadVoiceWrap : NSObject <PBCoding>
{
    unsigned int m_uiLocalID;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    unsigned int m_uiRetryCount;
    unsigned int _m_uiOffset;
    unsigned int _m_uiLen;
    unsigned int _m_uiCancelFlag;
    long long m_n64SvrID;
    NSString *m_nsChatUsrName;
    unsigned long long m_ui64BufId;
    NSData *_m_dtVoice;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_ui64BufId;
+ (void)PBArrayAdd_m_nsChatUsrName;
+ (void)PBArrayAdd_m_n64SvrID;
+ (void)PBArrayAdd_m_uiRetryCount;
+ (void)PBArrayAdd_m_uiEndFlag;
+ (void)PBArrayAdd_m_uiVoiceTime;
+ (void)PBArrayAdd_m_uiVoiceLen;
+ (void)PBArrayAdd_m_uiCreateTime;
+ (void)PBArrayAdd_m_uiLocalID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag=_m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice=_m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen=_m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset=_m_uiOffset;
@property(nonatomic) unsigned long long m_ui64BufId; // @synthesize m_ui64BufId;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

