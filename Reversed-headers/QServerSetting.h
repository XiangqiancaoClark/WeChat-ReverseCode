//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QServerSetting : NSObject
{
    _Bool _https;
    int _status;
    NSString *_name;
    NSString *_host;
    NSString *_host_test;
}

- (void).cxx_destruct;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *host_test; // @synthesize host_test=_host_test;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool https; // @synthesize https=_https;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)checkHttpsString:(id)arg1 useHttps:(_Bool)arg2;
- (id)getDomain;
- (id)initWithDict:(id)arg1;

@end

