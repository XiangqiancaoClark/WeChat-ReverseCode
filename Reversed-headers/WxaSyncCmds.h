//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WxaSyncBlockCgiRequestCmd, WxaSyncGetCodeCmd, WxaSyncGetContactCmd, WxaSyncInvalidCodeCmd, WxaSyncInvalidContactCmd, WxaSyncIssueContactCmd, WxaSyncIssueDecryptKeyCmd, WxaSyncIssueLaunchCmd, WxaSyncPreLaunchCmd, WxaSyncPullGlobalConfCmd, WxaSyncUpdateVersionCmd;

@interface WxaSyncCmds : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaSyncBlockCgiRequestCmd *blockCgiRequest; // @dynamic blockCgiRequest;
@property(retain, nonatomic) WxaSyncGetCodeCmd *getCode; // @dynamic getCode;
@property(retain, nonatomic) WxaSyncGetContactCmd *getContact; // @dynamic getContact;
@property(retain, nonatomic) WxaSyncInvalidCodeCmd *invalidCode; // @dynamic invalidCode;
@property(retain, nonatomic) WxaSyncInvalidContactCmd *invalidContact; // @dynamic invalidContact;
@property(retain, nonatomic) WxaSyncIssueContactCmd *issueContact; // @dynamic issueContact;
@property(retain, nonatomic) WxaSyncIssueDecryptKeyCmd *issueDecryptKey; // @dynamic issueDecryptKey;
@property(retain, nonatomic) WxaSyncIssueLaunchCmd *issueLaunch; // @dynamic issueLaunch;
@property(retain, nonatomic) WxaSyncPreLaunchCmd *preLaunch; // @dynamic preLaunch;
@property(retain, nonatomic) WxaSyncPullGlobalConfCmd *pullGlobalConf; // @dynamic pullGlobalConf;
@property(retain, nonatomic) WxaSyncUpdateVersionCmd *updateVersion; // @dynamic updateVersion;

@end
