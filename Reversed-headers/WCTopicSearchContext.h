//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTopicSearchContext : NSObject
{
    long long _sourceType;
    long long _sourceScene;
    NSString *_sourceSceneId;
    NSString *_inputQuery;
    unsigned long long _curseLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long curseLocation; // @synthesize curseLocation=_curseLocation;
@property(copy, nonatomic) NSString *inputQuery; // @synthesize inputQuery=_inputQuery;
@property(copy, nonatomic) NSString *sourceSceneId; // @synthesize sourceSceneId=_sourceSceneId;
@property(nonatomic) long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;

@end

