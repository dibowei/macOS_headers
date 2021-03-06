//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSView, TSTTypingChoice, TSWPStorage;

@protocol TSTTypingChoicesControllerDelegate <NSObject>
- (TSWPStorage *)storage;
- (BOOL)autocompletionViewHidden;
- (struct CGRect)autocompletionViewRect;
- (NSView *)autocompletionViewParent;
- (void)autocompletionChoicesDidHide;
- (void)autocompletionChoicesDidShow;
- (struct _TSTLexiconCompletionOptions)autocompletionOptions;
- (NSObject *)autocompletionEditor;
- (void)setAutocompletionText:(NSString *)arg1 prefixRange:(struct _NSRange)arg2;
- (void)didSelectChoice:(TSTTypingChoice *)arg1;
- (void)abandonCompletion;
- (void)willComplete;
@end

