//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@interface TSPViewStateMetadata : TSPObject
{
    struct ViewStateMetadata _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tsp_identifier;
- (struct ViewStateMetadata *)message;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end

