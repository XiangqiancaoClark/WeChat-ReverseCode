//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILabel.h"

@interface WCMusicTypeLabel : MMUILabel
{
    int _audioType;
}

@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithType:(int)arg1;

@end

