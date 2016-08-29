///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESPreviewArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESPreviewArg 

- (instancetype)initWithPath:(NSString *)path rev:(NSString *)rev {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"(/(.|[\\r\\n])*|id:.*)|(rev:[0-9a-f]{9,})|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:@(9) maxLength:nil pattern:@"[0-9a-f]+"]](rev);

    self = [super init];
    if (self != nil) {
        _path = path;
        _rev = rev;
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path rev:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESPreviewArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESPreviewArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESPreviewArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESPreviewArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESPreviewArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    if (valueObj.rev) {
        jsonDict[@"rev"] = valueObj.rev;
    }

    return jsonDict;
}

+ (DBXFILESPreviewArg *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    NSString *rev = valueDict[@"rev"] ?: nil;

    return [[DBXFILESPreviewArg alloc] initWithPath:path rev:rev];
}

@end