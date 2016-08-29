///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESRemovePropertiesArg;

/// 
/// The `DBXFILESRemovePropertiesArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESRemovePropertiesArg : NSObject <DBXSerializable> 

/// A unique identifier for the file.
@property (nonatomic, readonly, copy) NSString * _Nonnull path;

/// A list of identifiers for a property template created by route
/// properties/template/add.
@property (nonatomic, readonly) NSArray<NSString *> * _Nonnull propertyTemplateIds;

/// Full constructor for the `RemovePropertiesArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path propertyTemplateIds:(NSArray<NSString *> * _Nonnull)propertyTemplateIds;

@end


/// 
/// The serialization class for the `DBXFILESRemovePropertiesArg` struct.
/// 
@interface DBXFILESRemovePropertiesArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESRemovePropertiesArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESRemovePropertiesArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESRemovePropertiesArg` object from a
/// json-compatible dictionary representation.
+ (DBXFILESRemovePropertiesArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end