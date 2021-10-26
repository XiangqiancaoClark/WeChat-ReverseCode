//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMapTable, NSMutableDictionary, WCFinderDynamicIconFetcher, WCFinderGlobalWordingIconConfig;

@interface WCFinderWordingIconManager : NSObject
{
    NSData *_lastServerConfigData;
    NSDictionary *_defaultWordingConfigMap;
    NSMutableDictionary *_feedContentWordingConfigMap;
    CDUnknownBlockType _serverConfigSetter;
    CDUnknownBlockType _globalConfigSetter;
    WCFinderGlobalWordingIconConfig *_globalConfig;
    WCFinderGlobalWordingIconConfig *_serverGlobalConfig;
    NSMapTable *_imageCacheMap;
    NSMutableDictionary *_iconDownloadProcessMap;
    WCFinderDynamicIconFetcher *_iconFetcher;
    NSMutableDictionary *_dynamicImageMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dynamicImageMap; // @synthesize dynamicImageMap=_dynamicImageMap;
@property(retain, nonatomic) WCFinderDynamicIconFetcher *iconFetcher; // @synthesize iconFetcher=_iconFetcher;
@property(retain, nonatomic) NSMutableDictionary *iconDownloadProcessMap; // @synthesize iconDownloadProcessMap=_iconDownloadProcessMap;
@property(retain, nonatomic) NSMapTable *imageCacheMap; // @synthesize imageCacheMap=_imageCacheMap;
@property(retain, nonatomic) WCFinderGlobalWordingIconConfig *serverGlobalConfig; // @synthesize serverGlobalConfig=_serverGlobalConfig;
@property(retain, nonatomic) WCFinderGlobalWordingIconConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(copy, nonatomic) CDUnknownBlockType globalConfigSetter; // @synthesize globalConfigSetter=_globalConfigSetter;
@property(copy, nonatomic) CDUnknownBlockType serverConfigSetter; // @synthesize serverConfigSetter=_serverConfigSetter;
@property(retain, nonatomic) NSMutableDictionary *feedContentWordingConfigMap; // @synthesize feedContentWordingConfigMap=_feedContentWordingConfigMap;
@property(retain, nonatomic) NSDictionary *defaultWordingConfigMap; // @synthesize defaultWordingConfigMap=_defaultWordingConfigMap;
@property(retain, nonatomic) NSData *lastServerConfigData; // @synthesize lastServerConfigData=_lastServerConfigData;
- (id)dynamicIdIconUrl:(long long)arg1;
- (id)getValueForObject:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)getValueForConfig:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (id)fetchIconConfigWithIdentifier:(SEL)arg1;
- (id)fetchDynamicIconWithIconName:(id)arg1 args:(id)arg2 defaultIconSVGName:(id)arg3;
- (id)fetchNamedIdDynamicIconWithArgs:(id)arg1;
- (id)fetchGlobalDynamicIconWithArgs:(id)arg1;
- (id)fetchDynamicIconWithArgs:(id)arg1;
- (id)richTextForId:(long long)arg1 contentType:(long long)arg2;
- (id)wordingValueForFeedContentType:(long long)arg1 wordingIdentify:(SEL)arg2;
- (id)wordingForSelector:(SEL)arg1;
- (void)updateWithSyncPbExtInfo:(id)arg1;
- (id)defaultWordingConfigForFeedContentType:(long long)arg1;
- (id)wordingConfigForFeedContentType:(long long)arg1;
- (void)prepareConfigs;
- (id)init;

@end
