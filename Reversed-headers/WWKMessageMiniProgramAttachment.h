//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSData, NSString;

@interface WWKMessageMiniProgramAttachment : WWKMessageAttachment
{
    NSString *_userName;
    NSString *_path;
    NSData *_hdImageData;
    NSString *_iconUrl;
    NSString *_name;
    NSString *_title;
    unsigned long long _miniProgramType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData=_hdImageData;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

