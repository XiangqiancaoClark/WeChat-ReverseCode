//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSData, NSString;

@interface WXOpenCustomerServiceReq : BaseReq
{
    NSString *_url;
    NSData *_corpid;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *corpid; // @synthesize corpid=_corpid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

