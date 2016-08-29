///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESSharingInfo;

/// 
/// The `DBXFILESSharingInfo` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Sharing info for a file or folder.
/// 
@interface DBXFILESSharingInfo : NSObject <DBXSerializable> 

/// True if the file or folder is inside a read-only shared folder.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull readOnly;

/// Full constructor for the `SharingInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithReadOnly:(NSNumber * _Nonnull)readOnly;

@end


/// 
/// The serialization class for the `DBXFILESSharingInfo` struct.
/// 
@interface DBXFILESSharingInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESSharingInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSharingInfo * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESSharingInfo` object from a
/// json-compatible dictionary representation.
+ (DBXFILESSharingInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end