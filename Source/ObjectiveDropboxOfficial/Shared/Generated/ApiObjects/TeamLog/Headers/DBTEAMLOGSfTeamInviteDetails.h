///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSfTeamInviteDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SfTeamInviteDetails` struct.
///
/// Invited team members to shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSfTeamInviteDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset position in the Assets list.
@property (nonatomic, readonly) NSNumber *targetAssetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

/// Sharing permission. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharingPermission;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetAssetIndex Target asset position in the Assets list.
/// @param originalFolderName Original shared folder name.
/// @param sharingPermission Sharing permission. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetAssetIndex:(NSNumber *)targetAssetIndex
                      originalFolderName:(NSString *)originalFolderName
                       sharingPermission:(nullable NSString *)sharingPermission;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetAssetIndex Target asset position in the Assets list.
/// @param originalFolderName Original shared folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetAssetIndex:(NSNumber *)targetAssetIndex originalFolderName:(NSString *)originalFolderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SfTeamInviteDetails` struct.
///
@interface DBTEAMLOGSfTeamInviteDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSfTeamInviteDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSfTeamInviteDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamInviteDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSfTeamInviteDetails *)instance;

///
/// Deserializes `DBTEAMLOGSfTeamInviteDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSfTeamInviteDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSfTeamInviteDetails` object.
///
+ (DBTEAMLOGSfTeamInviteDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END