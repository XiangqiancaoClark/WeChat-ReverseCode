//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMEasterEggActivity-Protocol.h"

@class MMEasterEggGameActivityInfo, NSString;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggGameActivity : NSObject <MMEasterEggActivity>
{
    NSString *_activityId;
    id <MMEasterEggActivityDelegate> _delegate;
    MMEasterEggGameActivityInfo *_activityInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEasterEggGameActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, copy) NSString *description;
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)showGameBag;
- (id)initWithActivityInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

