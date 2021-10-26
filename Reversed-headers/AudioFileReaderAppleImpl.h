//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, TXCAudioFileExtensionRepairer;
@protocol AudioFileReaderAppleImplDelegate;

@interface AudioFileReaderAppleImpl : NSObject
{
    struct unique_ptr<txliteav::audio::SilkResampler, std::__1::default_delete<txliteav::audio::SilkResampler>> _resampler;
    struct unique_ptr<txliteav::AudioFrame, std::__1::default_delete<txliteav::AudioFrame>> _inputFrame;
    struct unique_ptr<txliteav::AudioFrame, std::__1::default_delete<txliteav::AudioFrame>> _outFrame;
    _Bool _isResampleInited;
    _Bool _isReadingCompleted;
    int _sampleRate;
    int _channels;
    id <AudioFileReaderAppleImplDelegate> _delegate;
    AVAsset *_asset;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    TXCAudioFileExtensionRepairer *_fileRepairer;
}

+ (_Bool)isFileUrl:(id)arg1;
+ (_Bool)isNetStream:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCAudioFileExtensionRepairer *fileRepairer; // @synthesize fileRepairer=_fileRepairer;
@property(nonatomic) _Bool isReadingCompleted; // @synthesize isReadingCompleted=_isReadingCompleted;
@property(nonatomic) _Bool isResampleInited; // @synthesize isResampleInited=_isResampleInited;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) AVAssetReaderTrackOutput *readerOutput; // @synthesize readerOutput=_readerOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <AudioFileReaderAppleImplDelegate> delegate; // @synthesize delegate=_delegate;
- (void)parseAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 description:(const struct AudioStreamBasicDescription *)arg2;
- (_Bool)setupAudioReaderWithAsset:(id)arg1 fromStartTime:(float)arg2;
- (CDStruct_1b6d18a9)durationOfAsset:(id)arg1;
- (void)resampleAudioFrame:(struct AudioFrame *)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 description:(const struct AudioStreamBasicDescription *)arg3;
- (id)buildAssetFromUrl:(id)arg1;
- (const struct AudioStreamBasicDescription *)getSampleBufferDescription:(struct opaqueCMSampleBuffer *)arg1;
- (long long)getDuration;
- (void)seekToTimestamp:(unsigned long long)arg1;
- (void)setSampleRate:(int)arg1 channels:(int)arg2;
- (void)decode;
- (void)close;
- (_Bool)openFile:(id)arg1;
@property(readonly, nonatomic) struct AudioFrame *outFrame;
@property(readonly, nonatomic) struct AudioFrame *inputFrame;
@property(readonly, nonatomic) struct SilkResampler *resampler;
- (void)dealloc;
- (id)init;

@end
