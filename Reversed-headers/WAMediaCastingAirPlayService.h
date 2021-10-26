//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMediaCastingAirPlayDetectorDelegate-Protocol.h"

@class NSString, WAMediaCastingAirPlayDetector;
@protocol WAMediaCastingAirPlayServiceDelegate;

@interface WAMediaCastingAirPlayService : NSObject <WAMediaCastingAirPlayDetectorDelegate>
{
    id <WAMediaCastingAirPlayServiceDelegate> _delegate;
    WAMediaCastingAirPlayDetector *_detector;
}

+ (id)service;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingAirPlayDetector *detector; // @synthesize detector=_detector;
@property(nonatomic) __weak id <WAMediaCastingAirPlayServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long wirelessType;
@property(readonly, nonatomic) _Bool isAirPlaying;
- (void)showRoutePickerView;
- (void)exit;
- (void)switchDevice;
- (void)start;
- (id)volumeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
