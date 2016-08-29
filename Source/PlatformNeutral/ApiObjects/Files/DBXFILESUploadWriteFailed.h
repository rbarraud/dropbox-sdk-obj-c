///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadWriteFailed;
@class DBXFILESWriteError;

/// 
/// The `DBXFILESUploadWriteFailed` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadWriteFailed : NSObject <DBXSerializable> 

/// The reason why the file couldn't be saved.
@property (nonatomic, readonly) DBXFILESWriteError * _Nonnull reason;

/// The upload session ID; this may be used to retry the commit.
@property (nonatomic, readonly, copy) NSString * _Nonnull uploadSessionId;

/// Full constructor for the `UploadWriteFailed` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithReason:(DBXFILESWriteError * _Nonnull)reason uploadSessionId:(NSString * _Nonnull)uploadSessionId;

@end


/// 
/// The serialization class for the `DBXFILESUploadWriteFailed` struct.
/// 
@interface DBXFILESUploadWriteFailedSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUploadWriteFailed` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadWriteFailed * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESUploadWriteFailed` object from a
/// json-compatible dictionary representation.
+ (DBXFILESUploadWriteFailed * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end