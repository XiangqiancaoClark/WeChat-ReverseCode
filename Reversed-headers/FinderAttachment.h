//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfoAttachment, FinderMiniAppAttachment, FinderVideoAttachment;

@interface FinderAttachment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfoAttachment *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderMiniAppAttachment *miniApp; // @dynamic miniApp;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) FinderVideoAttachment *video; // @dynamic video;

@end

