//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSString;

@interface WAJSEventHandler_openCustomerServiceChat : WAJSEventHandler_BaseEvent
{
    NSString *m_url;
    int m_scene;
    _Bool m_showMessageCard;
    NSString *m_sendMsgTitle;
    NSString *m_sendMsgPath;
    NSString *m_sendMsgImageURL;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)getOnClickQuickSendBtnHandleBlockWithWeappContact:(id)arg1 title:(id)arg2 path:(id)arg3;
- (void)onCheckBindEntityCgiResponse:(id)arg1;
- (_Bool)checkIsBindEntityWithAppId:(id)arg1 corpId:(id)arg2 url:(id)arg3;
- (id)getImageDataWithImageUrl:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

