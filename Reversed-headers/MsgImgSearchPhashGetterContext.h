//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, MsgImgSearchPhashMemCache;

@interface MsgImgSearchPhashGetterContext : NSObject
{
    _Bool _isForbidSearch;
    CMessageWrap *_messageWrap;
    unsigned long long _sessionID;
    MsgImgSearchPhashMemCache *_phashMemCache;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForbidSearch; // @synthesize isForbidSearch=_isForbidSearch;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MsgImgSearchPhashMemCache *phashMemCache; // @synthesize phashMemCache=_phashMemCache;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;

@end

