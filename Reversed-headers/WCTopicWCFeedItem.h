//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicWCFeedItem : NSObject
{
    NSString *_username;
    NSString *_feedId;
    long long _feedType;
}

- (void).cxx_destruct;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
