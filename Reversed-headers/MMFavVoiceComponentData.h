//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSString;

@interface MMFavVoiceComponentData : MMComponentData
{
    _Bool _m_fromNote;
    int _sourceType;
    long long favType;
    NSString *m_des;
    NSString *m_title;
    NSString *_m_dataFmt;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_fromNote; // @synthesize m_fromNote=_m_fromNote;
@property(retain, nonatomic) NSString *m_dataFmt; // @synthesize m_dataFmt=_m_dataFmt;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(retain, nonatomic) NSString *m_des; // @synthesize m_des;
@property(nonatomic) long long favType; // @synthesize favType;

@end

