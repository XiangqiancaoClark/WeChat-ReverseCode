//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderMsgSessionCell, WCFinderMsgSessionInfo;

@interface WCFinderMsgSessionCellViewModel : NSObject
{
    WCFinderMsgSessionCell *_cell;
    WCFinderMsgSessionInfo *_sessionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) __weak WCFinderMsgSessionCell *cell; // @synthesize cell=_cell;
- (id)sessionTitle;
- (id)realChatFinderContact;
- (void)updateCellData;
- (void)updateCellView;

@end

