//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, ChatRoomToolMessageEventInfo, NSString;

@protocol IWCGroupUndoneExt <NSObject>

@optional
- (void)onWCGroupDeleteAll:(NSString *)arg1;
- (void)onWCGroupLatestRoomDescChanged:(long long)arg1 room:(NSString *)arg2;
- (void)onWCGroupSetMessageUndone:(CMessageWrap *)arg1 result:(_Bool)arg2;
- (void)onWCGroupCompleteUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 result:(_Bool)arg2;
- (void)onWCGroupRevokeUndoneItem:(ChatRoomToolMessageEventInfo *)arg1 result:(_Bool)arg2;
- (void)onWCGroupDisposeUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onWCGroupUpdateUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
@end

