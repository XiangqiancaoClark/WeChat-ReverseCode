//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNetworkStatusExt-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, WCLanTransferSSSDelegate;

@interface WCLanTransferSSSQueue : NSObject <CNetworkStatusExt>
{
    id <WCLanTransferSSSDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_sssQueue;
    NSMutableDictionary *_taskInfoDict;
    NSMutableDictionary *_taskInfoStartDict;
    NSString *_localServer;
    NSString *_encryKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *encryKey; // @synthesize encryKey=_encryKey;
@property(copy, nonatomic) NSString *localServer; // @synthesize localServer=_localServer;
@property(retain, nonatomic) NSMutableDictionary *taskInfoStartDict; // @synthesize taskInfoStartDict=_taskInfoStartDict;
@property(retain, nonatomic) NSMutableDictionary *taskInfoDict; // @synthesize taskInfoDict=_taskInfoDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sssQueue; // @synthesize sssQueue=_sssQueue;
@property(nonatomic) __weak id <WCLanTransferSSSDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)handleSmartServerProgressChange:(id)arg1 totalSize:(unsigned long long)arg2 successSize:(unsigned long long)arg3;
- (void)handleSmartServerSendFail:(id)arg1 errorCode:(int)arg2;
- (void)handleSmartServerSendSuccess:(id)arg1;
- (void)p_forceStopServer;
- (void)p_tryStopServer;
- (id)addTaskInfo:(id)arg1;
- (void)dealloc;

@end

