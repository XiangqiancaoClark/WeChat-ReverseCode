//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class CContact;
@protocol ChatRoomSpecialAttentionMemberLogicDelegate;

@interface ChatRoomSpecialAttentionMemberLogic : MMObject <PBMessageObserverDelegate>
{
    CContact *_m_chatRoomContact;
    id <ChatRoomSpecialAttentionMemberLogicDelegate> _m_delegate;
}

+ (void)reportChatRoomSpecialAttentionMemberLogWithActionCode:(long long)arg1 chatRoomUserName:(id)arg2 initialAttentionMemberListCount:(unsigned int)arg3 addAttentionMemberList:(id)arg4 deleteAttentionMemberList:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatRoomSpecialAttentionMemberLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
- (void)updateLocalChatRoomRoomSpecialAttentionList:(id)arg1 andSpecialAttentionMemberList:(id)arg2;
- (void)OnModifyChatRoomSpecialAttentionMemberResponse:(id)arg1;
- (_Bool)modifyChatRoomSpecialAttentionMember:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;

@end

