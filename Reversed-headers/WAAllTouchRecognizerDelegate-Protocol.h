//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol WAAllTouchRecognizerDelegate <NSObject>

@optional
- (void)touchesGesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesGesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

