//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameCenterMsgContentPic, GameCenterMsgSecondLineInfo, GameCenterMsgSender, GameCenterMsgSourceInfo, GameJumpInfo, NSString;

@interface GameCenterMsgMessageCenterInfo : NSObject
{
    _Bool _notInMsgCenter;
    GameJumpInfo *_msgCardInfo;
    GameCenterMsgSender *_msgSender;
    NSString *_userActionSubTitle;
    NSString *_firstLineContent;
    GameCenterMsgSecondLineInfo *_secondLineInfo;
    GameCenterMsgContentPic *_contentPicInfo;
    GameCenterMsgSourceInfo *_sourceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) GameCenterMsgContentPic *contentPicInfo; // @synthesize contentPicInfo=_contentPicInfo;
@property(retain, nonatomic) GameCenterMsgSecondLineInfo *secondLineInfo; // @synthesize secondLineInfo=_secondLineInfo;
@property(retain, nonatomic) NSString *firstLineContent; // @synthesize firstLineContent=_firstLineContent;
@property(retain, nonatomic) NSString *userActionSubTitle; // @synthesize userActionSubTitle=_userActionSubTitle;
@property(retain, nonatomic) GameCenterMsgSender *msgSender; // @synthesize msgSender=_msgSender;
@property(retain, nonatomic) GameJumpInfo *msgCardInfo; // @synthesize msgCardInfo=_msgCardInfo;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;

@end

