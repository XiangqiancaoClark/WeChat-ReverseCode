//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SnsAction;

@interface SnsActionGroup : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnsAction *currentAction; // @dynamic currentAction;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int objectCreateTime; // @dynamic objectCreateTime;
@property(nonatomic) unsigned long long parentId; // @dynamic parentId;
@property(retain, nonatomic) SnsAction *referAction; // @dynamic referAction;

@end
