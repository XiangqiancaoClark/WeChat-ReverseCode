//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTKViewDelegate-Protocol.h"

@class MTLRenderPassDescriptor, NSString, TAVMediaMetalView;
@protocol MTLBuffer, MTLRenderPipelineState, MTLTexture;

@interface TAVMediaRenderer : NSObject <MTKViewDelegate>
{
    _Bool _firstFrameDidAppear;
    CDUnknownBlockType _firstFrameAppearBlock;
    id <MTLRenderPipelineState> _renderPipelineState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id <MTLTexture> _inputTexture;
    id <MTLBuffer> _positionBuffer;
    id <MTLBuffer> _textureCoordinateBuffer;
    TAVMediaMetalView *_metalView;
    struct CGSize _textureSize;
}

+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool firstFrameDidAppear; // @synthesize firstFrameDidAppear=_firstFrameDidAppear;
@property(nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(retain, nonatomic) TAVMediaMetalView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) id <MTLBuffer> textureCoordinateBuffer; // @synthesize textureCoordinateBuffer=_textureCoordinateBuffer;
@property(retain, nonatomic) id <MTLBuffer> positionBuffer; // @synthesize positionBuffer=_positionBuffer;
@property(retain, nonatomic) id <MTLTexture> inputTexture; // @synthesize inputTexture=_inputTexture;
@property(retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
@property(copy, nonatomic) CDUnknownBlockType firstFrameAppearBlock; // @synthesize firstFrameAppearBlock=_firstFrameAppearBlock;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)refreshMetalView;
- (void)updatePixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithMetalKitView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
