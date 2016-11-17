///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMMembersUnsuspendArg;
@class DBTEAMUserSelectorArg;

#pragma mark - API Object

///
/// The `MembersUnsuspendArg` struct.
///
/// Exactly one of team_member_id, email, or external_id must be provided to
/// identify the user account.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersUnsuspendArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Identity of user to unsuspend.
@property (nonatomic, readonly) DBTEAMUserSelectorArg * _Nonnull user;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user Identity of user to unsuspend.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUser:(DBTEAMUserSelectorArg * _Nonnull)user;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersUnsuspendArg` struct.
///
@interface DBTEAMMembersUnsuspendArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersUnsuspendArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersUnsuspendArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersUnsuspendArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersUnsuspendArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersUnsuspendArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersUnsuspendArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersUnsuspendArg` object.
///
+ (DBTEAMMembersUnsuspendArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end