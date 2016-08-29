///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupMemberSelectorError;

/// 
/// The `DBXTEAMGroupMemberSelectorError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error that can be raised when GroupMemberSelector is used, and the user is
/// required to be a member of the specified group.
/// 
@interface DBXTEAMGroupMemberSelectorError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupMemberSelectorErrorTag` enum type represents the possible
/// tag states that the `DBXTEAMGroupMemberSelectorError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMGroupMemberSelectorErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    DBXTEAMGroupMemberSelectorErrorGroupNotFound,

    /// (no description).
    DBXTEAMGroupMemberSelectorErrorOther,

    /// The specified user is not a member of this group.
    DBXTEAMGroupMemberSelectorErrorMemberNotInGroup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupMemberSelectorErrorTag tag;

/// Initializes union class with tag state of `GroupNotFound`.
- (nonnull instancetype)initWithGroupNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `MemberNotInGroup`.
- (nonnull instancetype)initWithMemberNotInGroup;

/// Returns whether the union's current tag state has value `GroupNotFound`.
- (BOOL)isGroupNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `MemberNotInGroup`.
- (BOOL)isMemberNotInGroup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupMemberSelectorError` union.
/// 
@interface DBXTEAMGroupMemberSelectorErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupMemberSelectorError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupMemberSelectorError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupMemberSelectorError` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMGroupMemberSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end