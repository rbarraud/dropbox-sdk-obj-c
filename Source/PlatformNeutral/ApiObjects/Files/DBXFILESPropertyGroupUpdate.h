///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESPropertyGroupUpdate;
@class DBXPROPERTIESPropertyField;

/// 
/// The `DBXFILESPropertyGroupUpdate` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESPropertyGroupUpdate : NSObject <DBXSerializable> 

/// A unique identifier for a property template.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateId;

/// List of property fields to update if the field already exists. If the field
/// doesn't exist, add the field to the property group.
@property (nonatomic, readonly) NSArray<DBXPROPERTIESPropertyField *> * _Nullable addOrUpdateFields;

/// List of property field names to remove from property group if the field
/// exists.
@property (nonatomic, readonly) NSArray<NSString *> * _Nullable removeFields;

/// Full constructor for the `PropertyGroupUpdate` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId addOrUpdateFields:(NSArray<DBXPROPERTIESPropertyField *> * _Nullable)addOrUpdateFields removeFields:(NSArray<NSString *> * _Nullable)removeFields;

/// Convenience constructor for the `PropertyGroupUpdate` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end


/// 
/// The serialization class for the `DBXFILESPropertyGroupUpdate` struct.
/// 
@interface DBXFILESPropertyGroupUpdateSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESPropertyGroupUpdate` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESPropertyGroupUpdate * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESPropertyGroupUpdate` object from a
/// json-compatible dictionary representation.
+ (DBXFILESPropertyGroupUpdate * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end