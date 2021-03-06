//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class MiniRecTransitionController, UIView, WCFinderMegaVideo;

@protocol WCFinderInPictureProtocol <NSObject, WCFinderFeedBaseViewControllerProtocol>
@property(readonly, nonatomic) MiniRecTransitionController *minimizationTransitionController;
- (struct CGRect)fullRectForMedia;
- (_Bool)setVideoMute:(_Bool)arg1;
- (void)willInPicture;
- (void)unstashPlayer;
- (void)stashPlayer;
- (void)closeInPicture;
- (void)maxmizeFromInPicture;
- (UIView *)viewForCapture;
- (_Bool)isPlaying;
- (WCFinderMegaVideo *)playingVideo;
@end

