//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGPUOneTextureRender.h"

@interface MMGPUTwoTextureRender : MMGPUOneTextureRender
{
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (int)renderToTextue:(int)arg1 inputSecondTexture:(int)arg2 inputRes:(struct CGSize)arg3;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

