//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSTrackedItem.h"

#import "TSFinalTrackedItem-Protocol.h"

@class NSArray;

@interface TSTrackedSlideItem : TSTrackedItem <TSFinalTrackedItem>
{
    NSArray *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *samplingTouches;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (id)initWithTouches:(id)arg1;

@end

