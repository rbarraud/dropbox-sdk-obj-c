///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFailureDetailsLogInfo;
@class DBTEAMLOGLoginFailDetails;
@class DBTEAMLOGLoginMethod;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LoginFailDetails` struct.
///
/// Failed to sign in.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLoginFailDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Tells if the login device is EMM managed. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) NSNumber *isEmmManaged;

/// Login method.
@property (nonatomic, readonly) DBTEAMLOGLoginMethod *loginMethod;

/// Error details.
@property (nonatomic, readonly) DBTEAMLOGFailureDetailsLogInfo *errorDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param loginMethod Login method.
/// @param errorDetails Error details.
/// @param isEmmManaged Tells if the login device is EMM managed. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithLoginMethod:(DBTEAMLOGLoginMethod *)loginMethod
                       errorDetails:(DBTEAMLOGFailureDetailsLogInfo *)errorDetails
                       isEmmManaged:(nullable NSNumber *)isEmmManaged;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param loginMethod Login method.
/// @param errorDetails Error details.
///
/// @return An initialized instance.
///
- (instancetype)initWithLoginMethod:(DBTEAMLOGLoginMethod *)loginMethod
                       errorDetails:(DBTEAMLOGFailureDetailsLogInfo *)errorDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LoginFailDetails` struct.
///
@interface DBTEAMLOGLoginFailDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGLoginFailDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGLoginFailDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginFailDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGLoginFailDetails *)instance;

///
/// Deserializes `DBTEAMLOGLoginFailDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginFailDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGLoginFailDetails` object.
///
+ (DBTEAMLOGLoginFailDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END