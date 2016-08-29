///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESSearchMatch;
@class DBXFILESSearchResult;

/// 
/// The `DBXFILESSearchResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESSearchResult : NSObject <DBXSerializable> 

/// A list (possibly empty) of matches for the query.
@property (nonatomic, readonly) NSArray<DBXFILESSearchMatch *> * _Nonnull matches;

/// Used for paging. If true, indicates there is another page of results
/// available that can be fetched by calling search again.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull more;

/// Used for paging. Value to set the start argument to when calling search to
/// fetch the next page of results.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull start;

/// Full constructor for the `SearchResult` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithMatches:(NSArray<DBXFILESSearchMatch *> * _Nonnull)matches more:(NSNumber * _Nonnull)more start:(NSNumber * _Nonnull)start;

@end


/// 
/// The serialization class for the `DBXFILESSearchResult` struct.
/// 
@interface DBXFILESSearchResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESSearchResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSearchResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESSearchResult` object from a
/// json-compatible dictionary representation.
+ (DBXFILESSearchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end