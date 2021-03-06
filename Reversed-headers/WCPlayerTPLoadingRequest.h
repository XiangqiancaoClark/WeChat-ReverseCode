//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerLoadingRequest.h"

@class NSString, TPAssetResourceLoadingRequest;

@interface WCPlayerTPLoadingRequest : WCPlayerLoadingRequest
{
    _Bool _bUseNotifyMode;
    NSString *_filePath;
    TPAssetResourceLoadingRequest *_loadingRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) _Bool bUseNotifyMode; // @synthesize bUseNotifyMode=_bUseNotifyMode;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)contentInformationRequest;
- (id)getFileName;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(long long)arg2;
- (void)respondWithData:(id)arg1;
- (_Bool)fillInformationWithMimeType:(id)arg1 length:(unsigned long long)arg2;
- (id)getLoadingRequest;
- (_Bool)isFinished;
- (_Bool)requestsAllDataToEndOfResource;
- (unsigned long long)currentOffset;
- (unsigned long long)requestedLength;
- (unsigned long long)requestedOffset;
- (id)initWithResourceLoadingRequest:(id)arg1;

@end

