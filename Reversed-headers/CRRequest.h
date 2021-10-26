//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface CRRequest : NSObject
{
    NSString *_method;
    NSURL *_URL;
    NSDictionary *_headers;
    NSData *_body;
}

+ (id)requestWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)requestWithBuilder:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (id)initWithBuilder:(id)arg1;

@end
