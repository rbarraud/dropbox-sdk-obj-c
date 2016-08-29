///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESListFolderError;
@class DBXFILESLookupError;

/// 
/// The `DBXFILESListFolderError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESListFolderError : NSObject <DBXSerializable> 

/// The `DBXFILESListFolderErrorTag` enum type represents the possible tag
/// states that the `DBXFILESListFolderError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESListFolderErrorTag) {
    /// (no description).
    DBXFILESListFolderErrorPath,

    /// (no description).
    DBXFILESListFolderErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESListFolderErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESListFolderError` union.
/// 
@interface DBXFILESListFolderErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESListFolderError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESListFolderError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESListFolderError` object from a
/// json-compatible dictionary representation.
+ (DBXFILESListFolderError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end