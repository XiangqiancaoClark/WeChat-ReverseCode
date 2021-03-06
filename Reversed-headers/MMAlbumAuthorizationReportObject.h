//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMAlbumAuthorizationReportObject : NSObject
{
    _Bool _clickSetting;
    _Bool _clickChoosePart;
    _Bool _clickBanner;
    _Bool _clickAddPhoto;
    int _scene;
    unsigned int _exception;
    long long _addPhotoCount;
}

+ (void)reportiOS14OnceIfNeeded;
+ (unsigned int)getAuthorizationStatus;
@property(nonatomic) unsigned int exception; // @synthesize exception=_exception;
@property(nonatomic) long long addPhotoCount; // @synthesize addPhotoCount=_addPhotoCount;
@property(nonatomic) _Bool clickAddPhoto; // @synthesize clickAddPhoto=_clickAddPhoto;
@property(nonatomic) _Bool clickBanner; // @synthesize clickBanner=_clickBanner;
@property(nonatomic) _Bool clickChoosePart; // @synthesize clickChoosePart=_clickChoosePart;
@property(nonatomic) _Bool clickSetting; // @synthesize clickSetting=_clickSetting;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)report;

@end

