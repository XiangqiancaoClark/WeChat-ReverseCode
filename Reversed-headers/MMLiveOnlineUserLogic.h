//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveTaskId;
@protocol MMLiveOnlineUserLogicDelegate;

@interface MMLiveOnlineUserLogic : NSObject
{
    MMLiveTaskId *_taskId;
    id <MMLiveOnlineUserLogicDelegate> _logicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveOnlineUserLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)kickAudience:(id)arg1;
- (_Bool)fetchOnlineUserList;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end

