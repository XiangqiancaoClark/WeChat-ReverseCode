//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface RightTopMenuData : MMObject <NSCoding>
{
    _Bool m_bShowNew;
    NSMutableArray *m_arrShowIDs;
    NSMutableDictionary *m_dicItemArchives;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dicItemArchives; // @synthesize m_dicItemArchives;
@property(retain, nonatomic) NSMutableArray *m_arrShowIDs; // @synthesize m_arrShowIDs;
@property(nonatomic) _Bool m_bShowNew; // @synthesize m_bShowNew;
- (_Bool)clickMenu:(id)arg1;
- (_Bool)updateConfig:(id)arg1;
- (_Bool)updateFromOld;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

