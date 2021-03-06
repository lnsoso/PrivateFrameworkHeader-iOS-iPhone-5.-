/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent  {
}

@property int action;
@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property(retain) NSString * description;
@property(retain) NSString * summary;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * x_wr_alarmuid;
@property(retain) NSString * x_apple_proximity;
@property(retain) ICSStructuredLocation * x_apple_structured_location;

+ (int)actionFromICSString:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;
+ (id)name;

- (void)fixAlarm;
- (id)x_apple_proximity;
- (id)x_wr_alarmuid;
- (void)setX_apple_proximity:(id)arg1;
- (void)setX_wr_alarmuid:(id)arg1;
- (void)setAction:(int)arg1;
- (int)action;

@end
