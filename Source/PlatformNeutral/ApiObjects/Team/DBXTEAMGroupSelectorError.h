///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupSelectorError;

/// 
/// The `DBXTEAMGroupSelectorError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error that can be raised when GroupSelector is used.
/// 
@interface DBXTEAMGroupSelectorError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupSelectorErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMGroupSelectorError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMGroupSelectorErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    DBXTEAMGroupSelectorErrorGroupNotFound,

    /// (no description).
    DBXTEAMGroupSelectorErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupSelectorErrorTag tag;

/// Initializes union class with tag state of `GroupNotFound`.
- (nonnull instancetype)initWithGroupNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `GroupNotFound`.
- (BOOL)isGroupNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupSelectorError` union.
/// 
@interface DBXTEAMGroupSelectorErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupSelectorError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupSelectorError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupSelectorError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGroupSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end