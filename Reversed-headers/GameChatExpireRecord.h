//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GameChatExpireRecord : NSObject
{
    NSString *_recordValue;
    NSString *_recordKey;
    double _recordTime;
    double _maxAge;
}

+ (id)modelFromJsonStr:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(retain, nonatomic) NSString *recordValue; // @synthesize recordValue=_recordValue;
- (id)modelJsonStr;

@end

