//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMStatusBarCustomInfo : NSObject
{
    _Bool _overrideStatusBarHidden;
    _Bool _shouldOverrideStatusBarHidden;
    _Bool _shouldOverrideStatusBarStyle;
    _Bool _shouldOverrideStatusBarAnimation;
    long long _overrideStatusBarStyle;
    long long _overrideStatusBarAnimation;
}

@property(nonatomic) _Bool shouldOverrideStatusBarAnimation; // @synthesize shouldOverrideStatusBarAnimation=_shouldOverrideStatusBarAnimation;
@property(nonatomic) _Bool shouldOverrideStatusBarStyle; // @synthesize shouldOverrideStatusBarStyle=_shouldOverrideStatusBarStyle;
@property(nonatomic) _Bool shouldOverrideStatusBarHidden; // @synthesize shouldOverrideStatusBarHidden=_shouldOverrideStatusBarHidden;
@property(nonatomic) long long overrideStatusBarAnimation; // @synthesize overrideStatusBarAnimation=_overrideStatusBarAnimation;
@property(nonatomic) long long overrideStatusBarStyle; // @synthesize overrideStatusBarStyle=_overrideStatusBarStyle;
@property(nonatomic) _Bool overrideStatusBarHidden; // @synthesize overrideStatusBarHidden=_overrideStatusBarHidden;
- (void)dealloc;
- (void)reset;

@end
