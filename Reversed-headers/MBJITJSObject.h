//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBJSObject.h"

@class NSObject;

@interface MBJITJSObject : MBJSObject
{
    NSObject *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
- (id)getDataDict;
- (id)toDict;
- (id)toArray;
- (_Bool)toBoolean;
- (double)toNumber;
- (const void *)toRawArrayBuffer:(unsigned long long *)arg1;
- (id)toArrayBuffer;
- (const char *)toRawString;
- (id)toString;
- (void)setDict:(id)arg1 forName:(id)arg2;
- (void)setArray:(id)arg1 forName:(id)arg2;
- (void)setData:(id)arg1 forName:(id)arg2;
- (void)setBoolean:(_Bool)arg1 forName:(id)arg2;
- (void)setNumber:(double)arg1 forName:(id)arg2;
- (void)setString:(id)arg1 forName:(id)arg2;
- (void)setObject:(id)arg1 forName:(id)arg2;
- (id)get:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)init;

@end
