//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSArray, NSString;

@interface GameHaowanPostInfoTableItem : MMObject <WCTTableCoding>
{
    _Bool _isBroken;
    unsigned int _postType;
    unsigned int _fromSource;
    unsigned int _retryCount;
    int _publishState;
    NSString *_postId;
    NSString *_extra;
    unsigned long long _createTime;
    NSArray *_mediaList;
}

+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)publishState;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)retryCount;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromSource;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extra;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)postType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)postId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isBroken; // @synthesize isBroken=_isBroken;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(nonatomic) int publishState; // @synthesize publishState=_publishState;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) unsigned int postType; // @synthesize postType=_postType;
@property(retain, nonatomic) NSString *postId; // @synthesize postId=_postId;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

