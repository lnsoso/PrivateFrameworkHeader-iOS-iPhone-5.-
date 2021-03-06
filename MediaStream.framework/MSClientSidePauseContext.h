/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSString, NSTimer, CPDistributedMessagingCenter;

@interface MSClientSidePauseContext : NSObject  {
    CPDistributedMessagingCenter *_server;
    NSTimer *_timer;
    NSString *_UUID;
}


- (void)_ping;
- (id)initWithServer:(id)arg1;
- (void)resume;
- (void)_timerDidFire:(id)arg1;
- (void)dealloc;

@end
