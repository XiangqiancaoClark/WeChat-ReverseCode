//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportOpenMaterialEntrenceItem : WAReportBaseItem
{
    unsigned int _scene_id;
    NSString *_session;
    NSString *_weapp_id;
    NSString *_weapp_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *weapp_name; // @synthesize weapp_name=_weapp_name;
@property(retain, nonatomic) NSString *weapp_id; // @synthesize weapp_id=_weapp_id;
@property(nonatomic) unsigned int scene_id; // @synthesize scene_id=_scene_id;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
- (id)reportString;
- (int)reportID;

@end

