//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOBluetoothHostController, NSDate;
@protocol IOBluetoothHandsFreeDelegate;

@interface IOBluetoothHandsFreeExpansion : NSObject
{
    id <IOBluetoothHandsFreeDelegate> _delegate;
    NSDate *_lastUpdatedInputVolume;
    NSDate *_lastUpdatedOutputVolume;
    IOBluetoothHostController *_hostController;
    BOOL _disconnectAfterDisconnectingSCO;
    unsigned short _SCOConnectionHandle;
}

@property unsigned short SCOConnectionHandle; // @synthesize SCOConnectionHandle=_SCOConnectionHandle;
@property BOOL disconnectAfterDisconnectingSCO; // @synthesize disconnectAfterDisconnectingSCO=_disconnectAfterDisconnectingSCO;
@property(retain) IOBluetoothHostController *hostController; // @synthesize hostController=_hostController;
@property(retain) NSDate *lastUpdatedOutputVolume; // @synthesize lastUpdatedOutputVolume=_lastUpdatedOutputVolume;
@property(retain) NSDate *lastUpdatedInputVolume; // @synthesize lastUpdatedInputVolume=_lastUpdatedInputVolume;
@property id <IOBluetoothHandsFreeDelegate> delegate; // @synthesize delegate=_delegate;

@end

