//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIImage;

@interface MMMusicEditVideoCellExportModel : NSObject
{
    NSString *_localVideoPath;
    UIImage *_localThumbImage;
    double _videoCropStartTime;
    double _videoCropEndTime;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) double videoCropEndTime; // @synthesize videoCropEndTime=_videoCropEndTime;
@property(nonatomic) double videoCropStartTime; // @synthesize videoCropStartTime=_videoCropStartTime;
@property(retain, nonatomic) UIImage *localThumbImage; // @synthesize localThumbImage=_localThumbImage;
@property(retain, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;

@end
