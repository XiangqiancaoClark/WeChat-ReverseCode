//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHotwordConfiguration : NSObject
{
    long long _scene;
    NSString *_hotword;
}

+ (id)configurationWithFinderHotwordConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (_Bool)isValid;

@end

