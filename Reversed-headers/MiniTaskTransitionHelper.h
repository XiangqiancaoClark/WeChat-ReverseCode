//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MiniTaskTransitionHelper : NSObject
{
}

+ (void)notifyContextDismissTransitionEnd:(id)arg1 gestureType:(unsigned int)arg2 finish:(_Bool)arg3;
+ (void)notifyContextDismissTransitionBegin:(id)arg1 gestureType:(unsigned int)arg2;
+ (void)notifyContextPresentTransitionEnd:(id)arg1 finish:(_Bool)arg2;
+ (void)updateTransitionContext:(id)arg1 withDismissSnapshotImg:(id)arg2;
+ (id)createTransitioningForDismissalWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createTransitioningForPresentationWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createDismissedAnimatedTransitioningWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createPresentAnimatedTransitioningWithContext:(id)arg1 gestureType:(unsigned int)arg2;

@end

