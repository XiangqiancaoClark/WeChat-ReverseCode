//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SearchCgiInfoObject : NSObject
{
    CDUnknownBlockType _completion;
    NSString *_query;
    NSDate *_createDate;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 query:(id)arg2;

@end

