//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CInviteFriendWrap : NSObject <NSCoding>
{
    unsigned int m_uiInviteCount;
    unsigned int m_uiFriendType;
    unsigned int m_uiGroupId;
    unsigned int m_uiUin;
    NSString *m_nsNickName;
    NSString *m_nsNickFullPY;
    NSString *m_nsEmail;
    NSString *m_nsRemark;
    NSString *m_nsRemarkFullPY;
    NSString *m_nsUsrName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) NSString *m_nsRemarkFullPY; // @synthesize m_nsRemarkFullPY;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(retain, nonatomic) NSString *m_nsEmail; // @synthesize m_nsEmail;
@property(retain, nonatomic) NSString *m_nsNickFullPY; // @synthesize m_nsNickFullPY;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;
@property(nonatomic) unsigned int m_uiGroupId; // @synthesize m_uiGroupId;
@property(nonatomic) unsigned int m_uiFriendType; // @synthesize m_uiFriendType;
@property(nonatomic) unsigned int m_uiInviteCount; // @synthesize m_uiInviteCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (long long)compare:(id)arg1;

@end

