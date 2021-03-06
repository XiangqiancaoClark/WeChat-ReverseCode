//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol MTLCommandQueue, MTLDevice;

@interface TAVMediaMTLContext : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
    NSMutableDictionary *_libraryCache;
}

+ (id)sharedContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *libraryCache; // @synthesize libraryCache=_libraryCache;
@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) NSArray *libraries;
- (_Bool)registerLibrary:(id)arg1;
- (void)registerDefaultLibrary;
- (id)initWithDevice:(id)arg1;

@end

