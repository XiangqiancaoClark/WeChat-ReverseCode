//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, WCFinderParseContentModel;

@interface WCFinderParseContentInfo : NSObject <PBCoding, WCTTableCoding>
{
    NSString *_tid;
    WCFinderParseContentModel *_parseModel;
}

+ (void)__wcdb_column_constraint_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)parseModel;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderParseContentModel *parseModel; // @synthesize parseModel=_parseModel;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
