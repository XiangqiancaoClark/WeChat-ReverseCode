//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "YYModel-Protocol.h"

@class NSString;

@interface LensPreviewErrorInfo : MMObject <YYModel>
{
    long long _errCode;
    NSString *_errMessage;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errMessage; // @synthesize errMessage=_errMessage;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (id)getErrorMessageForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

