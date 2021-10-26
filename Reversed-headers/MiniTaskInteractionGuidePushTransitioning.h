//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMUIViewControllerTransitionInfo-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIImageView, UIViewController;

@interface MiniTaskInteractionGuidePushTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    UIViewController *animatedTransitionRespondViewController;
    UIImageView *_fakeSnapShotImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *fakeSnapShotImageView; // @synthesize fakeSnapShotImageView=_fakeSnapShotImageView;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
