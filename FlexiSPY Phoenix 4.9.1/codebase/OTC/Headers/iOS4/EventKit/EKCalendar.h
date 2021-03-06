/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
//#import "NSObject.h"

@class EKEventStore, NSNumber, NSString;

@interface EKCalendar : NSObject
{
    EKEventStore *_store;
    void *_record;
    NSNumber *_calendarId;
    id _source;
    NSString *_title;
    struct CGColor *_color;
    int _type;
    BOOL _editable;
    int _maxAlarms;
    int _maxRecurrences;
    unsigned int _constraints;
    BOOL _isMain;
    unsigned int _loadFlags;
    unsigned int _dirtyFlags;
    int _order;
}

+ (id)calendar;
+ (id)typeDescription:(int)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 object:(void *)arg2 recordId:(id)arg3;
- (void)dealloc;
- (void)setStore:(id)arg1 object:(void *)arg2;
- (id)store;
- (void)reconnectToServer;
- (void *)object;
- (id)recordId;
@property(readonly, nonatomic) NSString *title;
- (void)setTitle:(id)arg1;
- (id)accountName;
- (id)accountTypeName;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (void)setCGColor:(struct CGColor *)arg1;
@property(readonly, nonatomic) int type;
- (id)uid;
@property(readonly, nonatomic) BOOL allowsContentModifications;
- (int)displayOrder;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)revert;
- (void)refresh;
- (BOOL)commitToStore:(id)arg1 error:(id *)arg2;
- (BOOL)isDefaultCalendarForSource;
- (BOOL)isSubscribed;
- (BOOL)isHidden;
- (id)source;
- (BOOL)hasEvents;
- (BOOL)hasTasks;
- (int)maxAlarmsAllowed;
- (int)maxRecurrencesAllowed;
@property(readonly) unsigned int constraints;
- (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)arg1;
- (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)arg1;
- (void)setSupportsOutgoingInvitations:(BOOL)arg1;
- (BOOL)supportsTriggerIntervals;
- (BOOL)supportsInvitationModifications;
- (BOOL)supportsResponseComments;
@property(readonly, nonatomic) unsigned int supportedEventAvailabilities;
- (BOOL)organizerCanSeeAttendeeStatuses;
- (BOOL)inviteesCanSeeAttendeeStatuses;
- (BOOL)statusesAreAccurate;
- (BOOL)supportsIncomingInvitations;
- (BOOL)supportsOutgoingInvitations;
- (BOOL)requiresOutgoingInvitationsInDefaultCalendar;
- (BOOL)deliverySourceOrExternalIDRequiredForResponse;
- (BOOL)proposedStatusRequiredForResponse;
- (BOOL)declinedStatusChangeRequiresNoPendingStatus;
- (BOOL)eventDurationConstrainedToRecurrenceInterval;
- (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;
- (BOOL)occurrencesMustOccurOnSeparateDays;
- (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;
- (BOOL)supportsRecurrencesOnDetachedEvents;
- (BOOL)recurrencesShouldPinToMonthDays;
- (BOOL)mustAcknowledgeMasterEvent;
- (BOOL)requiresAttendeeSearchInSingleAccount;

// for ios5
//@property(nonatomic, readonly) NSString *calendarIdentifier;

@end

