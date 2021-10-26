//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class DBContactOpenIM, NSString, WWKFDBContactInfo;

@interface WWKFDBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _source;
    NSString *_userName;
    NSString *_appId;
    WWKFDBContactInfo *_dbContactInfo;
    DBContactOpenIM *_dbContactOpenIM;
    unsigned long long _settingFlag;
    NSString *_headImageStatus;
}

+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headImageStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)settingFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)source;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dbContactOpenIM;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dbContactInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *headImageStatus; // @synthesize headImageStatus=_headImageStatus;
@property(nonatomic) unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) DBContactOpenIM *dbContactOpenIM; // @synthesize dbContactOpenIM=_dbContactOpenIM;
@property(retain, nonatomic) WWKFDBContactInfo *dbContactInfo; // @synthesize dbContactInfo=_dbContactInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
