//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveBeautyDataItem : NSObject
{
    float _defaultValue;
    float _value;
    unsigned long long _type;
    NSString *_titleLocalLanguageKey;
    NSString *_saveKey;
}

+ (_Bool)getIfNeedCutOffWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *saveKey; // @synthesize saveKey=_saveKey;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *titleLocalLanguageKey; // @synthesize titleLocalLanguageKey=_titleLocalLanguageKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)existMutuallyExclusiveItem;
- (_Bool)isValueChangeDoubleSide;

@end
