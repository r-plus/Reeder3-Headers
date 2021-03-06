//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface EDAMNotesMetadataResultSpec : NSObject <NSCoding>
{
    _Bool __includeTitle;
    _Bool __includeContentLength;
    _Bool __includeCreated;
    _Bool __includeUpdated;
    _Bool __includeUpdateSequenceNum;
    _Bool __includeNotebookGuid;
    _Bool __includeTagGuids;
    _Bool __includeAttributes;
    _Bool __includeLargestResourceMime;
    _Bool __includeLargestResourceSize;
    _Bool __includeTitle_isset;
    _Bool __includeContentLength_isset;
    _Bool __includeCreated_isset;
    _Bool __includeUpdated_isset;
    _Bool __includeUpdateSequenceNum_isset;
    _Bool __includeNotebookGuid_isset;
    _Bool __includeTagGuids_isset;
    _Bool __includeAttributes_isset;
    _Bool __includeLargestResourceMime_isset;
    _Bool __includeLargestResourceSize_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetIncludeLargestResourceSize;
- (_Bool)includeLargestResourceSizeIsSet;
@property(nonatomic, getter=includeLargestResourceSize, setter=setIncludeLargestResourceSize:) _Bool includeLargestResourceSize;
- (void)unsetIncludeLargestResourceMime;
- (_Bool)includeLargestResourceMimeIsSet;
@property(nonatomic, getter=includeLargestResourceMime, setter=setIncludeLargestResourceMime:) _Bool includeLargestResourceMime;
- (void)unsetIncludeAttributes;
- (_Bool)includeAttributesIsSet;
@property(nonatomic, getter=includeAttributes, setter=setIncludeAttributes:) _Bool includeAttributes;
- (void)unsetIncludeTagGuids;
- (_Bool)includeTagGuidsIsSet;
@property(nonatomic, getter=includeTagGuids, setter=setIncludeTagGuids:) _Bool includeTagGuids;
- (void)unsetIncludeNotebookGuid;
- (_Bool)includeNotebookGuidIsSet;
@property(nonatomic, getter=includeNotebookGuid, setter=setIncludeNotebookGuid:) _Bool includeNotebookGuid;
- (void)unsetIncludeUpdateSequenceNum;
- (_Bool)includeUpdateSequenceNumIsSet;
@property(nonatomic, getter=includeUpdateSequenceNum, setter=setIncludeUpdateSequenceNum:) _Bool includeUpdateSequenceNum;
- (void)unsetIncludeUpdated;
- (_Bool)includeUpdatedIsSet;
@property(nonatomic, getter=includeUpdated, setter=setIncludeUpdated:) _Bool includeUpdated;
- (void)unsetIncludeCreated;
- (_Bool)includeCreatedIsSet;
@property(nonatomic, getter=includeCreated, setter=setIncludeCreated:) _Bool includeCreated;
- (void)unsetIncludeContentLength;
- (_Bool)includeContentLengthIsSet;
@property(nonatomic, getter=includeContentLength, setter=setIncludeContentLength:) _Bool includeContentLength;
- (void)unsetIncludeTitle;
- (_Bool)includeTitleIsSet;
@property(nonatomic, getter=includeTitle, setter=setIncludeTitle:) _Bool includeTitle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncludeTitle:(_Bool)arg1 includeContentLength:(_Bool)arg2 includeCreated:(_Bool)arg3 includeUpdated:(_Bool)arg4 includeUpdateSequenceNum:(_Bool)arg5 includeNotebookGuid:(_Bool)arg6 includeTagGuids:(_Bool)arg7 includeAttributes:(_Bool)arg8 includeLargestResourceMime:(_Bool)arg9 includeLargestResourceSize:(_Bool)arg10;

@end

