//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WSVideoDotDetail : NSObject
{
    unsigned int _beginTime;
    unsigned int _endTime;
    unsigned int _minShowTime;
    unsigned int _type;
    unsigned long long _dotItemId;
    NSString *_title;
    NSString *_desc;
    NSString *_relativeURL;
    NSString *_originalId;
    NSString *_weAppName;
    NSString *_appId;
    NSString *_avatar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *weAppName; // @synthesize weAppName=_weAppName;
@property(retain, nonatomic) NSString *originalId; // @synthesize originalId=_originalId;
@property(retain, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int minShowTime; // @synthesize minShowTime=_minShowTime;
@property(nonatomic) unsigned long long dotItemId; // @synthesize dotItemId=_dotItemId;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;

@end

