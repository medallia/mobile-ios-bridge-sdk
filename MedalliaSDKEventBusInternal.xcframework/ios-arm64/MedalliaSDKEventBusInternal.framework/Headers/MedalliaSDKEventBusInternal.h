#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MSDKEBIEventBus, MSDKEBIDFEvent<T>, MSDKEBIDFSubmitFeedback, MSDKEBIDXAEvent<T>, MSDKEBIDXALeadIdUpdated, MSDKEBIDXASessionIdUpdated, MSDKEBIMXOEvent<T>, MSDKEBIMXOTidUpdated;

@protocol MSDKEBIEvent, MSDKEBISubscription, MSDKEBISubscriber, MSDKEBILockable;

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

__attribute__((swift_name("Lockable")))
@protocol MSDKEBILockable
@required
- (void)lock __attribute__((swift_name("lock()")));
- (void)unlock __attribute__((swift_name("unlock()")));
@end

__attribute__((swift_name("Event")))
@protocol MSDKEBIEvent
@required
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) id _Nullable payload __attribute__((swift_name("payload")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventBus")))
@interface MSDKEBIEventBus : MSDKEBIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventBus __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MSDKEBIEventBus *shared __attribute__((swift_name("shared")));
- (void)emitEvent:(id<MSDKEBIEvent>)event __attribute__((swift_name("emit(event:)")));
- (id<MSDKEBISubscription>)subscribeSubscriber:(id<MSDKEBISubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end

__attribute__((swift_name("Subscriber")))
@protocol MSDKEBISubscriber
@required
- (void)onEventEvent:(id<MSDKEBIEvent>)event __attribute__((swift_name("onEvent(event:)")));
- (void)onSubscribeQueue:(NSArray<id<MSDKEBIEvent>> *)queue stack:(NSArray<id<MSDKEBIEvent>> *)stack __attribute__((swift_name("onSubscribe(queue:stack:)")));
@end

__attribute__((swift_name("Subscription")))
@protocol MSDKEBISubscription
@required
- (void)unsubscribe __attribute__((swift_name("unsubscribe()")));
@end

__attribute__((swift_name("DFEvent")))
@interface MSDKEBIDFEvent<T> : MSDKEBIBase <MSDKEBIEvent>
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFSubmitFeedback")))
@interface MSDKEBIDFSubmitFeedback : MSDKEBIDFEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKEBIDFSubmitFeedback *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end

__attribute__((swift_name("DXAEvent")))
@interface MSDKEBIDXAEvent<T> : MSDKEBIBase <MSDKEBIEvent>
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DXALeadIdUpdated")))
@interface MSDKEBIDXALeadIdUpdated : MSDKEBIDXAEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKEBIDXALeadIdUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DXASessionIdUpdated")))
@interface MSDKEBIDXASessionIdUpdated : MSDKEBIDXAEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKEBIDXASessionIdUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end

__attribute__((swift_name("MXOEvent")))
@interface MSDKEBIMXOEvent<T> : MSDKEBIBase <MSDKEBIEvent>
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MXOTidUpdated")))
@interface MSDKEBIMXOTidUpdated : MSDKEBIMXOEvent<NSString *>
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (MSDKEBIMXOTidUpdated *)doCopyPayload:(NSString *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSLockKt")))
@interface MSDKEBIIOSLockKt : MSDKEBIBase
+ (id<MSDKEBILockable>)getLock __attribute__((swift_name("getLock()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOStimestampKt")))
@interface MSDKEBIIOStimestampKt : MSDKEBIBase
+ (int64_t)getTimestamp __attribute__((swift_name("getTimestamp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockDeclarationsKt")))
@interface MSDKEBILockDeclarationsKt : MSDKEBIBase
+ (id _Nullable)withLock:(id<MSDKEBILockable>)receiver block:(id _Nullable (^)(void))block __attribute__((swift_name("withLock(_:block:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
