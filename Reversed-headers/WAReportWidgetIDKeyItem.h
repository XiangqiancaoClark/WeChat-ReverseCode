//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportWidgetBaseItem.h"

@class NSString;

@interface WAReportWidgetIDKeyItem : WAReportWidgetBaseItem
{
    unsigned int _idkey_id;
    unsigned int _idkey_key;
    unsigned int _idkey_value;
    unsigned int _serviceType;
    NSString *_searchQuery;
    NSString *_extParams;
    NSString *_srcAppid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *srcAppid; // @synthesize srcAppid=_srcAppid;
@property(retain, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) unsigned int serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) unsigned int idkey_value; // @synthesize idkey_value=_idkey_value;
@property(nonatomic) unsigned int idkey_key; // @synthesize idkey_key=_idkey_key;
@property(nonatomic) unsigned int idkey_id; // @synthesize idkey_id=_idkey_id;
- (id)reportString;
- (int)reportID;

@end

