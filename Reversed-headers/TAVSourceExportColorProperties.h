//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVSourceExportColorProperties : NSObject
{
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
}

+ (id)hdColorProperties;
+ (id)dp3ColorProperties;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *YCbCrMatrix; // @synthesize YCbCrMatrix=_YCbCrMatrix;
@property(copy, nonatomic) NSString *transferFunction; // @synthesize transferFunction=_transferFunction;
@property(copy, nonatomic) NSString *colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;
- (id)makeSettingsDictionary;
- (id)init;

@end
