//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, ScheduleOPWrap;

@interface AppMMScheduleItem : MMObject <NSCopying>
{
    NSString *_displayName;
    NSString *_iconUrl;
    ScheduleOPWrap *_scheduleOpWrap;
    NSMutableArray *_opItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *opItems; // @synthesize opItems=_opItems;
@property(retain, nonatomic) ScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

