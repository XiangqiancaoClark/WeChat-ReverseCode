//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMToolManageItem : NSObject
{
    NSString *_name;
    NSString *_iconUrl;
    NSObject *_rawData;
    NSString *_appUserName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSObject *rawData; // @synthesize rawData=_rawData;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initFromChatRoomToolWeAppInfo:(id)arg1;

@end

