//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString, WCFinderComment;

@interface WCFinderDeleteCommentCGI : WCFinderBaseCgi
{
    WCFinderComment *_comment;
    NSString *_tid;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _rootCommentID;
    unsigned long long _scene;
    NSString *_sessionBuffer;
    unsigned long long _commentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 scene:(unsigned long long)arg4 sessionBuffer:(id)arg5 commentScene:(unsigned long long)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end
