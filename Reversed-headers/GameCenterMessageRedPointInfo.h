//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GameCenterMessageRedPointInfo : NSObject
{
    unsigned int _conversationTotalUnreadCount;
    unsigned int _interactUnReadCnt;
    unsigned int _noticeUnReadCnt;
    unsigned int _myGroupUnReadCnt;
}

@property(nonatomic) unsigned int myGroupUnReadCnt; // @synthesize myGroupUnReadCnt=_myGroupUnReadCnt;
@property(nonatomic) unsigned int noticeUnReadCnt; // @synthesize noticeUnReadCnt=_noticeUnReadCnt;
@property(nonatomic) unsigned int interactUnReadCnt; // @synthesize interactUnReadCnt=_interactUnReadCnt;
@property(nonatomic) unsigned int conversationTotalUnreadCount; // @synthesize conversationTotalUnreadCount=_conversationTotalUnreadCount;

@end

