//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString, WCCanvasRandomLayoutEncoreInfo, WCCanvasRandomLayoutTransitionAnimationInfo;

@interface WCCanvasRandomLayoutInfo : MMObject <NSCoding>
{
    unsigned int _cornerRadius;
    NSArray *_layoutItems;
    NSString *_hugeDiskTransitionImg;
    NSString *_hugeDiskTransitionColor;
    double _hugeDiskTransitionColorAlpha;
    NSArray *_transitionImgs;
    WCCanvasRandomLayoutTransitionAnimationInfo *_transitionAnimationInfo;
    WCCanvasRandomLayoutEncoreInfo *_encoreInfo;
    NSString *_theChosenRandomCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *theChosenRandomCardId; // @synthesize theChosenRandomCardId=_theChosenRandomCardId;
@property(retain, nonatomic) WCCanvasRandomLayoutEncoreInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
@property(retain, nonatomic) WCCanvasRandomLayoutTransitionAnimationInfo *transitionAnimationInfo; // @synthesize transitionAnimationInfo=_transitionAnimationInfo;
@property(retain, nonatomic) NSArray *transitionImgs; // @synthesize transitionImgs=_transitionImgs;
@property(nonatomic) double hugeDiskTransitionColorAlpha; // @synthesize hugeDiskTransitionColorAlpha=_hugeDiskTransitionColorAlpha;
@property(retain, nonatomic) NSString *hugeDiskTransitionColor; // @synthesize hugeDiskTransitionColor=_hugeDiskTransitionColor;
@property(retain, nonatomic) NSString *hugeDiskTransitionImg; // @synthesize hugeDiskTransitionImg=_hugeDiskTransitionImg;
@property(nonatomic) unsigned int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

