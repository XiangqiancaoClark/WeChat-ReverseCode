//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem20781 : KvReportBaseItem
{
    unsigned int _WxaVersion_22;
    unsigned int _PkgVersion_23;
    unsigned int _PkgType_24;
    NSString *_AppId_21;
    NSString *_ErrMsg_25;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ErrMsg_25; // @synthesize ErrMsg_25=_ErrMsg_25;
@property(nonatomic) unsigned int PkgType_24; // @synthesize PkgType_24=_PkgType_24;
@property(nonatomic) unsigned int PkgVersion_23; // @synthesize PkgVersion_23=_PkgVersion_23;
@property(nonatomic) unsigned int WxaVersion_22; // @synthesize WxaVersion_22=_WxaVersion_22;
@property(copy, nonatomic) NSString *AppId_21; // @synthesize AppId_21=_AppId_21;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;

@end

