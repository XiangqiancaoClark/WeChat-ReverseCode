//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSTrackedSlideItem.h"

@interface TSTrackedTapItem : TSTrackedSlideItem
{
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) struct CGPoint pointRangeOnView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTouches:(id)arg1 rectage:(struct CGRect)arg2;

@end

