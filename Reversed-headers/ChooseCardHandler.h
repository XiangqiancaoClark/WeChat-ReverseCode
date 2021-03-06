//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "WCCardChooseViewControllerDelegate-Protocol.h"

@class NSString, OpenApiParameter;

@interface ChooseCardHandler : MMObject <WCCardChooseViewControllerDelegate, IPreEnterWechatLogicExt>
{
    OpenApiParameter *_parameter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseCard;
- (void)onPreEnterWechatDone;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (void)startChooseCard:(id)arg1;
- (void)cancelChooseCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

