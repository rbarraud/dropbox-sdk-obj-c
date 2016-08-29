///
/// Auto-generated by Stone, do not modify.
///

#import "DBXASYNCPollResultBase.h"
#import "DBXFILESUploadSessionFinishBatchJobStatus.h"
#import "DBXFILESUploadSessionFinishBatchResult.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadSessionFinishBatchJobStatus 

@synthesize complete = _complete;

- (instancetype)initWithInProgress {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionFinishBatchJobStatusInProgress;
    }
    return self;
}

- (instancetype)initWithComplete:(DBXFILESUploadSessionFinishBatchResult *)complete {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESUploadSessionFinishBatchJobStatusComplete;
        _complete = complete;
    }
    return self;
}

- (BOOL)isInProgress {
    return _tag == DBXFILESUploadSessionFinishBatchJobStatusInProgress;
}

- (BOOL)isComplete {
    return _tag == DBXFILESUploadSessionFinishBatchJobStatusComplete;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESUploadSessionFinishBatchJobStatusInProgress:
           return @"DBXFILESUploadSessionFinishBatchJobStatusInProgress";
        case DBXFILESUploadSessionFinishBatchJobStatusComplete:
           return @"DBXFILESUploadSessionFinishBatchJobStatusComplete";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXFILESUploadSessionFinishBatchResult *)complete {
    if (_tag != DBXFILESUploadSessionFinishBatchJobStatusComplete) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESUploadSessionFinishBatchJobStatusComplete`, but was %@.", [self getTagName]];
    }
    return _complete;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESUploadSessionFinishBatchJobStatusSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadSessionFinishBatchJobStatusSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadSessionFinishBatchJobStatusSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadSessionFinishBatchJobStatusSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadSessionFinishBatchJobStatus *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isInProgress]) {
        jsonDict[@".tag"] = @"in_progress";
    }
    else if ([valueObj isComplete]) {
        jsonDict = [[DBXFILESUploadSessionFinishBatchResultSerializer serialize:valueObj.complete] mutableCopy];
        jsonDict[@".tag"] = @"complete";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESUploadSessionFinishBatchJobStatus *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"in_progress"]) {
        return [[DBXFILESUploadSessionFinishBatchJobStatus alloc] initWithInProgress];
    }
    else if ([tag isEqualToString:@"complete"]) {
        DBXFILESUploadSessionFinishBatchResult *complete = [DBXFILESUploadSessionFinishBatchResultSerializer deserialize:valueDict];
        return [[DBXFILESUploadSessionFinishBatchJobStatus alloc] initWithComplete:complete];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end