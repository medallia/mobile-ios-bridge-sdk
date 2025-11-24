#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MSDKEBIDFEvent<T>, MSDKEBIDFFormSubmitted, MSDKEBIDFSubmitFeedback, MSDKEBIDXAEvent<T>, MSDKEBIDXALeadIdUpdated, MSDKEBIDXAScreenNameUpdated, MSDKEBIDXASessionIdUpdated, MSDKEBIEventBus, MSDKEBIFormField<T>, MSDKEBIFormFieldCheckboxes, MSDKEBIFormFieldDropdown, MSDKEBIFormFieldEmail, MSDKEBIFormFieldImage, MSDKEBIFormFieldNPS, MSDKEBIFormFieldRadioButtons, MSDKEBIFormFieldRating, MSDKEBIFormFieldRating0to10, MSDKEBIFormFieldRating1to10, MSDKEBIFormFieldRating1to7, MSDKEBIFormFieldText, MSDKEBIFormFieldTextArea, MSDKEBIFormFieldTextInput, MSDKEBIFormFieldType, MSDKEBIFormSubmission<T>, MSDKEBIKotlinArray<T>, MSDKEBIKotlinEnum<E>, MSDKEBIKotlinEnumCompanion, MSDKEBIMXOEvent<T>, MSDKEBIMXOInteractionNameUpdated, MSDKEBIMXOTidUpdated, MSDKEBIMXOWebviewUrlUpdated;

@protocol MSDKEBIEvent, MSDKEBIKotlinComparable, MSDKEBIKotlinIterator, MSDKEBILockable, MSDKEBISubscriber, MSDKEBISubscription;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MSDKEBIBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MSDKEBIBase (MSDKEBIBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MSDKEBIMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MSDKEBIMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMSDKEBIKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MSDKEBINumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MSDKEBIByte : MSDKEBINumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MSDKEBIUByte : MSDKEBINumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MSDKEBIShort : MSDKEBINumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MSDKEBIUShort : MSDKEBINumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MSDKEBIInt : MSDKEBINumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MSDKEBIUInt : MSDKEBINumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MSDKEBILong : MSDKEBINumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MSDKEBIULong : MSDKEBINumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MSDKEBIFloat : MSDKEBINumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MSDKEBIDouble : MSDKEBINumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MSDKEBIBoolean : MSDKEBINumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Represents a lock that can be locked and unlocked.
 *
 * Used mainly for synchronization purposes.
 */
__attribute__((swift_name("Lockable")))
@protocol MSDKEBILockable
@required

/**
 * Locks the lock.
 *
 * Prevents other threads from locking the lock until it is unlocked.
 */
- (void)lock __attribute__((swift_name("lock()")));

/**
 * Unlocks the lock.
 *
 * Allows other threads to lock the lock.
 */
- (void)unlock __attribute__((swift_name("unlock()")));
@end


/**
 * Represents some event in a system that is then emitted to the [EventBus].
 */
__attribute__((swift_name("Event")))
@protocol MSDKEBIEvent
@required

/**
 * The unique identifier for this event.
 */
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * The payload of the event.
 *
 * Generic as payload can be any type, String, Number, or Object, etc.
 */
@property (readonly) id _Nullable payload __attribute__((swift_name("payload")));

/**
 * The timestamp of the event's occurrence.
 */
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * Internal event bus used for SDK-level communication between components.
 *
 * The `EventBus` serves as the backbone for message handling within the SDK,
 * managing the subscription and propagation of events between internal components.
 *
 * This class is intentionally marked as `public` to enable access to this class
 * in other kotlin modules.  However, it is in the `internal` package to denote
 * that it should not be accessed directly by SDK integrators.
 *
 * Responsibilities:
 * - Manage internal subscriptions for events.
 * - Efficiently propagate events to all registered subscribers.
 *
 * Note: This class should not be accessed directly by SDK integrators.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventBus")))
@interface MSDKEBIEventBus : MSDKEBIBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Internal event bus used for SDK-level communication between components.
 *
 * The `EventBus` serves as the backbone for message handling within the SDK,
 * managing the subscription and propagation of events between internal components.
 *
 * This class is intentionally marked as `public` to enable access to this class
 * in other kotlin modules.  However, it is in the `internal` package to denote
 * that it should not be accessed directly by SDK integrators.
 *
 * Responsibilities:
 * - Manage internal subscriptions for events.
 * - Efficiently propagate events to all registered subscribers.
 *
 * Note: This class should not be accessed directly by SDK integrators.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventBus __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKEBIEventBus *shared __attribute__((swift_name("shared")));

/**
 * Send the event for all the subscribers and store it.
 *
 * Subscribers will receive the event in the order they subscribed.
 *
 * New Subscriptions added at the same time as this method is being invoked in a different thread will not receive
 * the event.
 *
 * Store the first STACK_MAX_EVENTS events.
 * Store the last QUEUE_MAX_EVENTS events only after eventsStack.size == STACK_MAX_EVENTS
 * @param event [Event] to to emit to [Subscriber]s.
 */
- (void)emitEvent:(id<MSDKEBIEvent>)event __attribute__((swift_name("emit(event:)")));

/**
 * Subscribe to receive events.
 * @param subscriber [Subscriber] who is interested in [Event]s.
 * @return [Subscription] used to unsubscribe from the [EventBus].
 */
- (id<MSDKEBISubscription>)subscribeSubscriber:(id<MSDKEBISubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end


/**
 * Subscriber - interface for receiving events from the event bus.
 *
 * Represents a subscriber to the event bus.
 */
__attribute__((swift_name("Subscriber")))
@protocol MSDKEBISubscriber
@required

/**
 * onEvent - receive new event
 * @param event The event that was emitted to the event bus.
 */
- (void)onEventEvent:(id<MSDKEBIEvent>)event __attribute__((swift_name("onEvent(event:)")));

/**
 * onSubscribe - receive eventsQueue and eventsStack for new subscriber
 *
 * @param queue - list of the first N events that were emitted to the event bus in chronological order.
 * @param stack - list of the last N events that were emitted to the event bus in reverse chronological order.
 */
- (void)onSubscribeQueue:(NSArray<id<MSDKEBIEvent>> *)queue stack:(NSArray<id<MSDKEBIEvent>> *)stack __attribute__((swift_name("onSubscribe(queue:stack:)")));
@end


/**
 * Subscription - interface for unsubscribing from the event bus.
 *
 * Represents an active subscription to the event bus.
 */
__attribute__((swift_name("Subscription")))
@protocol MSDKEBISubscription
@required

/**
 * unsubscribe - remove the subscriber from the subscribers list
 */
- (void)unsubscribe __attribute__((swift_name("unsubscribe()")));
@end


/**
 * A sealed class representing a domain-specific DF event with a payload of type [T].
 *
 * This class extends [Event] and provides a unique identifier ([id]) and a timestamp
 * ([timestamp]) for each event. The [id] is generated using [EventIdGenerator.nextId()],
 * and the [timestamp] is obtained using [getTimestamp()].
 *
 * @param T The type of the payload associated with the event.
 */
__attribute__((swift_name("DFEvent")))
@interface MSDKEBIDFEvent<T> : MSDKEBIBase <MSDKEBIEvent>

/**
 * The unique identifier for the event, automatically generated.
 */
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * The timestamp indicating when the event was created, in milliseconds since the epoch.
 */
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * A data class representing a specific event for form submission.
 *
 * This event carries a [payload] of type [FormSubmission], which contains details about the submitted form.
 *
 * @property payload The form submission details associated with the event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFFormSubmitted")))
@interface MSDKEBIDFFormSubmitted : MSDKEBIDFEvent<MSDKEBIFormSubmission<id> *>
- (instancetype)initWithPayload:(MSDKEBIFormSubmission<id> *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing a specific event for form submission.
 *
 * This event carries a [payload] of type [FormSubmission], which contains details about the submitted form.
 *
 * @property payload The form submission details associated with the event.
 */
- (MSDKEBIDFFormSubmitted *)doCopyPayload:(MSDKEBIFormSubmission<id> *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing a specific event for form submission.
 *
 * This event carries a [payload] of type [FormSubmission], which contains details about the submitted form.
 *
 * @property payload The form submission details associated with the event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing a specific event for form submission.
 *
 * This event carries a [payload] of type [FormSubmission], which contains details about the submitted form.
 *
 * @property payload The form submission details associated with the event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing a specific event for form submission.
 *
 * This event carries a [payload] of type [FormSubmission], which contains details about the submitted form.
 *
 * @property payload The form submission details associated with the event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKEBIFormSubmission<id> *payload __attribute__((swift_name("payload")));
@end


/**
 * A data class representing a specific event for submitting feedback.
 *
 * This event carries a [payload] of type [String], which represents the feedback content.
 *
 * @property payload The feedback content associated with the event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFSubmitFeedback")))
@interface MSDKEBIDFSubmitFeedback : MSDKEBIDFEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing a specific event for submitting feedback.
 *
 * This event carries a [payload] of type [String], which represents the feedback content.
 *
 * @property payload The feedback content associated with the event.
 */
- (MSDKEBIDFSubmitFeedback *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing a specific event for submitting feedback.
 *
 * This event carries a [payload] of type [String], which represents the feedback content.
 *
 * @property payload The feedback content associated with the event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing a specific event for submitting feedback.
 *
 * This event carries a [payload] of type [String], which represents the feedback content.
 *
 * @property payload The feedback content associated with the event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing a specific event for submitting feedback.
 *
 * This event carries a [payload] of type [String], which represents the feedback content.
 *
 * @property payload The feedback content associated with the event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A sealed class representing a domain-specific DXA event with a payload of type [T].
 *
 * This class extends [Event] and provides a unique identifier ([id]) and a timestamp
 * ([timestamp]) for each event. The [id] is generated using [EventIdGenerator.nextId()],
 * and the [timestamp] is obtained using [getTimestamp()].
 *
 * @param T The type of the payload associated with the event.
 */
__attribute__((swift_name("DXAEvent")))
@interface MSDKEBIDXAEvent<T> : MSDKEBIBase <MSDKEBIEvent>

/**
 * The unique identifier for the event, automatically generated.
 */
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * The timestamp indicating when the event was created, in milliseconds since the epoch.
 */
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * A data class representing an event that indicates an update to the lead ID.
 *
 * This event carries a [payload] of type [String], which represents the updated lead ID.
 *
 * @property payload The updated lead ID associated with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DXALeadIdUpdated")))
@interface MSDKEBIDXALeadIdUpdated : MSDKEBIDXAEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the lead ID.
 *
 * This event carries a [payload] of type [String], which represents the updated lead ID.
 *
 * @property payload The updated lead ID associated with this event.
 */
- (MSDKEBIDXALeadIdUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the lead ID.
 *
 * This event carries a [payload] of type [String], which represents the updated lead ID.
 *
 * @property payload The updated lead ID associated with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the lead ID.
 *
 * This event carries a [payload] of type [String], which represents the updated lead ID.
 *
 * @property payload The updated lead ID associated with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the lead ID.
 *
 * This event carries a [payload] of type [String], which represents the updated lead ID.
 *
 * @property payload The updated lead ID associated with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A data class representing an event that indicates an update to the screen name.
 *
 * This event carries a [payload] of type [String], which represents the updated screen name.
 *
 * @property payload The updated screen name associated with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DXAScreenNameUpdated")))
@interface MSDKEBIDXAScreenNameUpdated : MSDKEBIDXAEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the screen name.
 *
 * This event carries a [payload] of type [String], which represents the updated screen name.
 *
 * @property payload The updated screen name associated with this event.
 */
- (MSDKEBIDXAScreenNameUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the screen name.
 *
 * This event carries a [payload] of type [String], which represents the updated screen name.
 *
 * @property payload The updated screen name associated with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the screen name.
 *
 * This event carries a [payload] of type [String], which represents the updated screen name.
 *
 * @property payload The updated screen name associated with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the screen name.
 *
 * This event carries a [payload] of type [String], which represents the updated screen name.
 *
 * @property payload The updated screen name associated with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A data class representing an event that indicates an update to the session ID.
 *
 * This event carries a [payload] of type [String], which represents the updated session ID.
 *
 * @property payload The updated session ID associated with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DXASessionIdUpdated")))
@interface MSDKEBIDXASessionIdUpdated : MSDKEBIDXAEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the session ID.
 *
 * This event carries a [payload] of type [String], which represents the updated session ID.
 *
 * @property payload The updated session ID associated with this event.
 */
- (MSDKEBIDXASessionIdUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the session ID.
 *
 * This event carries a [payload] of type [String], which represents the updated session ID.
 *
 * @property payload The updated session ID associated with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the session ID.
 *
 * This event carries a [payload] of type [String], which represents the updated session ID.
 *
 * @property payload The updated session ID associated with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the session ID.
 *
 * This event carries a [payload] of type [String], which represents the updated session ID.
 *
 * @property payload The updated session ID associated with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A sealed class representing a domain-specific MXO event with a payload of type [T].
 *
 * This class extends [Event] and provides a unique identifier ([id]) and a timestamp
 * ([timestamp]) for each event. The [id] is generated using [EventIdGenerator.nextId()],
 * and the [timestamp] is obtained using [getTimestamp()].
 *
 * @param T The type of the payload associated with the event.
 */
__attribute__((swift_name("MXOEvent")))
@interface MSDKEBIMXOEvent<T> : MSDKEBIBase <MSDKEBIEvent>

/**
 * The unique identifier for the event, automatically generated.
 */
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * The timestamp indicating when the event was created, in milliseconds since the epoch.
 */
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * A data class representing an event that indicates an update to the Interaction name.
 *
 * This event carries a [payload] of type [String], which represents the updated Interaction name.
 *
 * @property payload The updated Interaction name with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MXOInteractionNameUpdated")))
@interface MSDKEBIMXOInteractionNameUpdated : MSDKEBIMXOEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the Interaction name.
 *
 * This event carries a [payload] of type [String], which represents the updated Interaction name.
 *
 * @property payload The updated Interaction name with this event.
 */
- (MSDKEBIMXOInteractionNameUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the Interaction name.
 *
 * This event carries a [payload] of type [String], which represents the updated Interaction name.
 *
 * @property payload The updated Interaction name with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the Interaction name.
 *
 * This event carries a [payload] of type [String], which represents the updated Interaction name.
 *
 * @property payload The updated Interaction name with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the Interaction name.
 *
 * This event carries a [payload] of type [String], which represents the updated Interaction name.
 *
 * @property payload The updated Interaction name with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A data class representing an event that indicates an update to the TID (Transaction ID).
 *
 * This event carries a [payload] of type [String], which represents the updated TID.
 *
 * @property payload The updated Transaction ID (TID) associated with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MXOTidUpdated")))
@interface MSDKEBIMXOTidUpdated : MSDKEBIMXOEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the TID (Transaction ID).
 *
 * This event carries a [payload] of type [String], which represents the updated TID.
 *
 * @property payload The updated Transaction ID (TID) associated with this event.
 */
- (MSDKEBIMXOTidUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the TID (Transaction ID).
 *
 * This event carries a [payload] of type [String], which represents the updated TID.
 *
 * @property payload The updated Transaction ID (TID) associated with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the TID (Transaction ID).
 *
 * This event carries a [payload] of type [String], which represents the updated TID.
 *
 * @property payload The updated Transaction ID (TID) associated with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the TID (Transaction ID).
 *
 * This event carries a [payload] of type [String], which represents the updated TID.
 *
 * @property payload The updated Transaction ID (TID) associated with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * A data class representing an event that indicates an update to the Webview URL.
 *
 * This event carries a [payload] of type [String], which represents the updated Webview URL.
 *
 * @property payload The updated Webview URL with this event.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MXOWebviewUrlUpdated")))
@interface MSDKEBIMXOWebviewUrlUpdated : MSDKEBIMXOEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));

/**
 * A data class representing an event that indicates an update to the Webview URL.
 *
 * This event carries a [payload] of type [String], which represents the updated Webview URL.
 *
 * @property payload The updated Webview URL with this event.
 */
- (MSDKEBIMXOWebviewUrlUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));

/**
 * A data class representing an event that indicates an update to the Webview URL.
 *
 * This event carries a [payload] of type [String], which represents the updated Webview URL.
 *
 * @property payload The updated Webview URL with this event.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A data class representing an event that indicates an update to the Webview URL.
 *
 * This event carries a [payload] of type [String], which represents the updated Webview URL.
 *
 * @property payload The updated Webview URL with this event.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A data class representing an event that indicates an update to the Webview URL.
 *
 * This event carries a [payload] of type [String], which represents the updated Webview URL.
 *
 * @property payload The updated Webview URL with this event.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end


/**
 * Represents a form field with a specific type and value.
 *
 * @param T The type of the value held by the form field.
 */
__attribute__((swift_name("FormField")))
@interface MSDKEBIFormField<T> : MSDKEBIBase

/** The name of the form field. */
@property (readonly) NSString *name __attribute__((swift_name("name")));

/** The type of the form field. */
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));

/** The value of the form field. */
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A checkboxes field.
 *
 * @property name The name of the field.
 * @property value The selected values.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldCheckboxes")))
@interface MSDKEBIFormFieldCheckboxes : MSDKEBIFormField<NSArray<NSString *> *>
- (instancetype)initWithName:(NSString *)name value:(NSArray<NSString *> * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A checkboxes field.
 *
 * @property name The name of the field.
 * @property value The selected values.
 */
- (MSDKEBIFormFieldCheckboxes *)doCopyName:(NSString *)name value:(NSArray<NSString *> * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A checkboxes field.
 *
 * @property name The name of the field.
 * @property value The selected values.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A checkboxes field.
 *
 * @property name The name of the field.
 * @property value The selected values.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A checkboxes field.
 *
 * @property name The name of the field.
 * @property value The selected values.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSArray<NSString *> * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A dropdown field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldDropdown")))
@interface MSDKEBIFormFieldDropdown : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A dropdown field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (MSDKEBIFormFieldDropdown *)doCopyName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A dropdown field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A dropdown field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A dropdown field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * An email field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldEmail")))
@interface MSDKEBIFormFieldEmail : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * An email field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (MSDKEBIFormFieldEmail *)doCopyName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * An email field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An email field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An email field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * An image field.
 *
 * @property name The name of the field.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldImage")))
@interface MSDKEBIFormFieldImage : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));

/**
 * An image field.
 *
 * @property name The name of the field.
 */
- (MSDKEBIFormFieldImage *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));

/**
 * An image field.
 *
 * @property name The name of the field.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An image field.
 *
 * @property name The name of the field.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An image field.
 *
 * @property name The name of the field.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * An NPS (Net Promoter Score) field.
 *
 * @property name The name of the field.
 * @property value The NPS value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldNPS")))
@interface MSDKEBIFormFieldNPS : MSDKEBIFormField<MSDKEBIInt *>
- (instancetype)initWithName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * An NPS (Net Promoter Score) field.
 *
 * @property name The name of the field.
 * @property value The NPS value.
 */
- (MSDKEBIFormFieldNPS *)doCopyName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * An NPS (Net Promoter Score) field.
 *
 * @property name The name of the field.
 * @property value The NPS value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An NPS (Net Promoter Score) field.
 *
 * @property name The name of the field.
 * @property value The NPS value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An NPS (Net Promoter Score) field.
 *
 * @property name The name of the field.
 * @property value The NPS value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) MSDKEBIInt * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A radio buttons field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldRadioButtons")))
@interface MSDKEBIFormFieldRadioButtons : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A radio buttons field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (MSDKEBIFormFieldRadioButtons *)doCopyName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A radio buttons field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A radio buttons field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A radio buttons field.
 *
 * @property name The name of the field.
 * @property value The selected value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A generic rating field (From 1 to 5).
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldRating")))
@interface MSDKEBIFormFieldRating : MSDKEBIFormField<MSDKEBIInt *>
- (instancetype)initWithName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A generic rating field (From 1 to 5).
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (MSDKEBIFormFieldRating *)doCopyName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A generic rating field (From 1 to 5).
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A generic rating field (From 1 to 5).
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A generic rating field (From 1 to 5).
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) MSDKEBIInt * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A rating field from 0 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldRating0to10")))
@interface MSDKEBIFormFieldRating0to10 : MSDKEBIFormField<MSDKEBIInt *>
- (instancetype)initWithName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A rating field from 0 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (MSDKEBIFormFieldRating0to10 *)doCopyName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A rating field from 0 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A rating field from 0 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A rating field from 0 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) MSDKEBIInt * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A rating field from 1 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldRating1to10")))
@interface MSDKEBIFormFieldRating1to10 : MSDKEBIFormField<MSDKEBIInt *>
- (instancetype)initWithName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A rating field from 1 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (MSDKEBIFormFieldRating1to10 *)doCopyName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A rating field from 1 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A rating field from 1 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A rating field from 1 to 10.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) MSDKEBIInt * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A rating field from 1 to 7.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldRating1to7")))
@interface MSDKEBIFormFieldRating1to7 : MSDKEBIFormField<MSDKEBIInt *>
- (instancetype)initWithName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A rating field from 1 to 7.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (MSDKEBIFormFieldRating1to7 *)doCopyName:(NSString *)name value:(MSDKEBIInt * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A rating field from 1 to 7.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A rating field from 1 to 7.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A rating field from 1 to 7.
 *
 * @property name The name of the field.
 * @property value The rating value.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) MSDKEBIInt * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A text field.
 *
 * @property name The name of the field.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldText")))
@interface MSDKEBIFormFieldText : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));

/**
 * A text field.
 *
 * @property name The name of the field.
 */
- (MSDKEBIFormFieldText *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));

/**
 * A text field.
 *
 * @property name The name of the field.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A text field.
 *
 * @property name The name of the field.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A text field.
 *
 * @property name The name of the field.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A text area field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldTextArea")))
@interface MSDKEBIFormFieldTextArea : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A text area field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (MSDKEBIFormFieldTextArea *)doCopyName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A text area field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A text area field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A text area field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * A text input field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldTextInput")))
@interface MSDKEBIFormFieldTextInput : MSDKEBIFormField<NSString *>
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));

/**
 * A text input field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (MSDKEBIFormFieldTextInput *)doCopyName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));

/**
 * A text input field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A text input field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A text input field.
 *
 * @property name The name of the field.
 * @property value The value of the field.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MSDKEBIFormFieldType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MSDKEBIKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MSDKEBIKotlinEnum<E> : MSDKEBIBase <MSDKEBIKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MSDKEBIKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Enum representing the different types of form fields supported by the DF SDK.
 *
 * @property serverName The name of the field type as expected by the server.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldType")))
@interface MSDKEBIFormFieldType : MSDKEBIKotlinEnum<MSDKEBIFormFieldType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Enum representing the different types of form fields supported by the DF SDK.
 *
 * @property serverName The name of the field type as expected by the server.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKEBIFormFieldType *text __attribute__((swift_name("text")));
@property (class, readonly) MSDKEBIFormFieldType *image __attribute__((swift_name("image")));
@property (class, readonly) MSDKEBIFormFieldType *textArea __attribute__((swift_name("textArea")));
@property (class, readonly) MSDKEBIFormFieldType *textInput __attribute__((swift_name("textInput")));
@property (class, readonly) MSDKEBIFormFieldType *email __attribute__((swift_name("email")));
@property (class, readonly) MSDKEBIFormFieldType *radioButtons __attribute__((swift_name("radioButtons")));
@property (class, readonly) MSDKEBIFormFieldType *checkboxes __attribute__((swift_name("checkboxes")));
@property (class, readonly) MSDKEBIFormFieldType *rating1To7 __attribute__((swift_name("rating1To7")));
@property (class, readonly) MSDKEBIFormFieldType *rating1To10 __attribute__((swift_name("rating1To10")));
@property (class, readonly) MSDKEBIFormFieldType *rating0To10 __attribute__((swift_name("rating0To10")));
@property (class, readonly) MSDKEBIFormFieldType *rating __attribute__((swift_name("rating")));
@property (class, readonly) MSDKEBIFormFieldType *nps __attribute__((swift_name("nps")));
@property (class, readonly) MSDKEBIFormFieldType *dropdown __attribute__((swift_name("dropdown")));
+ (MSDKEBIKotlinArray<MSDKEBIFormFieldType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MSDKEBIFormFieldType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serverName __attribute__((swift_name("serverName")));
@end


/**
 * Represents a submission of a form, containing feedback and form details.
 *
 * @param T The type of form field.
 * @property feedbackUuid Unique identifier for the feedback - Generated by the DF Server.
 * @property ccid Client correlation identifier - Generated by the DF SDK.
 * @property formId Unique identifier for the form.
 * @property formType Type of the form.
 * @property formFields Iterable collection of form fields.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormSubmission")))
@interface MSDKEBIFormSubmission<T> : MSDKEBIBase
- (instancetype)initWithFeedbackUuid:(NSString *)feedbackUuid ccid:(NSString *)ccid formId:(NSString *)formId formType:(NSString *)formType formFields:(id)formFields __attribute__((swift_name("init(feedbackUuid:ccid:formId:formType:formFields:)"))) __attribute__((objc_designated_initializer));

/**
 * Represents a submission of a form, containing feedback and form details.
 *
 * @param T The type of form field.
 * @property feedbackUuid Unique identifier for the feedback - Generated by the DF Server.
 * @property ccid Client correlation identifier - Generated by the DF SDK.
 * @property formId Unique identifier for the form.
 * @property formType Type of the form.
 * @property formFields Iterable collection of form fields.
 */
- (MSDKEBIFormSubmission<T> *)doCopyFeedbackUuid:(NSString *)feedbackUuid ccid:(NSString *)ccid formId:(NSString *)formId formType:(NSString *)formType formFields:(id)formFields __attribute__((swift_name("doCopy(feedbackUuid:ccid:formId:formType:formFields:)")));

/**
 * Represents a submission of a form, containing feedback and form details.
 *
 * @param T The type of form field.
 * @property feedbackUuid Unique identifier for the feedback - Generated by the DF Server.
 * @property ccid Client correlation identifier - Generated by the DF SDK.
 * @property formId Unique identifier for the form.
 * @property formType Type of the form.
 * @property formFields Iterable collection of form fields.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a submission of a form, containing feedback and form details.
 *
 * @param T The type of form field.
 * @property feedbackUuid Unique identifier for the feedback - Generated by the DF Server.
 * @property ccid Client correlation identifier - Generated by the DF SDK.
 * @property formId Unique identifier for the form.
 * @property formType Type of the form.
 * @property formFields Iterable collection of form fields.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a submission of a form, containing feedback and form details.
 *
 * @param T The type of form field.
 * @property feedbackUuid Unique identifier for the feedback - Generated by the DF Server.
 * @property ccid Client correlation identifier - Generated by the DF SDK.
 * @property formId Unique identifier for the form.
 * @property formType Type of the form.
 * @property formFields Iterable collection of form fields.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ccid __attribute__((swift_name("ccid")));
@property (readonly) NSString *feedbackUuid __attribute__((swift_name("feedbackUuid")));
@property (readonly) id formFields __attribute__((swift_name("formFields")));
@property (readonly) NSString *formId __attribute__((swift_name("formId")));
@property (readonly) NSString *formType __attribute__((swift_name("formType")));
@end

@interface MSDKEBIFormField (Extensions)

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="999.999.999")
*/
- (MSDKEBIFormField<id> *)withValueAsAnyObject __attribute__((swift_name("withValueAsAnyObject()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSLockKt")))
@interface MSDKEBIIOSLockKt : MSDKEBIBase

/**
 * Provides a [Lockable] instance for the iOS platform.
 *
 * This function returns an instance of [IOSLock], which uses [NSLock] internally
 * to manage synchronization.
 *
 * @return A platform-specific implementation of [Lockable] for iOS.
 */
+ (id<MSDKEBILockable>)getLock __attribute__((swift_name("getLock()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOStimestampKt")))
@interface MSDKEBIIOStimestampKt : MSDKEBIBase

/**
 * Provides the current timestamp for the iOS platform.
 *
 * This function retrieves the current time as the number of seconds since the Unix epoch
 * (January 1, 1970, 00:00:00 UTC) and converts it to a [Long].
 *
 * @return The current timestamp in seconds since the Unix epoch.
 */
+ (int64_t)getTimestamp __attribute__((swift_name("getTimestamp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockDeclarationsKt")))
@interface MSDKEBILockDeclarationsKt : MSDKEBIBase

/**
 * Executes a block of code while holding a lock. The lock is acquired before the block
 * is executed and is guaranteed to be released after the block completes, even if
 * an exception occurs during its execution.
 *
 * @param block The block of code to execute while holding the lock.
 * @return The result of the block's execution.
 * @throws Any exception thrown by the block will be propagated after the lock is released.
 */
+ (id _Nullable)withLock:(id<MSDKEBILockable>)receiver block:(id _Nullable (^)(void))block __attribute__((swift_name("withLock(_:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MSDKEBIKotlinEnumCompanion : MSDKEBIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKEBIKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MSDKEBIKotlinArray<T> : MSDKEBIBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MSDKEBIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MSDKEBIKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MSDKEBIKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
