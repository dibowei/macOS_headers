//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHFileGroups, MPICloudBackupDecryptor, NSArray;

__attribute__((visibility("hidden")))
@interface ICFileDownloader : NSObject
{
    NSArray *_files;
    CHFileGroups *_fileGroups;
    MPICloudBackupDecryptor *_decryptor;
}

@property(retain, nonatomic) MPICloudBackupDecryptor *decryptor; // @synthesize decryptor=_decryptor;
@property(retain, nonatomic) CHFileGroups *fileGroups; // @synthesize fileGroups=_fileGroups;
@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (id)createTempFilesForGroup:(id)arg1 withFileAttributes:(id)arg2 dataChunkOps:(id)arg3;
- (id)writeFilesWithPaths:(id)arg1;
- (id)downloadFileGroup:(id)arg1 withFileAttrs:(id)arg2;
- (id)download;
- (id)initWithFiles:(id)arg1 fileGroups:(id)arg2 decryptor:(id)arg3;

@end

