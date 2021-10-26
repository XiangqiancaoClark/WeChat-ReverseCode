//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import "WCTColumnCoding-Protocol.h"
#import "WCTValueProtocol-Protocol.h"

@interface NSData (WWKApiSafeCast) <WCTValueProtocol, WCTColumnCoding>
+ (id)wwkapi_nilobj;
+ (id)decodeWebSafeBase64ForString:(id)arg1;
+ (id)decodeBase64ForString:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)qb_dataWithName:(id)arg1 inAttributes:(id)arg2;
+ (id)QMapDataWithBase64String:(id)arg1;
- (id)encodeWebSafeBase64ForData;
- (id)encodeBase64ForData;
- (id)gunzippedWithError:(id *)arg1;
- (id)gzippedWithCompressionLevel:(int)arg1 error:(id *)arg2;
- (id)numberValue;
- (id)stringValue;
- (id)dataValue;
- (id)archivedWCTValue;
- (id)SHA256;
- (id)SHA1;
- (id)rsaEncryptWithPublicPemKey:(id)arg1;
- (id)dataByHealingUTF8Stream;
- (id)MD5;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2;
- (id)Q_hexString;
- (id)Q_base64RFC4648;
- (id)QMapDataUnload:(id)arg1 withFactor:(id)arg2;
- (id)QMapDataConversion:(id)arg1 withFactor:(id)arg2;
- (id)qmap_sha1String;
- (id)QMapMd5String;
- (id)QMapDeflateValue;
- (id)QMapInflateValue;
@end
