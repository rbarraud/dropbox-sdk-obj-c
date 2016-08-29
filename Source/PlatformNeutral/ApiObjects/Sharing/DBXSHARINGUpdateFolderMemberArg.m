///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAccessLevel.h"
#import "DBXSHARINGMemberSelector.h"
#import "DBXSHARINGUpdateFolderMemberArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGUpdateFolderMemberArg 

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId member:(DBXSHARINGMemberSelector *)member accessLevel:(DBXSHARINGAccessLevel *)accessLevel {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](sharedFolderId);

    self = [super init];
    if (self != nil) {
        _sharedFolderId = sharedFolderId;
        _member = member;
        _accessLevel = accessLevel;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGUpdateFolderMemberArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGUpdateFolderMemberArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGUpdateFolderMemberArgSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGUpdateFolderMemberArgSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGUpdateFolderMemberArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
    jsonDict[@"member"] = [DBXSHARINGMemberSelectorSerializer serialize:valueObj.member];
    jsonDict[@"access_level"] = [DBXSHARINGAccessLevelSerializer serialize:valueObj.accessLevel];

    return jsonDict;
}

+ (DBXSHARINGUpdateFolderMemberArg *)deserialize:(NSDictionary *)valueDict {
    NSString *sharedFolderId = valueDict[@"shared_folder_id"];
    DBXSHARINGMemberSelector *member = [DBXSHARINGMemberSelectorSerializer deserialize:valueDict[@"member"]];
    DBXSHARINGAccessLevel *accessLevel = [DBXSHARINGAccessLevelSerializer deserialize:valueDict[@"access_level"]];

    return [[DBXSHARINGUpdateFolderMemberArg alloc] initWithSharedFolderId:sharedFolderId member:member accessLevel:accessLevel];
}

@end