//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMAverageNumber : NSObject
{
    int _numValue;
    double _total;
}

@property(nonatomic) double total; // @synthesize total=_total;
@property(nonatomic) int numValue; // @synthesize numValue=_numValue;
- (id)description;
- (void)addOneNumber:(id)arg1;

@end

