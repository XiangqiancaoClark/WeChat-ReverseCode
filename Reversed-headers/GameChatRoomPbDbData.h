//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface GameChatRoomPbDbData : NSObject <WCTTableCoding>
{
    NSString *_keyWithCategroy;
    NSData *_pbData;
    NSString *_additionalInfo;
    NSString *_category;
    NSString *_pbClassName;
    double _createTime;
}

+ (id)dbKeyFromCategory:(id)arg1 key:(id)arg2;
+ (void)__wcdb_column_constraint_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)additionalInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)pbClassName;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)pbData;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)category;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)keyWithCategroy;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *pbClassName; // @synthesize pbClassName=_pbClassName;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) NSData *pbData; // @synthesize pbData=_pbData;
@property(retain, nonatomic) NSString *keyWithCategroy; // @synthesize keyWithCategroy=_keyWithCategroy;
- (_Bool)isOfPbClass:(Class)arg1;
- (id)initWithCategory:(id)arg1 key:(id)arg2 pbData:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

