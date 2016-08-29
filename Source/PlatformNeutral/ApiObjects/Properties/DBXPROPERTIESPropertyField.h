///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXPROPERTIESPropertyField;

/// 
/// The `DBXPROPERTIESPropertyField` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXPROPERTIESPropertyField : NSObject <DBXSerializable> 

/// This is the name or key of a custom property in a property template. File
/// property names can be up to 256 bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

/// Value of a custom property attached to a file. Values can be up to 1024
/// bytes.
@property (nonatomic, readonly, copy) NSString * _Nonnull value;

/// Full constructor for the `PropertyField` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name value:(NSString * _Nonnull)value;

@end


/// 
/// The serialization class for the `DBXPROPERTIESPropertyField` struct.
/// 
@interface DBXPROPERTIESPropertyFieldSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXPROPERTIESPropertyField` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXPROPERTIESPropertyField * _Nonnull)obj;

/// Returns an instantiation of the `DBXPROPERTIESPropertyField` object from a
/// json-compatible dictionary representation.
+ (DBXPROPERTIESPropertyField * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end