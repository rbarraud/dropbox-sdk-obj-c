///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersListContinueError;

/// 
/// The `DBXTEAMMembersListContinueError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersListContinueError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersListContinueErrorTag` enum type represents the possible
/// tag states that the `DBXTEAMMembersListContinueError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMembersListContinueErrorTag) {
    /// The cursor is invalid.
    DBXTEAMMembersListContinueErrorInvalidCursor,

    /// (no description).
    DBXTEAMMembersListContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMembersListContinueErrorTag tag;

/// Initializes union class with tag state of `InvalidCursor`.
- (nonnull instancetype)initWithInvalidCursor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `InvalidCursor`.
- (BOOL)isInvalidCursor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMMembersListContinueError` union.
/// 
@interface DBXTEAMMembersListContinueErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMembersListContinueError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersListContinueError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMembersListContinueError` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMMembersListContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end