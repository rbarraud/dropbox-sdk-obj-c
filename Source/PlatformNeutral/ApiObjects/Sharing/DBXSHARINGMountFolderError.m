///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGInsufficientQuotaAmounts.h"
#import "DBXSHARINGMountFolderError.h"
#import "DBXSHARINGSharedFolderAccessError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGMountFolderError 

@synthesize accessError = _accessError;
@synthesize insufficientQuota = _insufficientQuota;

- (instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError *)accessError {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithInsideSharedFolder {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorInsideSharedFolder;
    }
    return self;
}

- (instancetype)initWithInsufficientQuota:(DBXSHARINGInsufficientQuotaAmounts *)insufficientQuota {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorInsufficientQuota;
        _insufficientQuota = insufficientQuota;
    }
    return self;
}

- (instancetype)initWithAlreadyMounted {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorAlreadyMounted;
    }
    return self;
}

- (instancetype)initWithNoPermission {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorNoPermission;
    }
    return self;
}

- (instancetype)initWithNotMountable {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorNotMountable;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXSHARINGMountFolderErrorOther;
    }
    return self;
}

- (BOOL)isAccessError {
    return _tag == DBXSHARINGMountFolderErrorAccessError;
}

- (BOOL)isInsideSharedFolder {
    return _tag == DBXSHARINGMountFolderErrorInsideSharedFolder;
}

- (BOOL)isInsufficientQuota {
    return _tag == DBXSHARINGMountFolderErrorInsufficientQuota;
}

- (BOOL)isAlreadyMounted {
    return _tag == DBXSHARINGMountFolderErrorAlreadyMounted;
}

- (BOOL)isNoPermission {
    return _tag == DBXSHARINGMountFolderErrorNoPermission;
}

- (BOOL)isNotMountable {
    return _tag == DBXSHARINGMountFolderErrorNotMountable;
}

- (BOOL)isOther {
    return _tag == DBXSHARINGMountFolderErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXSHARINGMountFolderErrorAccessError:
           return @"DBXSHARINGMountFolderErrorAccessError";
        case DBXSHARINGMountFolderErrorInsideSharedFolder:
           return @"DBXSHARINGMountFolderErrorInsideSharedFolder";
        case DBXSHARINGMountFolderErrorInsufficientQuota:
           return @"DBXSHARINGMountFolderErrorInsufficientQuota";
        case DBXSHARINGMountFolderErrorAlreadyMounted:
           return @"DBXSHARINGMountFolderErrorAlreadyMounted";
        case DBXSHARINGMountFolderErrorNoPermission:
           return @"DBXSHARINGMountFolderErrorNoPermission";
        case DBXSHARINGMountFolderErrorNotMountable:
           return @"DBXSHARINGMountFolderErrorNotMountable";
        case DBXSHARINGMountFolderErrorOther:
           return @"DBXSHARINGMountFolderErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXSHARINGSharedFolderAccessError *)accessError {
    if (_tag != DBXSHARINGMountFolderErrorAccessError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGMountFolderErrorAccessError`, but was %@.", [self getTagName]];
    }
    return _accessError;
}

- (DBXSHARINGInsufficientQuotaAmounts *)insufficientQuota {
    if (_tag != DBXSHARINGMountFolderErrorInsufficientQuota) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXSHARINGMountFolderErrorInsufficientQuota`, but was %@.", [self getTagName]];
    }
    return _insufficientQuota;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGMountFolderErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGMountFolderErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGMountFolderErrorSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGMountFolderErrorSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGMountFolderError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isAccessError]) {
        jsonDict = [[DBXSHARINGSharedFolderAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isInsideSharedFolder]) {
        jsonDict[@".tag"] = @"inside_shared_folder";
    }
    else if ([valueObj isInsufficientQuota]) {
        jsonDict = [[DBXSHARINGInsufficientQuotaAmountsSerializer serialize:valueObj.insufficientQuota] mutableCopy];
        jsonDict[@".tag"] = @"insufficient_quota";
    }
    else if ([valueObj isAlreadyMounted]) {
        jsonDict[@".tag"] = @"already_mounted";
    }
    else if ([valueObj isNoPermission]) {
        jsonDict[@".tag"] = @"no_permission";
    }
    else if ([valueObj isNotMountable]) {
        jsonDict[@".tag"] = @"not_mountable";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXSHARINGMountFolderError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"access_error"]) {
        DBXSHARINGSharedFolderAccessError *accessError = [DBXSHARINGSharedFolderAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DBXSHARINGMountFolderError alloc] initWithAccessError:accessError];
    }
    else if ([tag isEqualToString:@"inside_shared_folder"]) {
        return [[DBXSHARINGMountFolderError alloc] initWithInsideSharedFolder];
    }
    else if ([tag isEqualToString:@"insufficient_quota"]) {
        DBXSHARINGInsufficientQuotaAmounts *insufficientQuota = [DBXSHARINGInsufficientQuotaAmountsSerializer deserialize:valueDict];
        return [[DBXSHARINGMountFolderError alloc] initWithInsufficientQuota:insufficientQuota];
    }
    else if ([tag isEqualToString:@"already_mounted"]) {
        return [[DBXSHARINGMountFolderError alloc] initWithAlreadyMounted];
    }
    else if ([tag isEqualToString:@"no_permission"]) {
        return [[DBXSHARINGMountFolderError alloc] initWithNoPermission];
    }
    else if ([tag isEqualToString:@"not_mountable"]) {
        return [[DBXSHARINGMountFolderError alloc] initWithNotMountable];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXSHARINGMountFolderError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end