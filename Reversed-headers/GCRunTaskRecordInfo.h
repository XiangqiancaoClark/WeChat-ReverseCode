//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface GCRunTaskRecordInfo : NSObject
{
    double _interval;
    NSMutableString *_additionalInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (id)description;
- (id)init;

@end

