//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _updateBlock;
}

@property(copy) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_updateBlock;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_block;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end

