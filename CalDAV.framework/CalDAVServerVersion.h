/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    double _version;
    BOOL _supportsTimeRangeFilter;
    BOOL _supportsTodoTimeRangeFilter;
    BOOL _supportsTimeRangeFilterWithoutEndDate;
    BOOL _supportsTimeRangeFilterOnInbox;
    BOOL _supportsAutoSchedule;
    BOOL _supportsPrivateComments;
    BOOL _supportsSharing;
    BOOL _supportsSharingNoScheduling;
    BOOL _supportsCalendarProxy;
    BOOL _supportsInboxAvailability;
    BOOL _supportsPrivateEvents;
    BOOL _supportsSubscriptionCalendars;
    BOOL _supportsPrincipalPropertySearch;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _supportsRequestCompression;
    NSSet *_complianceClasses;
}

@property(readonly) NSString * type;
@property BOOL supportsRequestCompression;
@property BOOL supportsExtendedCalendarQuery;
@property(retain) NSSet * complianceClasses;
@property BOOL supportsPrincipalPropertySearch;
@property BOOL supportsSubscriptionCalendars;
@property BOOL supportsPrivateEvents;
@property BOOL supportsInboxAvailability;
@property BOOL supportsCalendarProxy;
@property BOOL supportsSharingNoScheduling;
@property BOOL supportsSharing;
@property BOOL supportsPrivateComments;
@property BOOL supportsAutoSchedule;
@property BOOL supportsTimeRangeFilterOnInbox;
@property BOOL supportsTimeRangeFilterWithoutEndDate;
@property BOOL supportsTodoTimeRangeFilter;
@property BOOL supportsTimeRangeFilter;
@property double version;

+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;

- (void)setVersion:(double)arg1;
- (double)version;
- (id)type;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)supportsRequestCompression;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)supportsPrivateComments;
- (BOOL)supportsAutoSchedule;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (BOOL)supportsTimeRangeFilterOnInbox;
- (BOOL)supportsTodoTimeRangeFilter;
- (BOOL)supportsTimeRangeFilter;
- (id)propertyValue;
- (void)setSupportsPrincipalPropertySearch:(BOOL)arg1;
- (BOOL)supportsSubscriptionCalendars;
- (void)setSupportsSubscriptionCalendars:(BOOL)arg1;
- (BOOL)supportsPrivateEvents;
- (void)setSupportsPrivateEvents:(BOOL)arg1;
- (BOOL)supportsCalendarProxy;
- (void)setSupportsCalendarProxy:(BOOL)arg1;
- (BOOL)supportsSharingNoScheduling;
- (void)setSupportsSharingNoScheduling:(BOOL)arg1;
- (BOOL)supportsSharing;
- (void)setSupportsSharing:(BOOL)arg1;
- (void)setSupportsPrivateComments:(BOOL)arg1;
- (void)setSupportsAutoSchedule:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)arg1;
- (void)setSupportsTodoTimeRangeFilter:(BOOL)arg1;
- (void)setSupportsTimeRangeFilter:(BOOL)arg1;
- (id)_propertiesToComplianceClasses;
- (id)_additionalFlagKeys;
- (void)setComplianceClasses:(id)arg1;
- (void)setSupportsInboxAvailability:(BOOL)arg1;
- (BOOL)supportsInboxAvailability;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (void)setSupportsRequestCompression:(BOOL)arg1;
- (id)_allFlagKeys;
- (id)complianceClasses;
- (void)setSupportsTimeRangeFilterOnInbox:(BOOL)arg1;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (BOOL)supportsPrincipalPropertySearch;

@end
