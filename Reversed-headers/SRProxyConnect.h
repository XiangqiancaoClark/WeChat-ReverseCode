//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSMutableArray, NSOutputStream, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SRProxyConnect : NSObject <NSStreamDelegate>
{
    CDUnknownBlockType _completion;
    NSString *_httpProxyHost;
    unsigned int _httpProxyPort;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    NSString *_socksProxyHost;
    unsigned int _socksProxyPort;
    NSString *_socksProxyUsername;
    NSString *_socksProxyPassword;
    _Bool _connectionRequiresSSL;
    NSMutableArray *_inputQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    _Bool _disableTcpNaglesAlgorithm;
    NSURL *_url;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool disableTcpNaglesAlgorithm; // @synthesize disableTcpNaglesAlgorithm=_disableTcpNaglesAlgorithm;
- (void)_writeData:(id)arg1;
- (void)_proxyHTTPHeadersDidFinish;
- (_Bool)_proxyProcessHTTPResponseWithData:(id)arg1;
- (void)_dequeueInput;
- (void)_processInputStream;
- (void)_proxyDidConnect;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_initializeStreams;
- (void)_openConnection;
- (void)_runPACScript:(id)arg1;
- (void)_fetchPAC:(id)arg1;
- (void)_readProxySettingWithType:(id)arg1 settings:(id)arg2;
- (void)_configureProxy;
- (void)_failWithError:(id)arg1;
- (void)_didConnect;
- (void)openNetworkStreamWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

