///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESCreateFolderArg;

/// 
/// The `DBXFILESCreateFolderArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESCreateFolderArg : NSObject <DBXSerializable> 

/// Path in the user's Dropbox to create.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// Full constructor for the `CreateFolderArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end


/// 
/// The serialization class for the `DBXFILESCreateFolderArg` struct.
/// 
@interface DBXFILESCreateFolderArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESCreateFolderArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESCreateFolderArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESCreateFolderArg` object from a
/// json-compatible dictionary representation.
+ (DBXFILESCreateFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end