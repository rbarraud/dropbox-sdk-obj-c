///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGSharedLinkPolicy;

/// 
/// The `DBXSHARINGSharedLinkPolicy` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Policy governing who can view shared links.
/// 
@interface DBXSHARINGSharedLinkPolicy : NSObject <DBXSerializable> 

/// The `DBXSHARINGSharedLinkPolicyTag` enum type represents the possible tag
/// states that the `DBXSHARINGSharedLinkPolicy` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGSharedLinkPolicyTag) {
    /// Links can be shared with anyone.
    DBXSHARINGSharedLinkPolicyAnyone,

    /// Links can only be shared among members of the shared folder.
    DBXSHARINGSharedLinkPolicyMembers,

    /// (no description).
    DBXSHARINGSharedLinkPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGSharedLinkPolicyTag tag;

/// Initializes union class with tag state of `Anyone`.
- (nonnull instancetype)initWithAnyone;

/// Initializes union class with tag state of `Members`.
- (nonnull instancetype)initWithMembers;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Anyone`.
- (BOOL)isAnyone;

/// Returns whether the union's current tag state has value `Members`.
- (BOOL)isMembers;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGSharedLinkPolicy` union.
/// 
@interface DBXSHARINGSharedLinkPolicySerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGSharedLinkPolicy` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharedLinkPolicy * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGSharedLinkPolicy` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGSharedLinkPolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end