//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySendBindCardAwardCgiRequest : NSObject
{
    unsigned int _send_record_id;
    unsigned int _user_record_id;
    unsigned int _bindbankscene;
    unsigned int _realname_scene;
    unsigned long long _activity_id;
    unsigned long long _activity_type;
    unsigned long long _award_id;
    unsigned long long _activity_mch_id;
    NSString *_bank_type;
    NSString *_bank_serial;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int realname_scene; // @synthesize realname_scene=_realname_scene;
@property(nonatomic) unsigned int bindbankscene; // @synthesize bindbankscene=_bindbankscene;
@property(retain, nonatomic) NSString *bank_serial; // @synthesize bank_serial=_bank_serial;
@property(retain, nonatomic) NSString *bank_type; // @synthesize bank_type=_bank_type;
@property(nonatomic) unsigned long long activity_mch_id; // @synthesize activity_mch_id=_activity_mch_id;
@property(nonatomic) unsigned int user_record_id; // @synthesize user_record_id=_user_record_id;
@property(nonatomic) unsigned int send_record_id; // @synthesize send_record_id=_send_record_id;
@property(nonatomic) unsigned long long award_id; // @synthesize award_id=_award_id;
@property(nonatomic) unsigned long long activity_type; // @synthesize activity_type=_activity_type;
@property(nonatomic) unsigned long long activity_id; // @synthesize activity_id=_activity_id;
- (id)queryDictionary;

@end

