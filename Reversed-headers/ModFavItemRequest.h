//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface ModFavItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int favId; // @dynamic favId;
@property(nonatomic) unsigned int indexCount; // @dynamic indexCount;
@property(retain, nonatomic) NSMutableArray *indexList; // @dynamic indexList;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(retain, nonatomic) NSString *replaceObject; // @dynamic replaceObject;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end
