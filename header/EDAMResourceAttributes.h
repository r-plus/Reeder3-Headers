//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMLazyMap, NSString;

@interface EDAMResourceAttributes : NSObject <NSCoding>
{
    NSString *__sourceURL;
    long long __timestamp;
    double __latitude;
    double __longitude;
    double __altitude;
    NSString *__cameraMake;
    NSString *__cameraModel;
    _Bool __clientWillIndex;
    NSString *__recoType;
    NSString *__fileName;
    _Bool __attachment;
    EDAMLazyMap *__applicationData;
    _Bool __sourceURL_isset;
    _Bool __timestamp_isset;
    _Bool __latitude_isset;
    _Bool __longitude_isset;
    _Bool __altitude_isset;
    _Bool __cameraMake_isset;
    _Bool __cameraModel_isset;
    _Bool __clientWillIndex_isset;
    _Bool __recoType_isset;
    _Bool __fileName_isset;
    _Bool __attachment_isset;
    _Bool __applicationData_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetApplicationData;
- (_Bool)applicationDataIsSet;
@property(retain, nonatomic, getter=applicationData, setter=setApplicationData:) EDAMLazyMap *applicationData;
- (void)unsetAttachment;
- (_Bool)attachmentIsSet;
@property(nonatomic, getter=attachment, setter=setAttachment:) _Bool attachment;
- (void)unsetFileName;
- (_Bool)fileNameIsSet;
@property(retain, nonatomic, getter=fileName, setter=setFileName:) NSString *fileName;
- (void)unsetRecoType;
- (_Bool)recoTypeIsSet;
@property(retain, nonatomic, getter=recoType, setter=setRecoType:) NSString *recoType;
- (void)unsetClientWillIndex;
- (_Bool)clientWillIndexIsSet;
@property(nonatomic, getter=clientWillIndex, setter=setClientWillIndex:) _Bool clientWillIndex;
- (void)unsetCameraModel;
- (_Bool)cameraModelIsSet;
@property(retain, nonatomic, getter=cameraModel, setter=setCameraModel:) NSString *cameraModel;
- (void)unsetCameraMake;
- (_Bool)cameraMakeIsSet;
@property(retain, nonatomic, getter=cameraMake, setter=setCameraMake:) NSString *cameraMake;
- (void)unsetAltitude;
- (_Bool)altitudeIsSet;
@property(nonatomic, getter=altitude, setter=setAltitude:) double altitude;
- (void)unsetLongitude;
- (_Bool)longitudeIsSet;
@property(nonatomic, getter=longitude, setter=setLongitude:) double longitude;
- (void)unsetLatitude;
- (_Bool)latitudeIsSet;
@property(nonatomic, getter=latitude, setter=setLatitude:) double latitude;
- (void)unsetTimestamp;
- (_Bool)timestampIsSet;
@property(nonatomic, getter=timestamp, setter=setTimestamp:) long long timestamp;
- (void)unsetSourceURL;
- (_Bool)sourceURLIsSet;
@property(retain, nonatomic, getter=sourceURL, setter=setSourceURL:) NSString *sourceURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1 timestamp:(long long)arg2 latitude:(double)arg3 longitude:(double)arg4 altitude:(double)arg5 cameraMake:(id)arg6 cameraModel:(id)arg7 clientWillIndex:(_Bool)arg8 recoType:(id)arg9 fileName:(id)arg10 attachment:(_Bool)arg11 applicationData:(id)arg12;

@end
