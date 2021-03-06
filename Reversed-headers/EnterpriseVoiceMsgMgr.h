//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol EnterpriseVoiceMsgMgrDelegate;

@interface EnterpriseVoiceMsgMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableDictionary *_dicMsgSource;
    _Bool _isContinueWrite;
    id <EnterpriseVoiceMsgMgrDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseVoiceMsgMgrDelegate> delegate; // @synthesize delegate;
- (void)handleDownloadVoiceMsgSuc:(id)arg1;
- (_Bool)WriteAudioFile:(id)arg1 Offset:(unsigned int)arg2 Data:(id)arg3;
- (void)handleSendVoiceMsgFail:(id)arg1;
- (void)handleSendVoiceMsgSuc:(id)arg1;
- (_Bool)uploadVoice:(id)arg1;
- (id)popMsgSource:(id)arg1;
- (void)pushMsgSource:(id)arg1;
- (id)genKeyWithChatUsrName:(id)arg1 svrID:(unsigned long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)sendVoiceMsgByUserData:(id)arg1;
- (_Bool)resendVoiceMsg:(id)arg1;
- (_Bool)CreateDownloadVoiceEvent:(id)arg1 withMsg:(id)arg2;
- (_Bool)downloadVoiceData:(id)arg1;
- (void)wrtieFileOfVoiceMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

