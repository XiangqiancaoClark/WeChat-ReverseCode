//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface BrandTimelineResortDigestUtil : MMObject
{
}

+ (id)getBrandTimelineMsgWrapFromDb:(id)arg1;
+ (_Bool)shouldUseResortAttrDigest:(id)arg1;
+ (id)genReportDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1;
+ (id)genAttrDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1 shouldBold:(_Bool)arg2;
+ (id)toJsonWithDigestInfo:(id)arg1;
+ (_Bool)isDigestInfoValid:(id)arg1;

@end

