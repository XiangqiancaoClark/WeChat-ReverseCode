//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WxaFlutterEngine, WxaFlutterViewController;

@interface WxaFlutterInstance : NSObject
{
    WxaFlutterEngine *_flutterEngine;
    WxaFlutterViewController *_flutterViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaFlutterViewController *flutterViewController; // @synthesize flutterViewController=_flutterViewController;
@property(retain, nonatomic) WxaFlutterEngine *flutterEngine; // @synthesize flutterEngine=_flutterEngine;
- (void)destroy;
- (void)create;
- (id)init;

@end
