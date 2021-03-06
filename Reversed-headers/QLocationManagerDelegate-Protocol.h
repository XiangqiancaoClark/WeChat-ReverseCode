//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, CLLocationManager, NSError, QLocationManager;

@protocol QLocationManagerDelegate <NSObject>
- (void)locationManagerDidChangeAuthorization:(CLLocationManager *)arg1;
- (void)locationManager:(QLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didFailWithError:(NSError *)arg2;
@end

