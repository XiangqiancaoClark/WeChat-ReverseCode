//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface MultiArrayFeatureProvider : NSObject <MLFeatureProvider>
{
    const vector_1994dafb *_inputs;
    NSSet *_featureNames;
    int _coreMlVersion;
}

@property(readonly, nonatomic) int coreMlVersion; // @synthesize coreMlVersion=_coreMlVersion;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInputs:(const vector_1994dafb *)arg1 coreMlVersion:(int)arg2;

@end

