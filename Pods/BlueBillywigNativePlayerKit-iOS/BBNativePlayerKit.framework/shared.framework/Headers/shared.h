#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedEventName, SharedProgramController, SharedEmbedObject, SharedLineItem_, SharedAdUnit, SharedAudiotrack, SharedStep, SharedChapter, SharedBBModel, SharedDates, SharedEmbedData, SharedPublication, SharedMediaClip, SharedPlayout, SharedMediaClipList, SharedProject, SharedRequestParams, SharedVersioningData, SharedKotlinx_serialization_jsonJsonElement, SharedMediaAsset, SharedContentItem, SharedThumbnail, SharedSubtitle, SharedTimeline, SharedPlayer, SharedPlayerSettings, SharedFitMode, SharedTypedObject, SharedDatabaseDriverFactory, SharedLocalStorage, SharedRuntimeQuery<__covariant RowType>, SharedSelectKey, SharedSelectKeyType, SharedVersion, SharedKotlinEnum<E>, SharedPhase, SharedPosType, SharedState, SharedKtor_client_coreHttpClient, SharedKotlinException, SharedKotlinx_serialization_coreSerializersModule, SharedDatabase, SharedStatsLogger, SharedKotlinThrowable, SharedKotlinx_coroutines_coreCancellationException, SharedKotlinUnit, SharedRuntimeTransacterTransaction, SharedKtor_client_coreHttpClientEngineConfig, SharedKtor_client_coreHttpClientConfig<T>, SharedKtor_client_coreHttpRequestBuilder, SharedKtor_client_coreHttpClientCall, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedKtor_client_coreHttpReceivePipeline, SharedKtor_client_coreHttpRequestPipeline, SharedKtor_client_coreHttpResponsePipeline, SharedKtor_client_coreHttpSendPipeline, SharedKotlinArray<T>, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKotlinByteArray, SharedKtor_client_coreHttpRequestData, SharedKtor_client_coreHttpResponseData, SharedKtor_client_coreProxyConfig, SharedKtor_httpHeadersBuilder, SharedKtor_httpURLBuilder, SharedKtor_httpHttpMethod, SharedKtor_client_coreTypeInfo, SharedKtor_client_coreHttpResponse, SharedKtor_utilsAttributeKey<T>, SharedKotlinAbstractCoroutineContextElement, SharedKtor_utilsPipelinePhase, SharedKtor_utilsPipeline<TSubject, TContext>, SharedKtor_client_coreHttpResponseContainer, SharedKotlinx_coroutines_coreAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SharedKotlinByteIterator, SharedKtor_httpUrl, SharedKtor_httpOutgoingContent, SharedKtor_httpHttpStatusCode, SharedKtor_utilsGMTDate, SharedKtor_httpHttpProtocolVersion, SharedKtor_utilsStringValuesBuilder, SharedKtor_httpURLProtocol, SharedKtor_httpParametersBuilder, SharedKotlinx_coroutines_coreAtomicOp<__contravariant T>, SharedKotlinx_coroutines_coreOpDescriptor, SharedKotlinx_coroutines_coreLockFreeLinkedListNode, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SharedKtor_httpContentType, SharedKtor_utilsWeekDay, SharedKtor_utilsMonth, SharedKotlinKTypeProjection, SharedKtor_ioMemory, SharedKtor_ioIoBuffer, SharedKtor_ioByteReadPacket, SharedKtor_ioByteOrder, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, SharedKtor_httpHeaderValueParam, SharedKtor_httpHeaderValueWithParameters, SharedKotlinKVariance, SharedKtor_ioBuffer, SharedKtor_ioChunkBuffer, SharedKotlinCharArray, SharedKtor_ioAbstractInput, SharedKtor_ioByteReadPacketBase, SharedKtor_ioByteReadPacketPlatformBase, SharedKotlinCharIterator;

@protocol SharedEventListenerInterface, SharedEventBusInterface, SharedKotlinCoroutineContext, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreCompletableJob, SharedKotlinx_serialization_coreKSerializer, SharedContentItemInterface, SharedRuntimeSqlDriver, SharedLocalStorageDatabaseQueries, SharedRuntimeTransactionWithoutReturn, SharedRuntimeTransactionWithReturn, SharedRuntimeTransacter, SharedLocalStorageDatabase, SharedRuntimeSqlDriverSchema, SharedKotlinComparable, SharedAdControllerInterface, SharedMediaControllerInterface, SharedPosterControllerInterface, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinx_coroutines_coreJob, SharedKotlinSequence, SharedKotlinx_coroutines_coreSelectClause0, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedRuntimeSqlPreparedStatement, SharedRuntimeSqlCursor, SharedRuntimeCloseable, SharedRuntimeTransactionCallbacks, SharedRuntimeQueryListener, SharedKtor_ioCloseable, SharedKtor_client_coreHttpClientEngine, SharedKtor_client_coreHttpClientEngineCapability, SharedKtor_utilsAttributes, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinx_coroutines_coreParentJob, SharedKotlinIterator, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinSuspendFunction0, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKtor_client_coreHttpClientFeature, SharedKtor_httpHttpMessageBuilder, SharedKtor_client_coreHttpRequest, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinSuspendFunction2, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKotlinFunction, SharedKtor_httpHeaders, SharedKtor_utilsStringValues, SharedKotlinMapEntry, SharedKotlinKType, SharedKtor_httpHttpMessage, SharedKtor_ioByteReadChannel, SharedKtor_httpParameters, SharedKtor_ioReadSession, SharedKotlinSuspendFunction1, SharedKotlinAppendable, SharedKtor_ioObjectPool, SharedKtor_ioInput, SharedKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("EventListenerInterface")))
@protocol SharedEventListenerInterface
@required
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoPlayNextTimer")))
@interface SharedAutoPlayNextTimer : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus pc:(SharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)start __attribute__((swift_name("start()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMTimer")))
@interface SharedKMMTimer : SharedBase
- (instancetype)initWithName:(NSString * _Nullable)name interval:(int64_t)interval delay:(int64_t)delay action:(void (^)(void))action __attribute__((swift_name("init(name:interval:delay:action:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)isRunning __attribute__((swift_name("isRunning()")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) int64_t delay __attribute__((swift_name("delay")));
@property (readonly) int64_t interval __attribute__((swift_name("interval")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface SharedLogger : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform.Companion")))
@interface SharedPlatformCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedItemsHelper")))
@interface SharedRelatedItemsHelper : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus pc:(SharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)loadMode:(NSString * _Nullable)mode __attribute__((swift_name("load(mode:)")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlueBillywigLogger")))
@interface SharedBlueBillywigLogger : SharedBase <SharedEventListenerInterface, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)disable __attribute__((swift_name("disable()")));
- (void)enable __attribute__((swift_name("enable()")));
- (void)handleAutoPause __attribute__((swift_name("handleAutoPause()")));
- (void)ingestOptsOpts:(SharedEmbedObject * _Nullable)opts __attribute__((swift_name("ingestOpts(opts:)")));
- (void)logMediaClipEventEvent:(NSString *)event aux:(NSDictionary<NSString *, NSString *> *)aux __attribute__((swift_name("logMediaClipEvent(event:aux:)")));
- (void)onClipDataLoadedEventType:(SharedEventName *)eventType payload:(NSDictionary<NSString *, id> * _Nullable)payload __attribute__((swift_name("onClipDataLoaded(eventType:payload:)")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property (readonly) id<SharedKotlinx_coroutines_coreCompletableJob> job __attribute__((swift_name("job")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlueBillywigLogger.Companion")))
@interface SharedBlueBillywigLoggerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatsLogger")))
@interface SharedStatsLogger : SharedBase
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus publicationName:(NSString *)publicationName enabled:(BOOL)enabled __attribute__((swift_name("init(eventBus:publicationName:enabled:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)setEnabledEnabled:(BOOL)enabled __attribute__((swift_name("setEnabled(enabled:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatsLogger.Companion")))
@interface SharedStatsLoggerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdUnit")))
@interface SharedAdUnit : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy playout:(NSDictionary<NSString *, NSString *> * _Nullable)playout positionType:(NSString * _Nullable)positionType positionDisplayType:(NSString * _Nullable)positionDisplayType playoutCode:(NSString * _Nullable)playoutCode title:(NSString * _Nullable)title code:(NSString * _Nullable)code assignedLineitems:(NSArray<NSString *> * _Nullable)assignedLineitems prebidConfig:(NSString * _Nullable)prebidConfig label:(NSString * _Nullable)label lineitems:(NSArray<SharedLineItem_ *> * _Nullable)lineitems __attribute__((swift_name("init(id:publicationid:type:status:createddate:createdBy:updateddate:updatedBy:playout:positionType:positionDisplayType:playoutCode:title:code:assignedLineitems:prebidConfig:label:lineitems:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NSString *> * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<SharedLineItem_ *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedAdUnit *)doCopyId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy playout:(NSDictionary<NSString *, NSString *> * _Nullable)playout positionType:(NSString * _Nullable)positionType positionDisplayType:(NSString * _Nullable)positionDisplayType playoutCode:(NSString * _Nullable)playoutCode title:(NSString * _Nullable)title code:(NSString * _Nullable)code assignedLineitems:(NSArray<NSString *> * _Nullable)assignedLineitems prebidConfig:(NSString * _Nullable)prebidConfig label:(NSString * _Nullable)label lineitems:(NSArray<SharedLineItem_ *> * _Nullable)lineitems __attribute__((swift_name("doCopy(id:publicationid:type:status:createddate:createdBy:updateddate:updatedBy:playout:positionType:positionDisplayType:playoutCode:title:code:assignedLineitems:prebidConfig:label:lineitems:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable assignedLineitems __attribute__((swift_name("assignedLineitems")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<SharedLineItem_ *> * _Nullable lineitems __attribute__((swift_name("lineitems")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable playout __attribute__((swift_name("playout")));
@property (readonly) NSString * _Nullable playoutCode __attribute__((swift_name("playoutCode")));
@property (readonly) NSString * _Nullable positionDisplayType __attribute__((swift_name("positionDisplayType")));
@property (readonly) NSString * _Nullable positionType __attribute__((swift_name("positionType")));
@property (readonly) NSString * _Nullable prebidConfig __attribute__((swift_name("prebidConfig")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdUnit.Companion")))
@interface SharedAdUnitCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Audiotrack")))
@interface SharedAudiotrack : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy isocode:(NSString * _Nullable)isocode mediaclipid:(NSString * _Nullable)mediaclipid originalfilename:(NSString * _Nullable)originalfilename languageid:(SharedLong * _Nullable)languageid src:(NSString * _Nullable)src remotesrc:(NSString * _Nullable)remotesrc exactlength:(NSString * _Nullable)exactlength publisheddate:(NSString * _Nullable)publisheddate label:(NSString * _Nullable)label uri:(NSString * _Nullable)uri isDefaultLanguage:(SharedBoolean * _Nullable)isDefaultLanguage __attribute__((swift_name("init(id:publicationid:type:status:createddate:name:createdBy:updateddate:updatedBy:isocode:mediaclipid:originalfilename:languageid:src:remotesrc:exactlength:publisheddate:label:uri:isDefaultLanguage:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (SharedLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedAudiotrack *)doCopyId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy isocode:(NSString * _Nullable)isocode mediaclipid:(NSString * _Nullable)mediaclipid originalfilename:(NSString * _Nullable)originalfilename languageid:(SharedLong * _Nullable)languageid src:(NSString * _Nullable)src remotesrc:(NSString * _Nullable)remotesrc exactlength:(NSString * _Nullable)exactlength publisheddate:(NSString * _Nullable)publisheddate label:(NSString * _Nullable)label uri:(NSString * _Nullable)uri isDefaultLanguage:(SharedBoolean * _Nullable)isDefaultLanguage __attribute__((swift_name("doCopy(id:publicationid:type:status:createddate:name:createdBy:updateddate:updatedBy:isocode:mediaclipid:originalfilename:languageid:src:remotesrc:exactlength:publisheddate:label:uri:isDefaultLanguage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable exactlength __attribute__((swift_name("exactlength")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isDefaultLanguage __attribute__((swift_name("isDefaultLanguage")));
@property (readonly) NSString * _Nullable isocode __attribute__((swift_name("isocode")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) SharedLong * _Nullable languageid __attribute__((swift_name("languageid")));
@property (readonly) NSString * _Nullable mediaclipid __attribute__((swift_name("mediaclipid")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable originalfilename __attribute__((swift_name("originalfilename")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable remotesrc __attribute__((swift_name("remotesrc")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Audiotrack.Companion")))
@interface SharedAudiotrackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("BBModel")))
@interface SharedBBModel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable rawJsonString __attribute__((swift_name("rawJsonString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chapter")))
@interface SharedChapter : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id steps:(NSArray<SharedStep *> * _Nullable)steps __attribute__((swift_name("init(id:steps:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedStep *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedChapter *)doCopyId:(NSString * _Nullable)id steps:(NSArray<SharedStep *> * _Nullable)steps __attribute__((swift_name("doCopy(id:steps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<SharedStep *> * _Nullable steps __attribute__((swift_name("steps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Chapter.Companion")))
@interface SharedChapterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ContentItem")))
@interface SharedContentItem : SharedBBModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isPrefetch __attribute__((swift_name("isPrefetch")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItem.Companion")))
@interface SharedContentItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dates")))
@interface SharedDates : SharedBase
- (instancetype)initWithCreated:(NSString * _Nullable)created updated:(NSString * _Nullable)updated published:(NSString * _Nullable)published __attribute__((swift_name("init(created:updated:published:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDates *)doCopyCreated:(NSString * _Nullable)created updated:(NSString * _Nullable)updated published:(NSString * _Nullable)published __attribute__((swift_name("doCopy(created:updated:published:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable created __attribute__((swift_name("created")));
@property (readonly) NSString * _Nullable published __attribute__((swift_name("published")));
@property (readonly) NSString * _Nullable updated __attribute__((swift_name("updated")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dates.Companion")))
@interface SharedDatesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedData")))
@interface SharedEmbedData : SharedBase
- (instancetype)initWithForceSSL:(SharedBoolean * _Nullable)forceSSL baseurl:(NSString * _Nullable)baseurl contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playoutIndicator:(NSString * _Nullable)playoutIndicator playoutSafeName:(NSString * _Nullable)playoutSafeName queryString:(NSString * _Nullable)queryString __attribute__((swift_name("init(forceSSL:baseurl:contentIndicator:contentId:playoutIndicator:playoutSafeName:queryString:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedEmbedData *)doCopyForceSSL:(SharedBoolean * _Nullable)forceSSL baseurl:(NSString * _Nullable)baseurl contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playoutIndicator:(NSString * _Nullable)playoutIndicator playoutSafeName:(NSString * _Nullable)playoutSafeName queryString:(NSString * _Nullable)queryString __attribute__((swift_name("doCopy(forceSSL:baseurl:contentIndicator:contentId:playoutIndicator:playoutSafeName:queryString:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable baseurl __attribute__((swift_name("baseurl")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property (readonly) SharedBoolean * _Nullable forceSSL __attribute__((swift_name("forceSSL")));
@property (readonly) NSString * _Nullable playoutIndicator __attribute__((swift_name("playoutIndicator")));
@property (readonly) NSString * _Nullable playoutSafeName __attribute__((swift_name("playoutSafeName")));
@property (readonly) NSString * _Nullable queryString __attribute__((swift_name("queryString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedData.Companion")))
@interface SharedEmbedDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedObject")))
@interface SharedEmbedObject : SharedBBModel
- (instancetype)initWithPublicationData:(SharedPublication *)publicationData clipData:(SharedMediaClip *)clipData __attribute__((swift_name("init(publicationData:clipData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPublicationData:(SharedPublication * _Nullable)publicationData embedData:(SharedEmbedData * _Nullable)embedData playoutData:(SharedPlayout * _Nullable)playoutData clipData:(SharedMediaClip * _Nullable)clipData clipListData:(SharedMediaClipList * _Nullable)clipListData projectData:(SharedProject * _Nullable)projectData adServicesData:(NSArray<SharedAdUnit *> * _Nullable)adServicesData protocol:(NSString * _Nullable)protocol userLanguage:(NSString * _Nullable)userLanguage userDeviceType:(NSString * _Nullable)userDeviceType playoutSafeName:(NSString * _Nullable)playoutSafeName contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playerWidth:(NSString * _Nullable)playerWidth playerHeight:(NSString * _Nullable)playerHeight playerUrl:(NSString * _Nullable)playerUrl scriptTarget:(NSString * _Nullable)scriptTarget playerBase:(NSString * _Nullable)playerBase playerPath:(NSString * _Nullable)playerPath scriptLink:(NSString * _Nullable)scriptLink requestParams:(SharedRequestParams * _Nullable)requestParams versioningData:(SharedVersioningData * _Nullable)versioningData __attribute__((swift_name("init(publicationData:embedData:playoutData:clipData:clipListData:projectData:adServicesData:protocol:userLanguage:userDeviceType:playoutSafeName:contentIndicator:contentId:playerWidth:playerHeight:playerUrl:scriptTarget:playerBase:playerPath:scriptLink:requestParams:versioningData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (SharedPublication * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (SharedEmbedData * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedRequestParams * _Nullable)component21 __attribute__((swift_name("component21()")));
- (SharedVersioningData * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedPlayout * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedMediaClip * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedMediaClipList * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedProject * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<SharedAdUnit *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedEmbedObject *)doCopyPublicationData:(SharedPublication * _Nullable)publicationData embedData:(SharedEmbedData * _Nullable)embedData playoutData:(SharedPlayout * _Nullable)playoutData clipData:(SharedMediaClip * _Nullable)clipData clipListData:(SharedMediaClipList * _Nullable)clipListData projectData:(SharedProject * _Nullable)projectData adServicesData:(NSArray<SharedAdUnit *> * _Nullable)adServicesData protocol:(NSString * _Nullable)protocol userLanguage:(NSString * _Nullable)userLanguage userDeviceType:(NSString * _Nullable)userDeviceType playoutSafeName:(NSString * _Nullable)playoutSafeName contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId playerWidth:(NSString * _Nullable)playerWidth playerHeight:(NSString * _Nullable)playerHeight playerUrl:(NSString * _Nullable)playerUrl scriptTarget:(NSString * _Nullable)scriptTarget playerBase:(NSString * _Nullable)playerBase playerPath:(NSString * _Nullable)playerPath scriptLink:(NSString * _Nullable)scriptLink requestParams:(SharedRequestParams * _Nullable)requestParams versioningData:(SharedVersioningData * _Nullable)versioningData __attribute__((swift_name("doCopy(publicationData:embedData:playoutData:clipData:clipListData:projectData:adServicesData:protocol:userLanguage:userDeviceType:playoutSafeName:contentIndicator:contentId:playerWidth:playerHeight:playerUrl:scriptTarget:playerBase:playerPath:scriptLink:requestParams:versioningData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAdUnit *> * _Nullable adServicesData __attribute__((swift_name("adServicesData")));
@property (readonly) SharedMediaClip * _Nullable clipData __attribute__((swift_name("clipData")));
@property (readonly) SharedMediaClipList * _Nullable clipListData __attribute__((swift_name("clipListData")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property (readonly) SharedEmbedData * _Nullable embedData __attribute__((swift_name("embedData")));
@property (readonly) NSString * _Nullable playerBase __attribute__((swift_name("playerBase")));
@property (readonly) NSString * _Nullable playerHeight __attribute__((swift_name("playerHeight")));
@property (readonly) NSString * _Nullable playerPath __attribute__((swift_name("playerPath")));
@property (readonly) NSString * _Nullable playerUrl __attribute__((swift_name("playerUrl")));
@property (readonly) NSString * _Nullable playerWidth __attribute__((swift_name("playerWidth")));
@property (readonly) SharedPlayout * _Nullable playoutData __attribute__((swift_name("playoutData")));
@property (readonly) NSString * _Nullable playoutSafeName __attribute__((swift_name("playoutSafeName")));
@property (readonly) SharedProject * _Nullable projectData __attribute__((swift_name("projectData")));
@property (readonly) NSString * _Nullable protocol __attribute__((swift_name("protocol")));
@property (readonly) SharedPublication * _Nullable publicationData __attribute__((swift_name("publicationData")));
@property (readonly) SharedRequestParams * _Nullable requestParams __attribute__((swift_name("requestParams")));
@property (readonly) NSString * _Nullable scriptLink __attribute__((swift_name("scriptLink")));
@property (readonly) NSString * _Nullable scriptTarget __attribute__((swift_name("scriptTarget")));
@property (readonly) NSString * _Nullable userDeviceType __attribute__((swift_name("userDeviceType")));
@property (readonly) NSString * _Nullable userLanguage __attribute__((swift_name("userLanguage")));
@property (readonly) SharedVersioningData * _Nullable versioningData __attribute__((swift_name("versioningData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedObject.Companion")))
@interface SharedEmbedObjectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItem_")))
@interface SharedLineItem_ : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy creativeType:(NSString * _Nullable)creativeType timeout:(SharedLong * _Nullable)timeout preferredPlayMode:(NSString * _Nullable)preferredPlayMode playout:(NSDictionary<NSString *, NSString *> * _Nullable)playout title:(NSString * _Nullable)title code:(NSString * _Nullable)code vastUrl:(NSString * _Nullable)vastUrl vastSubtype:(NSString * _Nullable)vastSubtype label:(NSString * _Nullable)label relatedAdunits:(NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)relatedAdunits __attribute__((swift_name("init(id:publicationid:type:status:createddate:createdBy:updateddate:updatedBy:creativeType:timeout:preferredPlayMode:playout:title:code:vastUrl:vastSubtype:label:relatedAdunits:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLong * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedLineItem_ *)doCopyId:(NSString * _Nullable)id publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy creativeType:(NSString * _Nullable)creativeType timeout:(SharedLong * _Nullable)timeout preferredPlayMode:(NSString * _Nullable)preferredPlayMode playout:(NSDictionary<NSString *, NSString *> * _Nullable)playout title:(NSString * _Nullable)title code:(NSString * _Nullable)code vastUrl:(NSString * _Nullable)vastUrl vastSubtype:(NSString * _Nullable)vastSubtype label:(NSString * _Nullable)label relatedAdunits:(NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)relatedAdunits __attribute__((swift_name("doCopy(id:publicationid:type:status:createddate:createdBy:updateddate:updatedBy:creativeType:timeout:preferredPlayMode:playout:title:code:vastUrl:vastSubtype:label:relatedAdunits:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable creativeType __attribute__((swift_name("creativeType")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable playout __attribute__((swift_name("playout")));
@property (readonly) NSString * _Nullable preferredPlayMode __attribute__((swift_name("preferredPlayMode")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable relatedAdunits __attribute__((swift_name("relatedAdunits")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) SharedLong * _Nullable timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable vastSubtype __attribute__((swift_name("vastSubtype")));
@property (readonly) NSString * _Nullable vastUrl __attribute__((swift_name("vastUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineItem_.Companion")))
@interface SharedLineItem_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAsset")))
@interface SharedMediaAsset : SharedBase
- (instancetype)initWithMediatype:(NSString * _Nullable)mediatype id:(NSString * _Nullable)id status:(NSString * _Nullable)status src:(NSString * _Nullable)src length:(NSString * _Nullable)length exactlength:(NSString * _Nullable)exactlength width:(NSString * _Nullable)width height:(NSString * _Nullable)height bandwidth:(NSString * _Nullable)bandwidth jobdefid:(NSString * _Nullable)jobdefid languageId:(NSString * _Nullable)languageId languageName:(NSString * _Nullable)languageName languageIsocode:(NSString * _Nullable)languageIsocode isDefaultLanguage:(SharedBoolean * _Nullable)isDefaultLanguage __attribute__((swift_name("init(mediatype:id:status:src:length:exactlength:width:height:bandwidth:jobdefid:languageId:languageName:languageIsocode:isDefaultLanguage:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMediaAsset *)doCopyMediatype:(NSString * _Nullable)mediatype id:(NSString * _Nullable)id status:(NSString * _Nullable)status src:(NSString * _Nullable)src length:(NSString * _Nullable)length exactlength:(NSString * _Nullable)exactlength width:(NSString * _Nullable)width height:(NSString * _Nullable)height bandwidth:(NSString * _Nullable)bandwidth jobdefid:(NSString * _Nullable)jobdefid languageId:(NSString * _Nullable)languageId languageName:(NSString * _Nullable)languageName languageIsocode:(NSString * _Nullable)languageIsocode isDefaultLanguage:(SharedBoolean * _Nullable)isDefaultLanguage __attribute__((swift_name("doCopy(mediatype:id:status:src:length:exactlength:width:height:bandwidth:jobdefid:languageId:languageName:languageIsocode:isDefaultLanguage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bandwidth __attribute__((swift_name("bandwidth")));
@property (readonly) NSString * _Nullable exactlength __attribute__((swift_name("exactlength")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isDefaultLanguage __attribute__((swift_name("isDefaultLanguage")));
@property (readonly) NSString * _Nullable jobdefid __attribute__((swift_name("jobdefid")));
@property (readonly) NSString * _Nullable languageId __attribute__((swift_name("languageId")));
@property (readonly) NSString * _Nullable languageIsocode __attribute__((swift_name("languageIsocode")));
@property (readonly) NSString * _Nullable languageName __attribute__((swift_name("languageName")));
@property (readonly) NSString * _Nullable length __attribute__((swift_name("length")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaAsset.Companion")))
@interface SharedMediaAssetCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ContentItemInterface")))
@protocol SharedContentItemInterface
@required
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClip")))
@interface SharedMediaClip : SharedContentItem <SharedContentItemInterface>
- (instancetype)initWithId:(NSString *)id title:(NSString *)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title mediatype:(NSString * _Nullable)mediatype mediatype_override:(NSString * _Nullable)mediatype_override fitmode:(NSString * _Nullable)fitmode usetype:(NSString * _Nullable)usetype location:(NSString * _Nullable)location sourcetype:(NSString * _Nullable)sourcetype originalfilename:(NSString * _Nullable)originalfilename length:(NSString * _Nullable)length sourceid:(NSString * _Nullable)sourceid description:(NSString * _Nullable)description deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink copyright:(NSString * _Nullable)copyright author:(NSString * _Nullable)author status:(NSString * _Nullable)status publicationid:(NSString * _Nullable)publicationid createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate publisheddate:(NSString * _Nullable)publisheddate views:(SharedLong * _Nullable)views width:(SharedLong * _Nullable)width height:(SharedLong * _Nullable)height dar:(NSString * _Nullable)dar originalWidth:(SharedLong * _Nullable)originalWidth originalHeight:(SharedLong * _Nullable)originalHeight date:(SharedDates * _Nullable)date src:(NSString * _Nullable)src cat:(NSArray<NSString *> * _Nullable)cat thumbnails:(NSArray<SharedThumbnail *> * _Nullable)thumbnails movingThumbnails:(NSArray<SharedThumbnail *> * _Nullable)movingThumbnails assets:(NSArray<SharedMediaAsset *> * _Nullable)assets hasJobs:(NSString * _Nullable)hasJobs hasFailedJobs:(SharedBoolean * _Nullable)hasFailedJobs hasRunningJobs:(SharedBoolean * _Nullable)hasRunningJobs hasNewJobs:(SharedBoolean * _Nullable)hasNewJobs transcodingFinished:(SharedBoolean * _Nullable)transcodingFinished isYoutubeImport:(SharedBoolean * _Nullable)isYoutubeImport subtitles:(NSArray<SharedSubtitle *> * _Nullable)subtitles transcript:(NSString * _Nullable)transcript timelines:(NSArray<SharedTimeline *> * _Nullable)timelines audiotracks:(NSArray<SharedAudiotrack *> * _Nullable)audiotracks youtubeImportID:(NSString * _Nullable)youtubeImportID importSource:(NSString * _Nullable)importSource importURL:(NSString * _Nullable)importURL disablecommercials:(NSString * _Nullable)disablecommercials isDynamic:(NSString * _Nullable)isDynamic checkbox:(NSString * _Nullable)checkbox comment:(NSString * _Nullable)comment isOutro:(NSString * _Nullable)isOutro projectId:(NSString * _Nullable)projectId __attribute__((swift_name("init(id:title:mediatype:mediatype_override:fitmode:usetype:location:sourcetype:originalfilename:length:sourceid:description:deeplink:gendeeplink:copyright:author:status:publicationid:createddate:updateddate:publisheddate:views:width:height:dar:originalWidth:originalHeight:date:src:cat:thumbnails:movingThumbnails:assets:hasJobs:hasFailedJobs:hasRunningJobs:hasNewJobs:transcodingFinished:isYoutubeImport:subtitles:transcript:timelines:audiotracks:youtubeImportID:importSource:importURL:disablecommercials:isDynamic:checkbox:comment:isOutro:projectId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (SharedLong * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedLong * _Nullable)component23 __attribute__((swift_name("component23()")));
- (SharedLong * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (SharedLong * _Nullable)component26 __attribute__((swift_name("component26()")));
- (SharedLong * _Nullable)component27 __attribute__((swift_name("component27()")));
- (SharedDates * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSArray<SharedThumbnail *> * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSArray<SharedThumbnail *> * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSArray<SharedMediaAsset *> * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSString * _Nullable)component34 __attribute__((swift_name("component34()")));
- (SharedBoolean * _Nullable)component35 __attribute__((swift_name("component35()")));
- (SharedBoolean * _Nullable)component36 __attribute__((swift_name("component36()")));
- (SharedBoolean * _Nullable)component37 __attribute__((swift_name("component37()")));
- (SharedBoolean * _Nullable)component38 __attribute__((swift_name("component38()")));
- (SharedBoolean * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedSubtitle *> * _Nullable)component40 __attribute__((swift_name("component40()")));
- (NSString * _Nullable)component41 __attribute__((swift_name("component41()")));
- (NSArray<SharedTimeline *> * _Nullable)component42 __attribute__((swift_name("component42()")));
- (NSArray<SharedAudiotrack *> * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component44 __attribute__((swift_name("component44()")));
- (NSString * _Nullable)component45 __attribute__((swift_name("component45()")));
- (NSString * _Nullable)component46 __attribute__((swift_name("component46()")));
- (NSString * _Nullable)component47 __attribute__((swift_name("component47()")));
- (NSString * _Nullable)component48 __attribute__((swift_name("component48()")));
- (NSString * _Nullable)component49 __attribute__((swift_name("component49()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component50 __attribute__((swift_name("component50()")));
- (NSString * _Nullable)component51 __attribute__((swift_name("component51()")));
- (NSString * _Nullable)component52 __attribute__((swift_name("component52()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMediaClip *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title mediatype:(NSString * _Nullable)mediatype mediatype_override:(NSString * _Nullable)mediatype_override fitmode:(NSString * _Nullable)fitmode usetype:(NSString * _Nullable)usetype location:(NSString * _Nullable)location sourcetype:(NSString * _Nullable)sourcetype originalfilename:(NSString * _Nullable)originalfilename length:(NSString * _Nullable)length sourceid:(NSString * _Nullable)sourceid description:(NSString * _Nullable)description deeplink:(NSString * _Nullable)deeplink gendeeplink:(NSString * _Nullable)gendeeplink copyright:(NSString * _Nullable)copyright author:(NSString * _Nullable)author status:(NSString * _Nullable)status publicationid:(NSString * _Nullable)publicationid createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate publisheddate:(NSString * _Nullable)publisheddate views:(SharedLong * _Nullable)views width:(SharedLong * _Nullable)width height:(SharedLong * _Nullable)height dar:(NSString * _Nullable)dar originalWidth:(SharedLong * _Nullable)originalWidth originalHeight:(SharedLong * _Nullable)originalHeight date:(SharedDates * _Nullable)date src:(NSString * _Nullable)src cat:(NSArray<NSString *> * _Nullable)cat thumbnails:(NSArray<SharedThumbnail *> * _Nullable)thumbnails movingThumbnails:(NSArray<SharedThumbnail *> * _Nullable)movingThumbnails assets:(NSArray<SharedMediaAsset *> * _Nullable)assets hasJobs:(NSString * _Nullable)hasJobs hasFailedJobs:(SharedBoolean * _Nullable)hasFailedJobs hasRunningJobs:(SharedBoolean * _Nullable)hasRunningJobs hasNewJobs:(SharedBoolean * _Nullable)hasNewJobs transcodingFinished:(SharedBoolean * _Nullable)transcodingFinished isYoutubeImport:(SharedBoolean * _Nullable)isYoutubeImport subtitles:(NSArray<SharedSubtitle *> * _Nullable)subtitles transcript:(NSString * _Nullable)transcript timelines:(NSArray<SharedTimeline *> * _Nullable)timelines audiotracks:(NSArray<SharedAudiotrack *> * _Nullable)audiotracks youtubeImportID:(NSString * _Nullable)youtubeImportID importSource:(NSString * _Nullable)importSource importURL:(NSString * _Nullable)importURL disablecommercials:(NSString * _Nullable)disablecommercials isDynamic:(NSString * _Nullable)isDynamic checkbox:(NSString * _Nullable)checkbox comment:(NSString * _Nullable)comment isOutro:(NSString * _Nullable)isOutro projectId:(NSString * _Nullable)projectId __attribute__((swift_name("doCopy(id:title:mediatype:mediatype_override:fitmode:usetype:location:sourcetype:originalfilename:length:sourceid:description:deeplink:gendeeplink:copyright:author:status:publicationid:createddate:updateddate:publisheddate:views:width:height:dar:originalWidth:originalHeight:date:src:cat:thumbnails:movingThumbnails:assets:hasJobs:hasFailedJobs:hasRunningJobs:hasNewJobs:transcodingFinished:isYoutubeImport:subtitles:transcript:timelines:audiotracks:youtubeImportID:importSource:importURL:disablecommercials:isDynamic:checkbox:comment:isOutro:projectId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedMediaAsset *> * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSArray<SharedAudiotrack *> * _Nullable audiotracks __attribute__((swift_name("audiotracks")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) NSArray<NSString *> * _Nullable cat __attribute__((swift_name("cat")));
@property (readonly) NSString * _Nullable checkbox __attribute__((swift_name("checkbox")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable copyright __attribute__((swift_name("copyright")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable dar __attribute__((swift_name("dar")));
@property (readonly) SharedDates * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable deeplink __attribute__((swift_name("deeplink")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable disablecommercials __attribute__((swift_name("disablecommercials")));
@property (readonly) NSString * _Nullable fitmode __attribute__((swift_name("fitmode")));
@property (readonly) NSString * _Nullable gendeeplink __attribute__((swift_name("gendeeplink")));
@property (readonly) SharedBoolean * _Nullable hasFailedJobs __attribute__((swift_name("hasFailedJobs")));
@property (readonly) NSString * _Nullable hasJobs __attribute__((swift_name("hasJobs")));
@property (readonly) SharedBoolean * _Nullable hasNewJobs __attribute__((swift_name("hasNewJobs")));
@property (readonly) SharedBoolean * _Nullable hasRunningJobs __attribute__((swift_name("hasRunningJobs")));
@property (readonly) SharedLong * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable importSource __attribute__((swift_name("importSource")));
@property (readonly) NSString * _Nullable importURL __attribute__((swift_name("importURL")));
@property (readonly) NSString * _Nullable isDynamic __attribute__((swift_name("isDynamic")));
@property (readonly) NSString * _Nullable isOutro __attribute__((swift_name("isOutro")));
@property (readonly) SharedBoolean * _Nullable isYoutubeImport __attribute__((swift_name("isYoutubeImport")));
@property NSString * _Nullable length __attribute__((swift_name("length")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable mediatype_override __attribute__((swift_name("mediatype_override")));
@property (readonly) NSArray<SharedThumbnail *> * _Nullable movingThumbnails __attribute__((swift_name("movingThumbnails")));
@property (readonly) SharedLong * _Nullable originalHeight __attribute__((swift_name("originalHeight")));
@property (readonly) SharedLong * _Nullable originalWidth __attribute__((swift_name("originalWidth")));
@property (readonly) NSString * _Nullable originalfilename __attribute__((swift_name("originalfilename")));
@property NSString * _Nullable projectId __attribute__((swift_name("projectId")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable sourceid __attribute__((swift_name("sourceid")));
@property (readonly) NSString * _Nullable sourcetype __attribute__((swift_name("sourcetype")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<SharedSubtitle *> * _Nullable subtitles __attribute__((swift_name("subtitles")));
@property (readonly) NSArray<SharedThumbnail *> * _Nullable thumbnails __attribute__((swift_name("thumbnails")));
@property (readonly) NSArray<SharedTimeline *> * _Nullable timelines __attribute__((swift_name("timelines")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) SharedBoolean * _Nullable transcodingFinished __attribute__((swift_name("transcodingFinished")));
@property (readonly) NSString * _Nullable transcript __attribute__((swift_name("transcript")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable usetype __attribute__((swift_name("usetype")));
@property (readonly) SharedLong * _Nullable views __attribute__((swift_name("views")));
@property (readonly) SharedLong * _Nullable width __attribute__((swift_name("width")));
@property (readonly) NSString * _Nullable youtubeImportID __attribute__((swift_name("youtubeImportID")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClip.Companion")))
@interface SharedMediaClipCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClipList")))
@interface SharedMediaClipList : SharedContentItem <SharedContentItemInterface>
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title numfound:(SharedLong * _Nullable)numfound offset:(SharedLong * _Nullable)offset parentid:(NSString * _Nullable)parentid status:(NSString * _Nullable)status publication:(NSArray<NSString *> * _Nullable)publication publicationid:(SharedLong * _Nullable)publicationid parentpublicationid:(NSString * _Nullable)parentpublicationid mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype modifieddate:(NSString * _Nullable)modifieddate createddate:(NSString * _Nullable)createddate publishedDate:(NSString * _Nullable)publishedDate listtypeString:(NSString * _Nullable)listtypeString isEmptyBoolean:(SharedBoolean * _Nullable)isEmptyBoolean filtersString:(NSString * _Nullable)filtersString createdbyString:(NSString * _Nullable)createdbyString updatedbyString:(NSString * _Nullable)updatedbyString allowDatasource:(NSString * _Nullable)allowDatasource allowDatasource_boolean:(SharedBoolean * _Nullable)allowDatasource_boolean score:(SharedDouble * _Nullable)score count:(SharedLong * _Nullable)count items:(NSArray<SharedContentItem *> * _Nullable)items __attribute__((swift_name("init(id:title:numfound:offset:parentid:status:publication:publicationid:parentpublicationid:mediatype:usetype:modifieddate:createddate:publishedDate:listtypeString:isEmptyBoolean:filtersString:createdbyString:updatedbyString:allowDatasource:allowDatasource_boolean:score:count:items:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (SharedBoolean * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedBoolean * _Nullable)component21 __attribute__((swift_name("component21()")));
- (SharedDouble * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedLong * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSArray<SharedContentItem *> * _Nullable)component24 __attribute__((swift_name("component24()")));
- (SharedLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedLong * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedMediaClipList *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title numfound:(SharedLong * _Nullable)numfound offset:(SharedLong * _Nullable)offset parentid:(NSString * _Nullable)parentid status:(NSString * _Nullable)status publication:(NSArray<NSString *> * _Nullable)publication publicationid:(SharedLong * _Nullable)publicationid parentpublicationid:(NSString * _Nullable)parentpublicationid mediatype:(NSString * _Nullable)mediatype usetype:(NSString * _Nullable)usetype modifieddate:(NSString * _Nullable)modifieddate createddate:(NSString * _Nullable)createddate publishedDate:(NSString * _Nullable)publishedDate listtypeString:(NSString * _Nullable)listtypeString isEmptyBoolean:(SharedBoolean * _Nullable)isEmptyBoolean filtersString:(NSString * _Nullable)filtersString createdbyString:(NSString * _Nullable)createdbyString updatedbyString:(NSString * _Nullable)updatedbyString allowDatasource:(NSString * _Nullable)allowDatasource allowDatasource_boolean:(SharedBoolean * _Nullable)allowDatasource_boolean score:(SharedDouble * _Nullable)score count:(SharedLong * _Nullable)count items:(NSArray<SharedContentItem *> * _Nullable)items __attribute__((swift_name("doCopy(id:title:numfound:offset:parentid:status:publication:publicationid:parentpublicationid:mediatype:usetype:modifieddate:createddate:publishedDate:listtypeString:isEmptyBoolean:filtersString:createdbyString:updatedbyString:allowDatasource:allowDatasource_boolean:score:count:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable allowDatasource __attribute__((swift_name("allowDatasource")));
@property (readonly) SharedBoolean * _Nullable allowDatasource_boolean __attribute__((swift_name("allowDatasource_boolean")));
@property (readonly) SharedLong * _Nullable count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable createdbyString __attribute__((swift_name("createdbyString")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable filtersString __attribute__((swift_name("filtersString")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isEmptyBoolean __attribute__((swift_name("isEmptyBoolean")));
@property (readonly) NSArray<SharedContentItem *> * _Nullable items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable listtypeString __attribute__((swift_name("listtypeString")));
@property (readonly) NSString * _Nullable mediatype __attribute__((swift_name("mediatype")));
@property (readonly) NSString * _Nullable modifieddate __attribute__((swift_name("modifieddate")));
@property (readonly) SharedLong * _Nullable numfound __attribute__((swift_name("numfound")));
@property (readonly) SharedLong * _Nullable offset __attribute__((swift_name("offset")));
@property (readonly) NSString * _Nullable parentid __attribute__((swift_name("parentid")));
@property (readonly) NSString * _Nullable parentpublicationid __attribute__((swift_name("parentpublicationid")));
@property (readonly) NSArray<NSString *> * _Nullable publication __attribute__((swift_name("publication")));
@property (readonly) SharedLong * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable publishedDate __attribute__((swift_name("publishedDate")));
@property (readonly) SharedDouble * _Nullable score __attribute__((swift_name("score")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable updatedbyString __attribute__((swift_name("updatedbyString")));
@property (readonly) NSString * _Nullable usetype __attribute__((swift_name("usetype")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaClipList.Companion")))
@interface SharedMediaClipListCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Player")))
@interface SharedPlayer : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type src:(NSString * _Nullable)src updateddate:(NSString * _Nullable)updateddate __attribute__((swift_name("init(id:name:type:src:updateddate:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedPlayer *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type src:(NSString * _Nullable)src updateddate:(NSString * _Nullable)updateddate __attribute__((swift_name("doCopy(id:name:type:src:updateddate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Player.Companion")))
@interface SharedPlayerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSettings")))
@interface SharedPlayerSettings : SharedBase
- (instancetype)initWithPlayout:(NSString *)playout __attribute__((swift_name("init(playout:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPlayout:(NSString *)playout autoPlay:(BOOL)autoPlay __attribute__((swift_name("init(playout:autoPlay:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedPlayerSettings *)doCopyPlayout:(NSString *)playout autoPlay:(BOOL)autoPlay __attribute__((swift_name("doCopy(playout:autoPlay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) NSString *playout __attribute__((swift_name("playout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSettings.Companion")))
@interface SharedPlayerSettingsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Playout")))
@interface SharedPlayout : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id main:(NSString * _Nullable)main publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type name:(NSString * _Nullable)name status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate label:(NSString * _Nullable)label publication:(NSString * _Nullable)publication player:(SharedPlayer * _Nullable)player playerid:(NSString * _Nullable)playerid responsiveSizing:(NSString * _Nullable)responsiveSizing aspectRatio:(NSString * _Nullable)aspectRatio width:(NSString * _Nullable)width height:(NSString * _Nullable)height autoHeight:(NSString * _Nullable)autoHeight alphaControlBar:(NSString * _Nullable)alphaControlBar skin_backgroundColor:(NSString * _Nullable)skin_backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor skin_widgetColor:(NSString * _Nullable)skin_widgetColor bgColor:(NSString * _Nullable)bgColor logoId:(NSString * _Nullable)logoId logoAlign:(NSString * _Nullable)logoAlign logoClickURL:(NSString * _Nullable)logoClickURL controlBar:(NSString * _Nullable)controlBar controlBarPlacement:(NSString * _Nullable)controlBarPlacement timeDisplay:(NSString * _Nullable)timeDisplay timeLine:(NSString * _Nullable)timeLine muteButton:(NSString * _Nullable)muteButton volume:(NSString * _Nullable)volume volumeOrientation:(NSString * _Nullable)volumeOrientation languageSelect:(NSString * _Nullable)languageSelect qualitySelector:(NSString * _Nullable)qualitySelector playbackRateSelector:(NSString * _Nullable)playbackRateSelector fullScreen:(NSString * _Nullable)fullScreen shareButton:(NSString * _Nullable)shareButton shareButtonEmbedCode:(NSString * _Nullable)shareButtonEmbedCode shareButtonEmail:(NSString * _Nullable)shareButtonEmail shareButtonFacebook:(NSString * _Nullable)shareButtonFacebook shareButtonLinkedIn:(NSString * _Nullable)shareButtonLinkedIn shareButtonPinterest:(NSString * _Nullable)shareButtonPinterest shareButtonTwitter:(NSString * _Nullable)shareButtonTwitter shareButtonWhatsApp:(NSString * _Nullable)shareButtonWhatsApp castButton:(NSString * _Nullable)castButton showBigPlayButton:(NSString * _Nullable)showBigPlayButton showBigReplayButton:(NSString * _Nullable)showBigReplayButton title:(NSString * _Nullable)title date:(NSString * _Nullable)date authorCopyright:(NSString * _Nullable)authorCopyright authorCopyrightAlign:(NSString * _Nullable)authorCopyrightAlign authorCopyrightPrefixText:(NSString * _Nullable)authorCopyrightPrefixText autoPlayNext:(NSString * _Nullable)autoPlayNext relatedItems:(NSString * _Nullable)relatedItems relatedItemsPause:(NSString * _Nullable)relatedItemsPause useDeeplinkForRelatedItems:(NSString * _Nullable)useDeeplinkForRelatedItems exitscreenItemsListId:(NSString * _Nullable)exitscreenItemsListId randomizeRelatedItems:(NSString * _Nullable)randomizeRelatedItems useDeeplinkForFacebook:(NSString * _Nullable)useDeeplinkForFacebook shareTwitterText:(NSString * _Nullable)shareTwitterText sharePlayout:(NSString * _Nullable)sharePlayout skinBehaviour:(NSString * _Nullable)skinBehaviour skinOnTimeline:(NSString * _Nullable)skinOnTimeline nativeControls:(NSString * _Nullable)nativeControls youTubeHosting:(NSString * _Nullable)youTubeHosting youTubeSkinInMainPhase:(NSString * _Nullable)youTubeSkinInMainPhase forceNativeFullscreen:(NSString * _Nullable)forceNativeFullscreen preferHD:(NSString * _Nullable)preferHD nedStatLoggerUrl:(NSString * _Nullable)nedStatLoggerUrl googleAnalyticsId:(NSString * _Nullable)googleAnalyticsId piwikUrl:(NSString * _Nullable)piwikUrl piwikSiteId:(NSString * _Nullable)piwikSiteId adobeAnalyticsTrackingServer:(NSString * _Nullable)adobeAnalyticsTrackingServer adobeAnalyticsMcorgID:(NSString * _Nullable)adobeAnalyticsMcorgID adobeAnalyticsRsID:(NSString * _Nullable)adobeAnalyticsRsID adobeAnalyticsLegacy:(NSString * _Nullable)adobeAnalyticsLegacy disableCookies:(NSString * _Nullable)disableCookies disableContextMenuNavigate:(NSString * _Nullable)disableContextMenuNavigate playerSignature:(NSString * _Nullable)playerSignature playerSignatureLink:(NSString * _Nullable)playerSignatureLink autoPlay:(NSString * _Nullable)autoPlay autoMute:(NSString * _Nullable)autoMute autoMuteIfNeededForAutoPlay:(NSString * _Nullable)autoMuteIfNeededForAutoPlay autoLoop:(NSString * _Nullable)autoLoop floatPlayer:(NSString * _Nullable)floatPlayer interactivityInView:(NSString * _Nullable)interactivityInView interactivityOutView:(NSString * _Nullable)interactivityOutView inviewMargin:(NSString * _Nullable)inviewMargin textAbovePlayer:(NSString * _Nullable)textAbovePlayer textCommercialSkip:(NSString * _Nullable)textCommercialSkip startCollapsed:(NSString * _Nullable)startCollapsed playInOverlay:(NSString * _Nullable)playInOverlay hidePlayerOnEnd:(NSString * _Nullable)hidePlayerOnEnd waitForApproval:(NSString * _Nullable)waitForApproval interactivityMouseIn:(NSString * _Nullable)interactivityMouseIn interactivityMouseOut:(NSString * _Nullable)interactivityMouseOut interactivityOnClick:(NSString * _Nullable)interactivityOnClick clickURL:(NSString * _Nullable)clickURL nsiNoAutoPlay:(NSString * _Nullable)nsiNoAutoPlay nsiNoPlayer:(NSString * _Nullable)nsiNoPlayer placementOption:(NSString * _Nullable)placementOption placementDOMSelector:(NSString * _Nullable)placementDOMSelector iframeBreakout:(NSString * _Nullable)iframeBreakout clearBothOption:(NSString * _Nullable)clearBothOption forceInview:(NSString * _Nullable)forceInview customCode:(NSString * _Nullable)customCode preferFlashPlayback:(NSString * _Nullable)preferFlashPlayback preloadMainroll:(NSString * _Nullable)preloadMainroll disableHtml5VPAID:(NSString * _Nullable)disableHtml5VPAID enableHtml5VPAID:(NSString * _Nullable)enableHtml5VPAID commercialPauseButton:(NSString * _Nullable)commercialPauseButton commercialMuteButton:(NSString * _Nullable)commercialMuteButton commercials:(NSString * _Nullable)commercials textCommercialTimeRemaining:(NSString * _Nullable)textCommercialTimeRemaining commercialBehaviour:(NSString * _Nullable)commercialBehaviour minClipDurationPreroll:(NSString * _Nullable)minClipDurationPreroll minClipDurationPostroll:(NSString * _Nullable)minClipDurationPostroll allowBBIma:(NSString * _Nullable)allowBBIma fitmode:(SharedFitMode * _Nullable)fitmode viewpageOverrideDimensions:(NSString * _Nullable)viewpageOverrideDimensions viewpageHideTitles:(NSString * _Nullable)viewpageHideTitles viewpageAlignment:(NSString * _Nullable)viewpageAlignment viewpageBackgroundColor:(NSString * _Nullable)viewpageBackgroundColor viewpageColor:(NSString * _Nullable)viewpageColor viewpageBackgroundClipID:(NSString * _Nullable)viewpageBackgroundClipID viewpageBackgroundPosition:(NSString * _Nullable)viewpageBackgroundPosition viewpageBackgroundSize:(NSString * _Nullable)viewpageBackgroundSize viewpageBackgroundRepeat:(NSString * _Nullable)viewpageBackgroundRepeat viewpageLogo1ClipID:(NSString * _Nullable)viewpageLogo1ClipID viewpageLogo1Position:(NSString * _Nullable)viewpageLogo1Position viewpageLogo2ClipID:(NSString * _Nullable)viewpageLogo2ClipID viewpageLogo2Position:(NSString * _Nullable)viewpageLogo2Position viewpageLogo3ClipID:(NSString * _Nullable)viewpageLogo3ClipID viewpageLogo3Position:(NSString * _Nullable)viewpageLogo3Position viewpageLogo4ClipID:(NSString * _Nullable)viewpageLogo4ClipID viewpageLogo4Position:(NSString * _Nullable)viewpageLogo4Position noStats:(NSString * _Nullable)noStats forceAndroidNativeVideo:(NSString * _Nullable)forceAndroidNativeVideo forceIOSNativeVideo:(NSString * _Nullable)forceIOSNativeVideo use2018Skin:(NSString * _Nullable)use2018Skin audioTrackSelect:(NSString * _Nullable)audioTrackSelect shareText:(NSString * _Nullable)shareText shareButtonDirectLink:(NSString * _Nullable)shareButtonDirectLink googleAnalyticsCustomVars:(NSString * _Nullable)googleAnalyticsCustomVars supportIABConsent:(NSString * _Nullable)supportIABConsent restrictionNpaOnly:(NSString * _Nullable)restrictionNpaOnly restrictionNpcOnly:(NSString * _Nullable)restrictionNpcOnly defaultSubtitle:(NSString * _Nullable)defaultSubtitle defaultSubtitleOnlyIfMuted:(NSString * _Nullable)defaultSubtitleOnlyIfMuted defaultAudioTrack:(NSString * _Nullable)defaultAudioTrack forceCanAutoPlay:(NSString * _Nullable)forceCanAutoPlay avoidMutedAutoplay:(NSString * _Nullable)avoidMutedAutoplay stickyMode:(NSString * _Nullable)stickyMode disableKeyboardControls:(NSString * _Nullable)disableKeyboardControls taggingDisabled:(NSString * _Nullable)taggingDisabled skipOffset:(NSString * _Nullable)skipOffset skipCounterText:(NSString * _Nullable)skipCounterText skipButtonText:(NSString * _Nullable)skipButtonText blockInsecureVPAID:(NSString * _Nullable)blockInsecureVPAID shareButtonGooglePlus:(NSString * _Nullable)shareButtonGooglePlus adunits:(NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)adunits hasAdunits:(SharedBoolean * _Nullable)hasAdunits adunitsPreroll:(NSArray<SharedAdUnit *> * _Nullable)adunitsPreroll ignoreSingleMediaResource:(NSString * _Nullable)ignoreSingleMediaResource ignoreProjectMetadata:(NSString * _Nullable)ignoreProjectMetadata noPosterInExitPhase:(NSString * _Nullable)noPosterInExitPhase logProgressAsQuartiles:(NSString * _Nullable)logProgressAsQuartiles autoPauseAfterPrePhase:(NSString * _Nullable)autoPauseAfterPrePhase autoPlayOnlyWithPrerollAd:(NSString * _Nullable)autoPlayOnlyWithPrerollAd showOnlyWhenPrerollAvailable:(NSString * _Nullable)showOnlyWhenPrerollAvailable adsystem_buid:(NSString * _Nullable)adsystem_buid adsystem_rdid:(NSString * _Nullable)adsystem_rdid adsystem_idtype:(NSString * _Nullable)adsystem_idtype adsystem_is_lat:(NSString * _Nullable)adsystem_is_lat __attribute__((swift_name("init(id:main:publicationid:type:name:status:createddate:updateddate:label:publication:player:playerid:responsiveSizing:aspectRatio:width:height:autoHeight:alphaControlBar:skin_backgroundColor:skin_foregroundColor:skin_widgetColor:bgColor:logoId:logoAlign:logoClickURL:controlBar:controlBarPlacement:timeDisplay:timeLine:muteButton:volume:volumeOrientation:languageSelect:qualitySelector:playbackRateSelector:fullScreen:shareButton:shareButtonEmbedCode:shareButtonEmail:shareButtonFacebook:shareButtonLinkedIn:shareButtonPinterest:shareButtonTwitter:shareButtonWhatsApp:castButton:showBigPlayButton:showBigReplayButton:title:date:authorCopyright:authorCopyrightAlign:authorCopyrightPrefixText:autoPlayNext:relatedItems:relatedItemsPause:useDeeplinkForRelatedItems:exitscreenItemsListId:randomizeRelatedItems:useDeeplinkForFacebook:shareTwitterText:sharePlayout:skinBehaviour:skinOnTimeline:nativeControls:youTubeHosting:youTubeSkinInMainPhase:forceNativeFullscreen:preferHD:nedStatLoggerUrl:googleAnalyticsId:piwikUrl:piwikSiteId:adobeAnalyticsTrackingServer:adobeAnalyticsMcorgID:adobeAnalyticsRsID:adobeAnalyticsLegacy:disableCookies:disableContextMenuNavigate:playerSignature:playerSignatureLink:autoPlay:autoMute:autoMuteIfNeededForAutoPlay:autoLoop:floatPlayer:interactivityInView:interactivityOutView:inviewMargin:textAbovePlayer:textCommercialSkip:startCollapsed:playInOverlay:hidePlayerOnEnd:waitForApproval:interactivityMouseIn:interactivityMouseOut:interactivityOnClick:clickURL:nsiNoAutoPlay:nsiNoPlayer:placementOption:placementDOMSelector:iframeBreakout:clearBothOption:forceInview:customCode:preferFlashPlayback:preloadMainroll:disableHtml5VPAID:enableHtml5VPAID:commercialPauseButton:commercialMuteButton:commercials:textCommercialTimeRemaining:commercialBehaviour:minClipDurationPreroll:minClipDurationPostroll:allowBBIma:fitmode:viewpageOverrideDimensions:viewpageHideTitles:viewpageAlignment:viewpageBackgroundColor:viewpageColor:viewpageBackgroundClipID:viewpageBackgroundPosition:viewpageBackgroundSize:viewpageBackgroundRepeat:viewpageLogo1ClipID:viewpageLogo1Position:viewpageLogo2ClipID:viewpageLogo2Position:viewpageLogo3ClipID:viewpageLogo3Position:viewpageLogo4ClipID:viewpageLogo4Position:noStats:forceAndroidNativeVideo:forceIOSNativeVideo:use2018Skin:audioTrackSelect:shareText:shareButtonDirectLink:googleAnalyticsCustomVars:supportIABConsent:restrictionNpaOnly:restrictionNpcOnly:defaultSubtitle:defaultSubtitleOnlyIfMuted:defaultAudioTrack:forceCanAutoPlay:avoidMutedAutoplay:stickyMode:disableKeyboardControls:taggingDisabled:skipOffset:skipCounterText:skipButtonText:blockInsecureVPAID:shareButtonGooglePlus:adunits:hasAdunits:adunitsPreroll:ignoreSingleMediaResource:ignoreProjectMetadata:noPosterInExitPhase:logProgressAsQuartiles:autoPauseAfterPrePhase:autoPlayOnlyWithPrerollAd:showOnlyWhenPrerollAvailable:adsystem_buid:adsystem_rdid:adsystem_idtype:adsystem_is_lat:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component100 __attribute__((swift_name("component100()")));
- (NSString * _Nullable)component101 __attribute__((swift_name("component101()")));
- (NSString * _Nullable)component102 __attribute__((swift_name("component102()")));
- (NSString * _Nullable)component103 __attribute__((swift_name("component103()")));
- (NSString * _Nullable)component104 __attribute__((swift_name("component104()")));
- (NSString * _Nullable)component105 __attribute__((swift_name("component105()")));
- (NSString * _Nullable)component106 __attribute__((swift_name("component106()")));
- (NSString * _Nullable)component107 __attribute__((swift_name("component107()")));
- (NSString * _Nullable)component108 __attribute__((swift_name("component108()")));
- (NSString * _Nullable)component109 __attribute__((swift_name("component109()")));
- (SharedPlayer * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component110 __attribute__((swift_name("component110()")));
- (NSString * _Nullable)component111 __attribute__((swift_name("component111()")));
- (NSString * _Nullable)component112 __attribute__((swift_name("component112()")));
- (NSString * _Nullable)component113 __attribute__((swift_name("component113()")));
- (NSString * _Nullable)component114 __attribute__((swift_name("component114()")));
- (NSString * _Nullable)component115 __attribute__((swift_name("component115()")));
- (NSString * _Nullable)component116 __attribute__((swift_name("component116()")));
- (NSString * _Nullable)component117 __attribute__((swift_name("component117()")));
- (NSString * _Nullable)component118 __attribute__((swift_name("component118()")));
- (SharedFitMode * _Nullable)component119 __attribute__((swift_name("component119()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component120 __attribute__((swift_name("component120()")));
- (NSString * _Nullable)component121 __attribute__((swift_name("component121()")));
- (NSString * _Nullable)component122 __attribute__((swift_name("component122()")));
- (NSString * _Nullable)component123 __attribute__((swift_name("component123()")));
- (NSString * _Nullable)component124 __attribute__((swift_name("component124()")));
- (NSString * _Nullable)component125 __attribute__((swift_name("component125()")));
- (NSString * _Nullable)component126 __attribute__((swift_name("component126()")));
- (NSString * _Nullable)component127 __attribute__((swift_name("component127()")));
- (NSString * _Nullable)component128 __attribute__((swift_name("component128()")));
- (NSString * _Nullable)component129 __attribute__((swift_name("component129()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component130 __attribute__((swift_name("component130()")));
- (NSString * _Nullable)component131 __attribute__((swift_name("component131()")));
- (NSString * _Nullable)component132 __attribute__((swift_name("component132()")));
- (NSString * _Nullable)component133 __attribute__((swift_name("component133()")));
- (NSString * _Nullable)component134 __attribute__((swift_name("component134()")));
- (NSString * _Nullable)component135 __attribute__((swift_name("component135()")));
- (NSString * _Nullable)component136 __attribute__((swift_name("component136()")));
- (NSString * _Nullable)component137 __attribute__((swift_name("component137()")));
- (NSString * _Nullable)component138 __attribute__((swift_name("component138()")));
- (NSString * _Nullable)component139 __attribute__((swift_name("component139()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component140 __attribute__((swift_name("component140()")));
- (NSString * _Nullable)component141 __attribute__((swift_name("component141()")));
- (NSString * _Nullable)component142 __attribute__((swift_name("component142()")));
- (NSString * _Nullable)component143 __attribute__((swift_name("component143()")));
- (NSString * _Nullable)component144 __attribute__((swift_name("component144()")));
- (NSString * _Nullable)component145 __attribute__((swift_name("component145()")));
- (NSString * _Nullable)component146 __attribute__((swift_name("component146()")));
- (NSString * _Nullable)component147 __attribute__((swift_name("component147()")));
- (NSString * _Nullable)component148 __attribute__((swift_name("component148()")));
- (NSString * _Nullable)component149 __attribute__((swift_name("component149()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component150 __attribute__((swift_name("component150()")));
- (NSString * _Nullable)component151 __attribute__((swift_name("component151()")));
- (NSString * _Nullable)component152 __attribute__((swift_name("component152()")));
- (NSString * _Nullable)component153 __attribute__((swift_name("component153()")));
- (NSString * _Nullable)component154 __attribute__((swift_name("component154()")));
- (NSString * _Nullable)component155 __attribute__((swift_name("component155()")));
- (NSString * _Nullable)component156 __attribute__((swift_name("component156()")));
- (NSString * _Nullable)component157 __attribute__((swift_name("component157()")));
- (NSString * _Nullable)component158 __attribute__((swift_name("component158()")));
- (NSString * _Nullable)component159 __attribute__((swift_name("component159()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component160 __attribute__((swift_name("component160()")));
- (NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)component161 __attribute__((swift_name("component161()")));
- (SharedBoolean * _Nullable)component162 __attribute__((swift_name("component162()")));
- (NSArray<SharedAdUnit *> * _Nullable)component163 __attribute__((swift_name("component163()")));
- (NSString * _Nullable)component164 __attribute__((swift_name("component164()")));
- (NSString * _Nullable)component165 __attribute__((swift_name("component165()")));
- (NSString * _Nullable)component166 __attribute__((swift_name("component166()")));
- (NSString * _Nullable)component167 __attribute__((swift_name("component167()")));
- (NSString * _Nullable)component168 __attribute__((swift_name("component168()")));
- (NSString * _Nullable)component169 __attribute__((swift_name("component169()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component170 __attribute__((swift_name("component170()")));
- (NSString * _Nullable)component171 __attribute__((swift_name("component171()")));
- (NSString * _Nullable)component172 __attribute__((swift_name("component172()")));
- (NSString * _Nullable)component173 __attribute__((swift_name("component173()")));
- (NSString * _Nullable)component174 __attribute__((swift_name("component174()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component33 __attribute__((swift_name("component33()")));
- (NSString * _Nullable)component34 __attribute__((swift_name("component34()")));
- (NSString * _Nullable)component35 __attribute__((swift_name("component35()")));
- (NSString * _Nullable)component36 __attribute__((swift_name("component36()")));
- (NSString * _Nullable)component37 __attribute__((swift_name("component37()")));
- (NSString * _Nullable)component38 __attribute__((swift_name("component38()")));
- (NSString * _Nullable)component39 __attribute__((swift_name("component39()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component40 __attribute__((swift_name("component40()")));
- (NSString * _Nullable)component41 __attribute__((swift_name("component41()")));
- (NSString * _Nullable)component42 __attribute__((swift_name("component42()")));
- (NSString * _Nullable)component43 __attribute__((swift_name("component43()")));
- (NSString * _Nullable)component44 __attribute__((swift_name("component44()")));
- (NSString * _Nullable)component45 __attribute__((swift_name("component45()")));
- (NSString * _Nullable)component46 __attribute__((swift_name("component46()")));
- (NSString * _Nullable)component47 __attribute__((swift_name("component47()")));
- (NSString * _Nullable)component48 __attribute__((swift_name("component48()")));
- (NSString * _Nullable)component49 __attribute__((swift_name("component49()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component50 __attribute__((swift_name("component50()")));
- (NSString * _Nullable)component51 __attribute__((swift_name("component51()")));
- (NSString * _Nullable)component52 __attribute__((swift_name("component52()")));
- (NSString * _Nullable)component53 __attribute__((swift_name("component53()")));
- (NSString * _Nullable)component54 __attribute__((swift_name("component54()")));
- (NSString * _Nullable)component55 __attribute__((swift_name("component55()")));
- (NSString * _Nullable)component56 __attribute__((swift_name("component56()")));
- (NSString * _Nullable)component57 __attribute__((swift_name("component57()")));
- (NSString * _Nullable)component58 __attribute__((swift_name("component58()")));
- (NSString * _Nullable)component59 __attribute__((swift_name("component59()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component60 __attribute__((swift_name("component60()")));
- (NSString * _Nullable)component61 __attribute__((swift_name("component61()")));
- (NSString * _Nullable)component62 __attribute__((swift_name("component62()")));
- (NSString * _Nullable)component63 __attribute__((swift_name("component63()")));
- (NSString * _Nullable)component64 __attribute__((swift_name("component64()")));
- (NSString * _Nullable)component65 __attribute__((swift_name("component65()")));
- (NSString * _Nullable)component66 __attribute__((swift_name("component66()")));
- (NSString * _Nullable)component67 __attribute__((swift_name("component67()")));
- (NSString * _Nullable)component68 __attribute__((swift_name("component68()")));
- (NSString * _Nullable)component69 __attribute__((swift_name("component69()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component70 __attribute__((swift_name("component70()")));
- (NSString * _Nullable)component71 __attribute__((swift_name("component71()")));
- (NSString * _Nullable)component72 __attribute__((swift_name("component72()")));
- (NSString * _Nullable)component73 __attribute__((swift_name("component73()")));
- (NSString * _Nullable)component74 __attribute__((swift_name("component74()")));
- (NSString * _Nullable)component75 __attribute__((swift_name("component75()")));
- (NSString * _Nullable)component76 __attribute__((swift_name("component76()")));
- (NSString * _Nullable)component77 __attribute__((swift_name("component77()")));
- (NSString * _Nullable)component78 __attribute__((swift_name("component78()")));
- (NSString * _Nullable)component79 __attribute__((swift_name("component79()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component80 __attribute__((swift_name("component80()")));
- (NSString * _Nullable)component81 __attribute__((swift_name("component81()")));
- (NSString * _Nullable)component82 __attribute__((swift_name("component82()")));
- (NSString * _Nullable)component83 __attribute__((swift_name("component83()")));
- (NSString * _Nullable)component84 __attribute__((swift_name("component84()")));
- (NSString * _Nullable)component85 __attribute__((swift_name("component85()")));
- (NSString * _Nullable)component86 __attribute__((swift_name("component86()")));
- (NSString * _Nullable)component87 __attribute__((swift_name("component87()")));
- (NSString * _Nullable)component88 __attribute__((swift_name("component88()")));
- (NSString * _Nullable)component89 __attribute__((swift_name("component89()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSString * _Nullable)component90 __attribute__((swift_name("component90()")));
- (NSString * _Nullable)component91 __attribute__((swift_name("component91()")));
- (NSString * _Nullable)component92 __attribute__((swift_name("component92()")));
- (NSString * _Nullable)component93 __attribute__((swift_name("component93()")));
- (NSString * _Nullable)component94 __attribute__((swift_name("component94()")));
- (NSString * _Nullable)component95 __attribute__((swift_name("component95()")));
- (NSString * _Nullable)component96 __attribute__((swift_name("component96()")));
- (NSString * _Nullable)component97 __attribute__((swift_name("component97()")));
- (NSString * _Nullable)component98 __attribute__((swift_name("component98()")));
- (NSString * _Nullable)component99 __attribute__((swift_name("component99()")));
- (SharedPlayout *)doCopyId:(NSString * _Nullable)id main:(NSString * _Nullable)main publicationid:(NSString * _Nullable)publicationid type:(NSString * _Nullable)type name:(NSString * _Nullable)name status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate updateddate:(NSString * _Nullable)updateddate label:(NSString * _Nullable)label publication:(NSString * _Nullable)publication player:(SharedPlayer * _Nullable)player playerid:(NSString * _Nullable)playerid responsiveSizing:(NSString * _Nullable)responsiveSizing aspectRatio:(NSString * _Nullable)aspectRatio width:(NSString * _Nullable)width height:(NSString * _Nullable)height autoHeight:(NSString * _Nullable)autoHeight alphaControlBar:(NSString * _Nullable)alphaControlBar skin_backgroundColor:(NSString * _Nullable)skin_backgroundColor skin_foregroundColor:(NSString * _Nullable)skin_foregroundColor skin_widgetColor:(NSString * _Nullable)skin_widgetColor bgColor:(NSString * _Nullable)bgColor logoId:(NSString * _Nullable)logoId logoAlign:(NSString * _Nullable)logoAlign logoClickURL:(NSString * _Nullable)logoClickURL controlBar:(NSString * _Nullable)controlBar controlBarPlacement:(NSString * _Nullable)controlBarPlacement timeDisplay:(NSString * _Nullable)timeDisplay timeLine:(NSString * _Nullable)timeLine muteButton:(NSString * _Nullable)muteButton volume:(NSString * _Nullable)volume volumeOrientation:(NSString * _Nullable)volumeOrientation languageSelect:(NSString * _Nullable)languageSelect qualitySelector:(NSString * _Nullable)qualitySelector playbackRateSelector:(NSString * _Nullable)playbackRateSelector fullScreen:(NSString * _Nullable)fullScreen shareButton:(NSString * _Nullable)shareButton shareButtonEmbedCode:(NSString * _Nullable)shareButtonEmbedCode shareButtonEmail:(NSString * _Nullable)shareButtonEmail shareButtonFacebook:(NSString * _Nullable)shareButtonFacebook shareButtonLinkedIn:(NSString * _Nullable)shareButtonLinkedIn shareButtonPinterest:(NSString * _Nullable)shareButtonPinterest shareButtonTwitter:(NSString * _Nullable)shareButtonTwitter shareButtonWhatsApp:(NSString * _Nullable)shareButtonWhatsApp castButton:(NSString * _Nullable)castButton showBigPlayButton:(NSString * _Nullable)showBigPlayButton showBigReplayButton:(NSString * _Nullable)showBigReplayButton title:(NSString * _Nullable)title date:(NSString * _Nullable)date authorCopyright:(NSString * _Nullable)authorCopyright authorCopyrightAlign:(NSString * _Nullable)authorCopyrightAlign authorCopyrightPrefixText:(NSString * _Nullable)authorCopyrightPrefixText autoPlayNext:(NSString * _Nullable)autoPlayNext relatedItems:(NSString * _Nullable)relatedItems relatedItemsPause:(NSString * _Nullable)relatedItemsPause useDeeplinkForRelatedItems:(NSString * _Nullable)useDeeplinkForRelatedItems exitscreenItemsListId:(NSString * _Nullable)exitscreenItemsListId randomizeRelatedItems:(NSString * _Nullable)randomizeRelatedItems useDeeplinkForFacebook:(NSString * _Nullable)useDeeplinkForFacebook shareTwitterText:(NSString * _Nullable)shareTwitterText sharePlayout:(NSString * _Nullable)sharePlayout skinBehaviour:(NSString * _Nullable)skinBehaviour skinOnTimeline:(NSString * _Nullable)skinOnTimeline nativeControls:(NSString * _Nullable)nativeControls youTubeHosting:(NSString * _Nullable)youTubeHosting youTubeSkinInMainPhase:(NSString * _Nullable)youTubeSkinInMainPhase forceNativeFullscreen:(NSString * _Nullable)forceNativeFullscreen preferHD:(NSString * _Nullable)preferHD nedStatLoggerUrl:(NSString * _Nullable)nedStatLoggerUrl googleAnalyticsId:(NSString * _Nullable)googleAnalyticsId piwikUrl:(NSString * _Nullable)piwikUrl piwikSiteId:(NSString * _Nullable)piwikSiteId adobeAnalyticsTrackingServer:(NSString * _Nullable)adobeAnalyticsTrackingServer adobeAnalyticsMcorgID:(NSString * _Nullable)adobeAnalyticsMcorgID adobeAnalyticsRsID:(NSString * _Nullable)adobeAnalyticsRsID adobeAnalyticsLegacy:(NSString * _Nullable)adobeAnalyticsLegacy disableCookies:(NSString * _Nullable)disableCookies disableContextMenuNavigate:(NSString * _Nullable)disableContextMenuNavigate playerSignature:(NSString * _Nullable)playerSignature playerSignatureLink:(NSString * _Nullable)playerSignatureLink autoPlay:(NSString * _Nullable)autoPlay autoMute:(NSString * _Nullable)autoMute autoMuteIfNeededForAutoPlay:(NSString * _Nullable)autoMuteIfNeededForAutoPlay autoLoop:(NSString * _Nullable)autoLoop floatPlayer:(NSString * _Nullable)floatPlayer interactivityInView:(NSString * _Nullable)interactivityInView interactivityOutView:(NSString * _Nullable)interactivityOutView inviewMargin:(NSString * _Nullable)inviewMargin textAbovePlayer:(NSString * _Nullable)textAbovePlayer textCommercialSkip:(NSString * _Nullable)textCommercialSkip startCollapsed:(NSString * _Nullable)startCollapsed playInOverlay:(NSString * _Nullable)playInOverlay hidePlayerOnEnd:(NSString * _Nullable)hidePlayerOnEnd waitForApproval:(NSString * _Nullable)waitForApproval interactivityMouseIn:(NSString * _Nullable)interactivityMouseIn interactivityMouseOut:(NSString * _Nullable)interactivityMouseOut interactivityOnClick:(NSString * _Nullable)interactivityOnClick clickURL:(NSString * _Nullable)clickURL nsiNoAutoPlay:(NSString * _Nullable)nsiNoAutoPlay nsiNoPlayer:(NSString * _Nullable)nsiNoPlayer placementOption:(NSString * _Nullable)placementOption placementDOMSelector:(NSString * _Nullable)placementDOMSelector iframeBreakout:(NSString * _Nullable)iframeBreakout clearBothOption:(NSString * _Nullable)clearBothOption forceInview:(NSString * _Nullable)forceInview customCode:(NSString * _Nullable)customCode preferFlashPlayback:(NSString * _Nullable)preferFlashPlayback preloadMainroll:(NSString * _Nullable)preloadMainroll disableHtml5VPAID:(NSString * _Nullable)disableHtml5VPAID enableHtml5VPAID:(NSString * _Nullable)enableHtml5VPAID commercialPauseButton:(NSString * _Nullable)commercialPauseButton commercialMuteButton:(NSString * _Nullable)commercialMuteButton commercials:(NSString * _Nullable)commercials textCommercialTimeRemaining:(NSString * _Nullable)textCommercialTimeRemaining commercialBehaviour:(NSString * _Nullable)commercialBehaviour minClipDurationPreroll:(NSString * _Nullable)minClipDurationPreroll minClipDurationPostroll:(NSString * _Nullable)minClipDurationPostroll allowBBIma:(NSString * _Nullable)allowBBIma fitmode:(SharedFitMode * _Nullable)fitmode viewpageOverrideDimensions:(NSString * _Nullable)viewpageOverrideDimensions viewpageHideTitles:(NSString * _Nullable)viewpageHideTitles viewpageAlignment:(NSString * _Nullable)viewpageAlignment viewpageBackgroundColor:(NSString * _Nullable)viewpageBackgroundColor viewpageColor:(NSString * _Nullable)viewpageColor viewpageBackgroundClipID:(NSString * _Nullable)viewpageBackgroundClipID viewpageBackgroundPosition:(NSString * _Nullable)viewpageBackgroundPosition viewpageBackgroundSize:(NSString * _Nullable)viewpageBackgroundSize viewpageBackgroundRepeat:(NSString * _Nullable)viewpageBackgroundRepeat viewpageLogo1ClipID:(NSString * _Nullable)viewpageLogo1ClipID viewpageLogo1Position:(NSString * _Nullable)viewpageLogo1Position viewpageLogo2ClipID:(NSString * _Nullable)viewpageLogo2ClipID viewpageLogo2Position:(NSString * _Nullable)viewpageLogo2Position viewpageLogo3ClipID:(NSString * _Nullable)viewpageLogo3ClipID viewpageLogo3Position:(NSString * _Nullable)viewpageLogo3Position viewpageLogo4ClipID:(NSString * _Nullable)viewpageLogo4ClipID viewpageLogo4Position:(NSString * _Nullable)viewpageLogo4Position noStats:(NSString * _Nullable)noStats forceAndroidNativeVideo:(NSString * _Nullable)forceAndroidNativeVideo forceIOSNativeVideo:(NSString * _Nullable)forceIOSNativeVideo use2018Skin:(NSString * _Nullable)use2018Skin audioTrackSelect:(NSString * _Nullable)audioTrackSelect shareText:(NSString * _Nullable)shareText shareButtonDirectLink:(NSString * _Nullable)shareButtonDirectLink googleAnalyticsCustomVars:(NSString * _Nullable)googleAnalyticsCustomVars supportIABConsent:(NSString * _Nullable)supportIABConsent restrictionNpaOnly:(NSString * _Nullable)restrictionNpaOnly restrictionNpcOnly:(NSString * _Nullable)restrictionNpcOnly defaultSubtitle:(NSString * _Nullable)defaultSubtitle defaultSubtitleOnlyIfMuted:(NSString * _Nullable)defaultSubtitleOnlyIfMuted defaultAudioTrack:(NSString * _Nullable)defaultAudioTrack forceCanAutoPlay:(NSString * _Nullable)forceCanAutoPlay avoidMutedAutoplay:(NSString * _Nullable)avoidMutedAutoplay stickyMode:(NSString * _Nullable)stickyMode disableKeyboardControls:(NSString * _Nullable)disableKeyboardControls taggingDisabled:(NSString * _Nullable)taggingDisabled skipOffset:(NSString * _Nullable)skipOffset skipCounterText:(NSString * _Nullable)skipCounterText skipButtonText:(NSString * _Nullable)skipButtonText blockInsecureVPAID:(NSString * _Nullable)blockInsecureVPAID shareButtonGooglePlus:(NSString * _Nullable)shareButtonGooglePlus adunits:(NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable)adunits hasAdunits:(SharedBoolean * _Nullable)hasAdunits adunitsPreroll:(NSArray<SharedAdUnit *> * _Nullable)adunitsPreroll ignoreSingleMediaResource:(NSString * _Nullable)ignoreSingleMediaResource ignoreProjectMetadata:(NSString * _Nullable)ignoreProjectMetadata noPosterInExitPhase:(NSString * _Nullable)noPosterInExitPhase logProgressAsQuartiles:(NSString * _Nullable)logProgressAsQuartiles autoPauseAfterPrePhase:(NSString * _Nullable)autoPauseAfterPrePhase autoPlayOnlyWithPrerollAd:(NSString * _Nullable)autoPlayOnlyWithPrerollAd showOnlyWhenPrerollAvailable:(NSString * _Nullable)showOnlyWhenPrerollAvailable adsystem_buid:(NSString * _Nullable)adsystem_buid adsystem_rdid:(NSString * _Nullable)adsystem_rdid adsystem_idtype:(NSString * _Nullable)adsystem_idtype adsystem_is_lat:(NSString * _Nullable)adsystem_is_lat __attribute__((swift_name("doCopy(id:main:publicationid:type:name:status:createddate:updateddate:label:publication:player:playerid:responsiveSizing:aspectRatio:width:height:autoHeight:alphaControlBar:skin_backgroundColor:skin_foregroundColor:skin_widgetColor:bgColor:logoId:logoAlign:logoClickURL:controlBar:controlBarPlacement:timeDisplay:timeLine:muteButton:volume:volumeOrientation:languageSelect:qualitySelector:playbackRateSelector:fullScreen:shareButton:shareButtonEmbedCode:shareButtonEmail:shareButtonFacebook:shareButtonLinkedIn:shareButtonPinterest:shareButtonTwitter:shareButtonWhatsApp:castButton:showBigPlayButton:showBigReplayButton:title:date:authorCopyright:authorCopyrightAlign:authorCopyrightPrefixText:autoPlayNext:relatedItems:relatedItemsPause:useDeeplinkForRelatedItems:exitscreenItemsListId:randomizeRelatedItems:useDeeplinkForFacebook:shareTwitterText:sharePlayout:skinBehaviour:skinOnTimeline:nativeControls:youTubeHosting:youTubeSkinInMainPhase:forceNativeFullscreen:preferHD:nedStatLoggerUrl:googleAnalyticsId:piwikUrl:piwikSiteId:adobeAnalyticsTrackingServer:adobeAnalyticsMcorgID:adobeAnalyticsRsID:adobeAnalyticsLegacy:disableCookies:disableContextMenuNavigate:playerSignature:playerSignatureLink:autoPlay:autoMute:autoMuteIfNeededForAutoPlay:autoLoop:floatPlayer:interactivityInView:interactivityOutView:inviewMargin:textAbovePlayer:textCommercialSkip:startCollapsed:playInOverlay:hidePlayerOnEnd:waitForApproval:interactivityMouseIn:interactivityMouseOut:interactivityOnClick:clickURL:nsiNoAutoPlay:nsiNoPlayer:placementOption:placementDOMSelector:iframeBreakout:clearBothOption:forceInview:customCode:preferFlashPlayback:preloadMainroll:disableHtml5VPAID:enableHtml5VPAID:commercialPauseButton:commercialMuteButton:commercials:textCommercialTimeRemaining:commercialBehaviour:minClipDurationPreroll:minClipDurationPostroll:allowBBIma:fitmode:viewpageOverrideDimensions:viewpageHideTitles:viewpageAlignment:viewpageBackgroundColor:viewpageColor:viewpageBackgroundClipID:viewpageBackgroundPosition:viewpageBackgroundSize:viewpageBackgroundRepeat:viewpageLogo1ClipID:viewpageLogo1Position:viewpageLogo2ClipID:viewpageLogo2Position:viewpageLogo3ClipID:viewpageLogo3Position:viewpageLogo4ClipID:viewpageLogo4Position:noStats:forceAndroidNativeVideo:forceIOSNativeVideo:use2018Skin:audioTrackSelect:shareText:shareButtonDirectLink:googleAnalyticsCustomVars:supportIABConsent:restrictionNpaOnly:restrictionNpcOnly:defaultSubtitle:defaultSubtitleOnlyIfMuted:defaultAudioTrack:forceCanAutoPlay:avoidMutedAutoplay:stickyMode:disableKeyboardControls:taggingDisabled:skipOffset:skipCounterText:skipButtonText:blockInsecureVPAID:shareButtonGooglePlus:adunits:hasAdunits:adunitsPreroll:ignoreSingleMediaResource:ignoreProjectMetadata:noPosterInExitPhase:logProgressAsQuartiles:autoPauseAfterPrePhase:autoPlayOnlyWithPrerollAd:showOnlyWhenPrerollAvailable:adsystem_buid:adsystem_rdid:adsystem_idtype:adsystem_is_lat:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable adobeAnalyticsLegacy __attribute__((swift_name("adobeAnalyticsLegacy")));
@property (readonly) NSString * _Nullable adobeAnalyticsMcorgID __attribute__((swift_name("adobeAnalyticsMcorgID")));
@property (readonly) NSString * _Nullable adobeAnalyticsRsID __attribute__((swift_name("adobeAnalyticsRsID")));
@property (readonly) NSString * _Nullable adobeAnalyticsTrackingServer __attribute__((swift_name("adobeAnalyticsTrackingServer")));
@property (readonly) NSString * _Nullable adsystem_buid __attribute__((swift_name("adsystem_buid")));
@property (readonly) NSString * _Nullable adsystem_idtype __attribute__((swift_name("adsystem_idtype")));
@property (readonly) NSString * _Nullable adsystem_is_lat __attribute__((swift_name("adsystem_is_lat")));
@property (readonly) NSString * _Nullable adsystem_rdid __attribute__((swift_name("adsystem_rdid")));
@property (readonly) NSArray<SharedKotlinx_serialization_jsonJsonElement *> * _Nullable adunits __attribute__((swift_name("adunits")));
@property (readonly) NSArray<SharedAdUnit *> * _Nullable adunitsPreroll __attribute__((swift_name("adunitsPreroll")));
@property (readonly) NSString * _Nullable allowBBIma __attribute__((swift_name("allowBBIma")));
@property (readonly) NSString * _Nullable alphaControlBar __attribute__((swift_name("alphaControlBar")));
@property (readonly) NSString * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property (readonly) NSString * _Nullable audioTrackSelect __attribute__((swift_name("audioTrackSelect")));
@property (readonly) NSString * _Nullable authorCopyright __attribute__((swift_name("authorCopyright")));
@property (readonly) NSString * _Nullable authorCopyrightAlign __attribute__((swift_name("authorCopyrightAlign")));
@property (readonly) NSString * _Nullable authorCopyrightPrefixText __attribute__((swift_name("authorCopyrightPrefixText")));
@property (readonly) NSString * _Nullable autoHeight __attribute__((swift_name("autoHeight")));
@property (readonly) NSString * _Nullable autoLoop __attribute__((swift_name("autoLoop")));
@property (readonly) NSString * _Nullable autoMute __attribute__((swift_name("autoMute")));
@property (readonly) NSString * _Nullable autoMuteIfNeededForAutoPlay __attribute__((swift_name("autoMuteIfNeededForAutoPlay")));
@property (readonly) NSString * _Nullable autoPauseAfterPrePhase __attribute__((swift_name("autoPauseAfterPrePhase")));
@property (readonly) NSString * _Nullable autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) NSString * _Nullable autoPlayNext __attribute__((swift_name("autoPlayNext")));
@property (readonly) NSString * _Nullable autoPlayOnlyWithPrerollAd __attribute__((swift_name("autoPlayOnlyWithPrerollAd")));
@property (readonly) NSString * _Nullable avoidMutedAutoplay __attribute__((swift_name("avoidMutedAutoplay")));
@property (readonly) NSString * _Nullable bgColor __attribute__((swift_name("bgColor")));
@property (readonly) NSString * _Nullable blockInsecureVPAID __attribute__((swift_name("blockInsecureVPAID")));
@property (readonly) NSString * _Nullable castButton __attribute__((swift_name("castButton")));
@property (readonly) NSString * _Nullable clearBothOption __attribute__((swift_name("clearBothOption")));
@property (readonly) NSString * _Nullable clickURL __attribute__((swift_name("clickURL")));
@property (readonly) NSString * _Nullable commercialBehaviour __attribute__((swift_name("commercialBehaviour")));
@property (readonly) NSString * _Nullable commercialMuteButton __attribute__((swift_name("commercialMuteButton")));
@property (readonly) NSString * _Nullable commercialPauseButton __attribute__((swift_name("commercialPauseButton")));
@property (readonly) NSString * _Nullable commercials __attribute__((swift_name("commercials")));
@property (readonly) NSString * _Nullable controlBar __attribute__((swift_name("controlBar")));
@property (readonly) NSString * _Nullable controlBarPlacement __attribute__((swift_name("controlBarPlacement")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable customCode __attribute__((swift_name("customCode")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable defaultAudioTrack __attribute__((swift_name("defaultAudioTrack")));
@property (readonly) NSString * _Nullable defaultSubtitle __attribute__((swift_name("defaultSubtitle")));
@property (readonly) NSString * _Nullable defaultSubtitleOnlyIfMuted __attribute__((swift_name("defaultSubtitleOnlyIfMuted")));
@property (readonly) NSString * _Nullable disableContextMenuNavigate __attribute__((swift_name("disableContextMenuNavigate")));
@property (readonly) NSString * _Nullable disableCookies __attribute__((swift_name("disableCookies")));
@property (readonly) NSString * _Nullable disableHtml5VPAID __attribute__((swift_name("disableHtml5VPAID")));
@property (readonly) NSString * _Nullable disableKeyboardControls __attribute__((swift_name("disableKeyboardControls")));
@property (readonly) NSString * _Nullable enableHtml5VPAID __attribute__((swift_name("enableHtml5VPAID")));
@property (readonly) NSString * _Nullable exitscreenItemsListId __attribute__((swift_name("exitscreenItemsListId")));
@property (readonly) SharedFitMode * _Nullable fitmode __attribute__((swift_name("fitmode")));
@property (readonly) NSString * _Nullable floatPlayer __attribute__((swift_name("floatPlayer")));
@property (readonly) NSString * _Nullable forceAndroidNativeVideo __attribute__((swift_name("forceAndroidNativeVideo")));
@property (readonly) NSString * _Nullable forceCanAutoPlay __attribute__((swift_name("forceCanAutoPlay")));
@property (readonly) NSString * _Nullable forceIOSNativeVideo __attribute__((swift_name("forceIOSNativeVideo")));
@property (readonly) NSString * _Nullable forceInview __attribute__((swift_name("forceInview")));
@property (readonly) NSString * _Nullable forceNativeFullscreen __attribute__((swift_name("forceNativeFullscreen")));
@property (readonly) NSString * _Nullable fullScreen __attribute__((swift_name("fullScreen")));
@property (readonly) NSString * _Nullable googleAnalyticsCustomVars __attribute__((swift_name("googleAnalyticsCustomVars")));
@property (readonly) NSString * _Nullable googleAnalyticsId __attribute__((swift_name("googleAnalyticsId")));
@property (readonly) SharedBoolean * _Nullable hasAdunits __attribute__((swift_name("hasAdunits")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable hidePlayerOnEnd __attribute__((swift_name("hidePlayerOnEnd")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable iframeBreakout __attribute__((swift_name("iframeBreakout")));
@property (readonly) NSString * _Nullable ignoreProjectMetadata __attribute__((swift_name("ignoreProjectMetadata")));
@property (readonly) NSString * _Nullable ignoreSingleMediaResource __attribute__((swift_name("ignoreSingleMediaResource")));
@property (readonly) NSString * _Nullable interactivityInView __attribute__((swift_name("interactivityInView")));
@property (readonly) NSString * _Nullable interactivityMouseIn __attribute__((swift_name("interactivityMouseIn")));
@property (readonly) NSString * _Nullable interactivityMouseOut __attribute__((swift_name("interactivityMouseOut")));
@property (readonly) NSString * _Nullable interactivityOnClick __attribute__((swift_name("interactivityOnClick")));
@property (readonly) NSString * _Nullable interactivityOutView __attribute__((swift_name("interactivityOutView")));
@property (readonly) NSString * _Nullable inviewMargin __attribute__((swift_name("inviewMargin")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable languageSelect __attribute__((swift_name("languageSelect")));
@property (readonly) NSString * _Nullable logProgressAsQuartiles __attribute__((swift_name("logProgressAsQuartiles")));
@property (readonly) NSString * _Nullable logoAlign __attribute__((swift_name("logoAlign")));
@property (readonly) NSString * _Nullable logoClickURL __attribute__((swift_name("logoClickURL")));
@property (readonly) NSString * _Nullable logoId __attribute__((swift_name("logoId")));
@property (readonly) NSString * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString * _Nullable minClipDurationPostroll __attribute__((swift_name("minClipDurationPostroll")));
@property (readonly) NSString * _Nullable minClipDurationPreroll __attribute__((swift_name("minClipDurationPreroll")));
@property (readonly) NSString * _Nullable muteButton __attribute__((swift_name("muteButton")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nativeControls __attribute__((swift_name("nativeControls")));
@property (readonly) NSString * _Nullable nedStatLoggerUrl __attribute__((swift_name("nedStatLoggerUrl")));
@property (readonly) NSString * _Nullable noPosterInExitPhase __attribute__((swift_name("noPosterInExitPhase")));
@property (readonly) NSString * _Nullable noStats __attribute__((swift_name("noStats")));
@property (readonly) NSString * _Nullable nsiNoAutoPlay __attribute__((swift_name("nsiNoAutoPlay")));
@property (readonly) NSString * _Nullable nsiNoPlayer __attribute__((swift_name("nsiNoPlayer")));
@property (readonly) NSString * _Nullable piwikSiteId __attribute__((swift_name("piwikSiteId")));
@property (readonly) NSString * _Nullable piwikUrl __attribute__((swift_name("piwikUrl")));
@property (readonly) NSString * _Nullable placementDOMSelector __attribute__((swift_name("placementDOMSelector")));
@property (readonly) NSString * _Nullable placementOption __attribute__((swift_name("placementOption")));
@property (readonly) NSString * _Nullable playInOverlay __attribute__((swift_name("playInOverlay")));
@property (readonly) NSString * _Nullable playbackRateSelector __attribute__((swift_name("playbackRateSelector")));
@property (readonly) SharedPlayer * _Nullable player __attribute__((swift_name("player")));
@property (readonly) NSString * _Nullable playerSignature __attribute__((swift_name("playerSignature")));
@property (readonly) NSString * _Nullable playerSignatureLink __attribute__((swift_name("playerSignatureLink")));
@property (readonly) NSString * _Nullable playerid __attribute__((swift_name("playerid")));
@property (readonly) NSString * _Nullable preferFlashPlayback __attribute__((swift_name("preferFlashPlayback")));
@property (readonly) NSString * _Nullable preferHD __attribute__((swift_name("preferHD")));
@property (readonly) NSString * _Nullable preloadMainroll __attribute__((swift_name("preloadMainroll")));
@property (readonly) NSString * _Nullable publication __attribute__((swift_name("publication")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable qualitySelector __attribute__((swift_name("qualitySelector")));
@property (readonly) NSString * _Nullable randomizeRelatedItems __attribute__((swift_name("randomizeRelatedItems")));
@property (readonly) NSString * _Nullable relatedItems __attribute__((swift_name("relatedItems")));
@property (readonly) NSString * _Nullable relatedItemsPause __attribute__((swift_name("relatedItemsPause")));
@property (readonly) NSString * _Nullable responsiveSizing __attribute__((swift_name("responsiveSizing")));
@property (readonly) NSString * _Nullable restrictionNpaOnly __attribute__((swift_name("restrictionNpaOnly")));
@property (readonly) NSString * _Nullable restrictionNpcOnly __attribute__((swift_name("restrictionNpcOnly")));
@property (readonly) NSString * _Nullable shareButton __attribute__((swift_name("shareButton")));
@property (readonly) NSString * _Nullable shareButtonDirectLink __attribute__((swift_name("shareButtonDirectLink")));
@property (readonly) NSString * _Nullable shareButtonEmail __attribute__((swift_name("shareButtonEmail")));
@property (readonly) NSString * _Nullable shareButtonEmbedCode __attribute__((swift_name("shareButtonEmbedCode")));
@property (readonly) NSString * _Nullable shareButtonFacebook __attribute__((swift_name("shareButtonFacebook")));
@property (readonly) NSString * _Nullable shareButtonGooglePlus __attribute__((swift_name("shareButtonGooglePlus")));
@property (readonly) NSString * _Nullable shareButtonLinkedIn __attribute__((swift_name("shareButtonLinkedIn")));
@property (readonly) NSString * _Nullable shareButtonPinterest __attribute__((swift_name("shareButtonPinterest")));
@property (readonly) NSString * _Nullable shareButtonTwitter __attribute__((swift_name("shareButtonTwitter")));
@property (readonly) NSString * _Nullable shareButtonWhatsApp __attribute__((swift_name("shareButtonWhatsApp")));
@property (readonly) NSString * _Nullable sharePlayout __attribute__((swift_name("sharePlayout")));
@property (readonly) NSString * _Nullable shareText __attribute__((swift_name("shareText")));
@property (readonly) NSString * _Nullable shareTwitterText __attribute__((swift_name("shareTwitterText")));
@property (readonly) NSString * _Nullable showBigPlayButton __attribute__((swift_name("showBigPlayButton")));
@property (readonly) NSString * _Nullable showBigReplayButton __attribute__((swift_name("showBigReplayButton")));
@property (readonly) NSString * _Nullable showOnlyWhenPrerollAvailable __attribute__((swift_name("showOnlyWhenPrerollAvailable")));
@property (readonly) NSString * _Nullable skinBehaviour __attribute__((swift_name("skinBehaviour")));
@property (readonly) NSString * _Nullable skinOnTimeline __attribute__((swift_name("skinOnTimeline")));
@property (readonly) NSString * _Nullable skin_backgroundColor __attribute__((swift_name("skin_backgroundColor")));
@property (readonly) NSString * _Nullable skin_foregroundColor __attribute__((swift_name("skin_foregroundColor")));
@property (readonly) NSString * _Nullable skin_widgetColor __attribute__((swift_name("skin_widgetColor")));
@property (readonly) NSString * _Nullable skipButtonText __attribute__((swift_name("skipButtonText")));
@property (readonly) NSString * _Nullable skipCounterText __attribute__((swift_name("skipCounterText")));
@property (readonly) NSString * _Nullable skipOffset __attribute__((swift_name("skipOffset")));
@property (readonly) NSString * _Nullable startCollapsed __attribute__((swift_name("startCollapsed")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable stickyMode __attribute__((swift_name("stickyMode")));
@property (readonly) NSString * _Nullable supportIABConsent __attribute__((swift_name("supportIABConsent")));
@property (readonly) NSString * _Nullable taggingDisabled __attribute__((swift_name("taggingDisabled")));
@property (readonly) NSString * _Nullable textAbovePlayer __attribute__((swift_name("textAbovePlayer")));
@property (readonly) NSString * _Nullable textCommercialSkip __attribute__((swift_name("textCommercialSkip")));
@property (readonly) NSString * _Nullable textCommercialTimeRemaining __attribute__((swift_name("textCommercialTimeRemaining")));
@property (readonly) NSString * _Nullable timeDisplay __attribute__((swift_name("timeDisplay")));
@property (readonly) NSString * _Nullable timeLine __attribute__((swift_name("timeLine")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) NSString * _Nullable use2018Skin __attribute__((swift_name("use2018Skin")));
@property (readonly) NSString * _Nullable useDeeplinkForFacebook __attribute__((swift_name("useDeeplinkForFacebook")));
@property (readonly) NSString * _Nullable useDeeplinkForRelatedItems __attribute__((swift_name("useDeeplinkForRelatedItems")));
@property (readonly) NSString * _Nullable viewpageAlignment __attribute__((swift_name("viewpageAlignment")));
@property (readonly) NSString * _Nullable viewpageBackgroundClipID __attribute__((swift_name("viewpageBackgroundClipID")));
@property (readonly) NSString * _Nullable viewpageBackgroundColor __attribute__((swift_name("viewpageBackgroundColor")));
@property (readonly) NSString * _Nullable viewpageBackgroundPosition __attribute__((swift_name("viewpageBackgroundPosition")));
@property (readonly) NSString * _Nullable viewpageBackgroundRepeat __attribute__((swift_name("viewpageBackgroundRepeat")));
@property (readonly) NSString * _Nullable viewpageBackgroundSize __attribute__((swift_name("viewpageBackgroundSize")));
@property (readonly) NSString * _Nullable viewpageColor __attribute__((swift_name("viewpageColor")));
@property (readonly) NSString * _Nullable viewpageHideTitles __attribute__((swift_name("viewpageHideTitles")));
@property (readonly) NSString * _Nullable viewpageLogo1ClipID __attribute__((swift_name("viewpageLogo1ClipID")));
@property (readonly) NSString * _Nullable viewpageLogo1Position __attribute__((swift_name("viewpageLogo1Position")));
@property (readonly) NSString * _Nullable viewpageLogo2ClipID __attribute__((swift_name("viewpageLogo2ClipID")));
@property (readonly) NSString * _Nullable viewpageLogo2Position __attribute__((swift_name("viewpageLogo2Position")));
@property (readonly) NSString * _Nullable viewpageLogo3ClipID __attribute__((swift_name("viewpageLogo3ClipID")));
@property (readonly) NSString * _Nullable viewpageLogo3Position __attribute__((swift_name("viewpageLogo3Position")));
@property (readonly) NSString * _Nullable viewpageLogo4ClipID __attribute__((swift_name("viewpageLogo4ClipID")));
@property (readonly) NSString * _Nullable viewpageLogo4Position __attribute__((swift_name("viewpageLogo4Position")));
@property (readonly) NSString * _Nullable viewpageOverrideDimensions __attribute__((swift_name("viewpageOverrideDimensions")));
@property (readonly) NSString * _Nullable volume __attribute__((swift_name("volume")));
@property (readonly) NSString * _Nullable volumeOrientation __attribute__((swift_name("volumeOrientation")));
@property (readonly) NSString * _Nullable waitForApproval __attribute__((swift_name("waitForApproval")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@property (readonly) NSString * _Nullable youTubeHosting __attribute__((swift_name("youTubeHosting")));
@property (readonly) NSString * _Nullable youTubeSkinInMainPhase __attribute__((swift_name("youTubeSkinInMainPhase")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Playout.Companion")))
@interface SharedPlayoutCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Project")))
@interface SharedProject : SharedContentItem <SharedContentItemInterface>
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title publicationid:(NSString * _Nullable)publicationid status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate thumbnails:(NSArray<SharedThumbnail *> * _Nullable)thumbnails name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy subtype:(NSString * _Nullable)subtype cat:(NSArray<NSString *> * _Nullable)cat clipCount:(SharedLong * _Nullable)clipCount publisheddate:(NSString * _Nullable)publisheddate useGaplessPlayback:(SharedBoolean * _Nullable)useGaplessPlayback distribution:(NSString * _Nullable)distribution goal:(NSString * _Nullable)goal useGaplessMetadata:(SharedBoolean * _Nullable)useGaplessMetadata noIntroClip:(SharedBoolean * _Nullable)noIntroClip analysis:(NSString * _Nullable)analysis description:(NSString * _Nullable)description author:(NSString * _Nullable)author copyright:(NSString * _Nullable)copyright transcript:(NSString * _Nullable)transcript label:(NSString * _Nullable)label chapters:(NSArray<SharedChapter *> * _Nullable)chapters media:(BOOL)media mainMediaClipId:(NSString * _Nullable)mainMediaClipId mainMediaClipData:(SharedMediaClip * _Nullable)mainMediaClipData __attribute__((swift_name("init(id:title:publicationid:status:createddate:thumbnails:name:createdBy:updateddate:updatedBy:subtype:cat:clipCount:publisheddate:useGaplessPlayback:distribution:goal:useGaplessMetadata:noIntroClip:analysis:description:author:copyright:transcript:label:chapters:media:mainMediaClipId:mainMediaClipData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<NSString *> * _Nullable)component12 __attribute__((swift_name("component12()")));
- (SharedLong * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (SharedBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedBoolean * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SharedBoolean * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSArray<SharedChapter *> * _Nullable)component26 __attribute__((swift_name("component26()")));
- (BOOL)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (SharedMediaClip * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedThumbnail *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedProject *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title publicationid:(NSString * _Nullable)publicationid status:(NSString * _Nullable)status createddate:(NSString * _Nullable)createddate thumbnails:(NSArray<SharedThumbnail *> * _Nullable)thumbnails name:(NSString * _Nullable)name createdBy:(NSString * _Nullable)createdBy updateddate:(NSString * _Nullable)updateddate updatedBy:(NSString * _Nullable)updatedBy subtype:(NSString * _Nullable)subtype cat:(NSArray<NSString *> * _Nullable)cat clipCount:(SharedLong * _Nullable)clipCount publisheddate:(NSString * _Nullable)publisheddate useGaplessPlayback:(SharedBoolean * _Nullable)useGaplessPlayback distribution:(NSString * _Nullable)distribution goal:(NSString * _Nullable)goal useGaplessMetadata:(SharedBoolean * _Nullable)useGaplessMetadata noIntroClip:(SharedBoolean * _Nullable)noIntroClip analysis:(NSString * _Nullable)analysis description:(NSString * _Nullable)description author:(NSString * _Nullable)author copyright:(NSString * _Nullable)copyright transcript:(NSString * _Nullable)transcript label:(NSString * _Nullable)label chapters:(NSArray<SharedChapter *> * _Nullable)chapters media:(BOOL)media mainMediaClipId:(NSString * _Nullable)mainMediaClipId mainMediaClipData:(SharedMediaClip * _Nullable)mainMediaClipData __attribute__((swift_name("doCopy(id:title:publicationid:status:createddate:thumbnails:name:createdBy:updateddate:updatedBy:subtype:cat:clipCount:publisheddate:useGaplessPlayback:distribution:goal:useGaplessMetadata:noIntroClip:analysis:description:author:copyright:transcript:label:chapters:media:mainMediaClipId:mainMediaClipData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable analysis __attribute__((swift_name("analysis")));
@property (readonly) NSString * _Nullable author __attribute__((swift_name("author")));
@property (readonly) NSArray<NSString *> * _Nullable cat __attribute__((swift_name("cat")));
@property (readonly) NSArray<SharedChapter *> * _Nullable chapters __attribute__((swift_name("chapters")));
@property (readonly) SharedLong * _Nullable clipCount __attribute__((swift_name("clipCount")));
@property (readonly) NSString * _Nullable copyright __attribute__((swift_name("copyright")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString * _Nullable createddate __attribute__((swift_name("createddate")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable distribution __attribute__((swift_name("distribution")));
@property (readonly) NSString * _Nullable goal __attribute__((swift_name("goal")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property SharedMediaClip * _Nullable mainMediaClipData __attribute__((swift_name("mainMediaClipData")));
@property (readonly) NSString * _Nullable mainMediaClipId __attribute__((swift_name("mainMediaClipId")));
@property (readonly) BOOL media __attribute__((swift_name("media")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedBoolean * _Nullable noIntroClip __attribute__((swift_name("noIntroClip")));
@property (readonly) NSString * _Nullable publicationid __attribute__((swift_name("publicationid")));
@property (readonly) NSString * _Nullable publisheddate __attribute__((swift_name("publisheddate")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property (readonly) NSArray<SharedThumbnail *> * _Nullable thumbnails __attribute__((swift_name("thumbnails")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable transcript __attribute__((swift_name("transcript")));
@property (readonly) NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));
@property (readonly) NSString * _Nullable updateddate __attribute__((swift_name("updateddate")));
@property (readonly) SharedBoolean * _Nullable useGaplessMetadata __attribute__((swift_name("useGaplessMetadata")));
@property (readonly) SharedBoolean * _Nullable useGaplessPlayback __attribute__((swift_name("useGaplessPlayback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Project.Companion")))
@interface SharedProjectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Publication")))
@interface SharedPublication : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name status:(NSString *)status __attribute__((swift_name("init(id:name:status:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name status:(NSString * _Nullable)status type:(NSString * _Nullable)type publisherid:(NSString * _Nullable)publisherid label:(NSString * _Nullable)label baseurl:(NSString * _Nullable)baseurl baseuri:(NSString * _Nullable)baseuri sourcepath:(NSString * _Nullable)sourcepath text:(NSString * _Nullable)text bidadapters:(NSString * _Nullable)bidadapters usePreferredPlayMode:(NSString * _Nullable)usePreferredPlayMode embedAsync:(NSString * _Nullable)embedAsync avoidPreload:(NSString * _Nullable)avoidPreload avoidMediaManager:(NSString * _Nullable)avoidMediaManager avoidAndroidNativeHLS:(NSString * _Nullable)avoidAndroidNativeHLS serverUploadScript:(NSString * _Nullable)serverUploadScript statsserver:(NSString * _Nullable)statsserver statspublication:(NSString * _Nullable)statspublication playoutURL:(NSString * _Nullable)playoutURL defaultMediaAssetPath:(NSString * _Nullable)defaultMediaAssetPath contextMenuLink:(NSString * _Nullable)contextMenuLink streamingMediaAssetPath:(NSString * _Nullable)streamingMediaAssetPath rtmphost:(NSString * _Nullable)rtmphost publicationLabel:(NSString * _Nullable)publicationLabel streamingMediaAssetPathTimeline:(NSString * _Nullable)streamingMediaAssetPathTimeline providerURL:(NSString * _Nullable)providerURL secureMediaAssetPath:(NSString * _Nullable)secureMediaAssetPath timeZone:(NSString * _Nullable)timeZone liveMediaAssetPath:(NSString * _Nullable)liveMediaAssetPath enableChat:(NSString * _Nullable)enableChat wsChatEndpoint:(NSString * _Nullable)wsChatEndpoint __attribute__((swift_name("init(id:name:status:type:publisherid:label:baseurl:baseuri:sourcepath:text:bidadapters:usePreferredPlayMode:embedAsync:avoidPreload:avoidMediaManager:avoidAndroidNativeHLS:serverUploadScript:statsserver:statspublication:playoutURL:defaultMediaAssetPath:contextMenuLink:streamingMediaAssetPath:rtmphost:publicationLabel:streamingMediaAssetPathTimeline:providerURL:secureMediaAssetPath:timeZone:liveMediaAssetPath:enableChat:wsChatEndpoint:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (NSString * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSString * _Nullable)component22 __attribute__((swift_name("component22()")));
- (NSString * _Nullable)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString * _Nullable)component25 __attribute__((swift_name("component25()")));
- (NSString * _Nullable)component26 __attribute__((swift_name("component26()")));
- (NSString * _Nullable)component27 __attribute__((swift_name("component27()")));
- (NSString * _Nullable)component28 __attribute__((swift_name("component28()")));
- (NSString * _Nullable)component29 __attribute__((swift_name("component29()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component30 __attribute__((swift_name("component30()")));
- (NSString * _Nullable)component31 __attribute__((swift_name("component31()")));
- (NSString * _Nullable)component32 __attribute__((swift_name("component32()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedPublication *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name status:(NSString * _Nullable)status type:(NSString * _Nullable)type publisherid:(NSString * _Nullable)publisherid label:(NSString * _Nullable)label baseurl:(NSString * _Nullable)baseurl baseuri:(NSString * _Nullable)baseuri sourcepath:(NSString * _Nullable)sourcepath text:(NSString * _Nullable)text bidadapters:(NSString * _Nullable)bidadapters usePreferredPlayMode:(NSString * _Nullable)usePreferredPlayMode embedAsync:(NSString * _Nullable)embedAsync avoidPreload:(NSString * _Nullable)avoidPreload avoidMediaManager:(NSString * _Nullable)avoidMediaManager avoidAndroidNativeHLS:(NSString * _Nullable)avoidAndroidNativeHLS serverUploadScript:(NSString * _Nullable)serverUploadScript statsserver:(NSString * _Nullable)statsserver statspublication:(NSString * _Nullable)statspublication playoutURL:(NSString * _Nullable)playoutURL defaultMediaAssetPath:(NSString * _Nullable)defaultMediaAssetPath contextMenuLink:(NSString * _Nullable)contextMenuLink streamingMediaAssetPath:(NSString * _Nullable)streamingMediaAssetPath rtmphost:(NSString * _Nullable)rtmphost publicationLabel:(NSString * _Nullable)publicationLabel streamingMediaAssetPathTimeline:(NSString * _Nullable)streamingMediaAssetPathTimeline providerURL:(NSString * _Nullable)providerURL secureMediaAssetPath:(NSString * _Nullable)secureMediaAssetPath timeZone:(NSString * _Nullable)timeZone liveMediaAssetPath:(NSString * _Nullable)liveMediaAssetPath enableChat:(NSString * _Nullable)enableChat wsChatEndpoint:(NSString * _Nullable)wsChatEndpoint __attribute__((swift_name("doCopy(id:name:status:type:publisherid:label:baseurl:baseuri:sourcepath:text:bidadapters:usePreferredPlayMode:embedAsync:avoidPreload:avoidMediaManager:avoidAndroidNativeHLS:serverUploadScript:statsserver:statspublication:playoutURL:defaultMediaAssetPath:contextMenuLink:streamingMediaAssetPath:rtmphost:publicationLabel:streamingMediaAssetPathTimeline:providerURL:secureMediaAssetPath:timeZone:liveMediaAssetPath:enableChat:wsChatEndpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avoidAndroidNativeHLS __attribute__((swift_name("avoidAndroidNativeHLS")));
@property (readonly) NSString * _Nullable avoidMediaManager __attribute__((swift_name("avoidMediaManager")));
@property (readonly) NSString * _Nullable avoidPreload __attribute__((swift_name("avoidPreload")));
@property (readonly) NSString * _Nullable baseuri __attribute__((swift_name("baseuri")));
@property (readonly) NSString * _Nullable baseurl __attribute__((swift_name("baseurl")));
@property (readonly) NSString * _Nullable bidadapters __attribute__((swift_name("bidadapters")));
@property (readonly) NSString * _Nullable contextMenuLink __attribute__((swift_name("contextMenuLink")));
@property (readonly) NSString * _Nullable defaultMediaAssetPath __attribute__((swift_name("defaultMediaAssetPath")));
@property (readonly) NSString * _Nullable embedAsync __attribute__((swift_name("embedAsync")));
@property (readonly) NSString * _Nullable enableChat __attribute__((swift_name("enableChat")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable liveMediaAssetPath __attribute__((swift_name("liveMediaAssetPath")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable playoutURL __attribute__((swift_name("playoutURL")));
@property (readonly) NSString * _Nullable providerURL __attribute__((swift_name("providerURL")));
@property (readonly) NSString * _Nullable publicationLabel __attribute__((swift_name("publicationLabel")));
@property (readonly) NSString * _Nullable publisherid __attribute__((swift_name("publisherid")));
@property (readonly) NSString * _Nullable rtmphost __attribute__((swift_name("rtmphost")));
@property (readonly) NSString * _Nullable secureMediaAssetPath __attribute__((swift_name("secureMediaAssetPath")));
@property (readonly) NSString * _Nullable serverUploadScript __attribute__((swift_name("serverUploadScript")));
@property (readonly) NSString * _Nullable sourcepath __attribute__((swift_name("sourcepath")));
@property (readonly) NSString * _Nullable statspublication __attribute__((swift_name("statspublication")));
@property (readonly) NSString * _Nullable statsserver __attribute__((swift_name("statsserver")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable streamingMediaAssetPath __attribute__((swift_name("streamingMediaAssetPath")));
@property (readonly) NSString * _Nullable streamingMediaAssetPathTimeline __attribute__((swift_name("streamingMediaAssetPathTimeline")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable timeZone __attribute__((swift_name("timeZone")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable usePreferredPlayMode __attribute__((swift_name("usePreferredPlayMode")));
@property (readonly) NSString * _Nullable wsChatEndpoint __attribute__((swift_name("wsChatEndpoint")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Publication.Companion")))
@interface SharedPublicationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParams")))
@interface SharedRequestParams : SharedBase
- (instancetype)initWithMode:(NSString * _Nullable)mode playoutlabel:(NSString * _Nullable)playoutlabel contentindicator:(NSString * _Nullable)contentindicator contentid:(NSString * _Nullable)contentid __attribute__((swift_name("init(mode:playoutlabel:contentindicator:contentid:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRequestParams *)doCopyMode:(NSString * _Nullable)mode playoutlabel:(NSString * _Nullable)playoutlabel contentindicator:(NSString * _Nullable)contentindicator contentid:(NSString * _Nullable)contentid __attribute__((swift_name("doCopy(mode:playoutlabel:contentindicator:contentid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable contentid __attribute__((swift_name("contentid")));
@property (readonly) NSString * _Nullable contentindicator __attribute__((swift_name("contentindicator")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSString * _Nullable playoutlabel __attribute__((swift_name("playoutlabel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParams.Companion")))
@interface SharedRequestParamsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface SharedStep : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id mediaClipId:(NSString * _Nullable)mediaClipId isStart:(SharedBoolean * _Nullable)isStart entityType:(NSString * _Nullable)entityType entityId:(NSString * _Nullable)entityId __attribute__((swift_name("init(id:mediaClipId:isStart:entityType:entityId:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedStep *)doCopyId:(NSString * _Nullable)id mediaClipId:(NSString * _Nullable)mediaClipId isStart:(SharedBoolean * _Nullable)isStart entityType:(NSString * _Nullable)entityType entityId:(NSString * _Nullable)entityId __attribute__((swift_name("doCopy(id:mediaClipId:isStart:entityType:entityId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable entityId __attribute__((swift_name("entityId")));
@property NSString * _Nullable entityType __attribute__((swift_name("entityType")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isStart __attribute__((swift_name("isStart")));
@property (readonly) NSString * _Nullable mediaClipId __attribute__((swift_name("mediaClipId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface SharedStepCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subtitle")))
@interface SharedSubtitle : SharedBase
- (instancetype)initWithLanguageid:(NSString * _Nullable)languageid languagename:(NSString * _Nullable)languagename id:(NSString * _Nullable)id name:(NSString * _Nullable)name default:(NSString * _Nullable)default_ isocode:(NSString * _Nullable)isocode status:(NSString * _Nullable)status __attribute__((swift_name("init(languageid:languagename:id:name:default:isocode:status:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedSubtitle *)doCopyLanguageid:(NSString * _Nullable)languageid languagename:(NSString * _Nullable)languagename id:(NSString * _Nullable)id name:(NSString * _Nullable)name default:(NSString * _Nullable)default_ isocode:(NSString * _Nullable)isocode status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(languageid:languagename:id:name:default:isocode:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=default) NSString * _Nullable default_ __attribute__((swift_name("default_")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isocode __attribute__((swift_name("isocode")));
@property (readonly) NSString * _Nullable languageid __attribute__((swift_name("languageid")));
@property (readonly) NSString * _Nullable languagename __attribute__((swift_name("languagename")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subtitle.Companion")))
@interface SharedSubtitleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Thumbnail")))
@interface SharedThumbnail : SharedBase
- (instancetype)initWithSrc:(NSString * _Nullable)src width:(NSString * _Nullable)width height:(NSString * _Nullable)height main:(SharedBoolean * _Nullable)main __attribute__((swift_name("init(src:width:height:main:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedThumbnail *)doCopySrc:(NSString * _Nullable)src width:(NSString * _Nullable)width height:(NSString * _Nullable)height main:(SharedBoolean * _Nullable)main __attribute__((swift_name("doCopy(src:width:height:main:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable height __attribute__((swift_name("height")));
@property (readonly) SharedBoolean * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Thumbnail.Companion")))
@interface SharedThumbnailCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timeline")))
@interface SharedTimeline : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedTimeline *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timeline.Companion")))
@interface SharedTimelineCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedObject")))
@interface SharedTypedObject : SharedBase
- (instancetype)initWithType:(NSString * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedTypedObject *)doCopyType:(NSString * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedObject.Companion")))
@interface SharedTypedObjectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersioningData")))
@interface SharedVersioningData : SharedBase
- (instancetype)initWithTimelineVersion:(NSString * _Nullable)timelineVersion state:(NSString * _Nullable)state __attribute__((swift_name("init(timelineVersion:state:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedVersioningData *)doCopyTimelineVersion:(NSString * _Nullable)timelineVersion state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(timelineVersion:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable timelineVersion __attribute__((swift_name("timelineVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersioningData.Companion")))
@interface SharedVersioningDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("AdControllerInterface")))
@protocol SharedAdControllerInterface
@required
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadVastUrl:(NSString * _Nullable)vastUrl __attribute__((swift_name("load(vastUrl:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)play __attribute__((swift_name("play()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
@end;

__attribute__((swift_name("EventBusInterface")))
@protocol SharedEventBusInterface
@required
- (void)addEventlistenerListener:(id<SharedEventListenerInterface>)listener __attribute__((swift_name("addEventlistener(listener:)")));
- (void)removeEventlistenerListener:(id<SharedEventListenerInterface>)listener __attribute__((swift_name("removeEventlistener(listener:)")));
- (void)triggerEventType:(SharedEventName *)eventType __attribute__((swift_name("trigger(eventType:)")));
- (void)triggerEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("trigger(eventType:data:)")));
@property NSMutableArray<id<SharedEventListenerInterface>> *listeners __attribute__((swift_name("listeners")));
@end;

__attribute__((swift_name("MediaControllerInterface")))
@protocol SharedMediaControllerInterface
@required
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (BOOL)loadMediaUrl:(NSString * _Nullable)mediaUrl seekPosition:(id _Nullable)seekPosition __attribute__((swift_name("load(mediaUrl:seekPosition:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)play __attribute__((swift_name("play()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
@end;

__attribute__((swift_name("PosterControllerInterface")))
@protocol SharedPosterControllerInterface
@required
- (BOOL)hide __attribute__((swift_name("hide()")));
- (BOOL)show __attribute__((swift_name("show()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Database")))
@interface SharedDatabase : SharedBase
- (instancetype)initWithDatabaseDriverFactory:(SharedDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Database.Companion")))
@interface SharedDatabaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface SharedDatabaseDriverFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalStorage")))
@interface SharedLocalStorage : SharedBase
- (instancetype)initWithKey:(NSString *)key value:(NSString * _Nullable)value type:(SharedLong * _Nullable)type __attribute__((swift_name("init(key:value:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLocalStorage *)doCopyKey:(NSString *)key value:(NSString * _Nullable)value type:(SharedLong * _Nullable)type __attribute__((swift_name("doCopy(key:value:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) SharedLong * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol SharedRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("LocalStorageDatabase")))
@protocol SharedLocalStorageDatabase <SharedRuntimeTransacter>
@required
@property (readonly) id<SharedLocalStorageDatabaseQueries> localStorageDatabaseQueries __attribute__((swift_name("localStorageDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalStorageDatabaseCompanion")))
@interface SharedLocalStorageDatabaseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedLocalStorageDatabase>)invokeDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<SharedRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("LocalStorageDatabaseQueries")))
@protocol SharedLocalStorageDatabaseQueries <SharedRuntimeTransacter>
@required
- (void)createLocalStorageTable __attribute__((swift_name("createLocalStorageTable()")));
- (void)createVersionTable __attribute__((swift_name("createVersionTable()")));
- (void)deleteVersions __attribute__((swift_name("deleteVersions()")));
- (void)dropTable __attribute__((swift_name("dropTable()")));
- (void)insertKeyKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("insertKey(key:value:)")));
- (void)insertKeyTypeKey:(NSString *)key value:(NSString * _Nullable)value type:(SharedLong * _Nullable)type __attribute__((swift_name("insertKeyType(key:value:type:)")));
- (void)insertVersionVersion:(SharedLong * _Nullable)version __attribute__((swift_name("insertVersion(version:)")));
- (void)removeAllKeys __attribute__((swift_name("removeAllKeys()")));
- (void)removeKeyKey:(NSString *)key __attribute__((swift_name("removeKey(key:)")));
- (SharedRuntimeQuery<NSString *> *)selectAllKeys __attribute__((swift_name("selectAllKeys()")));
- (SharedRuntimeQuery<SharedSelectKey *> *)selectKeyKey:(NSString *)key __attribute__((swift_name("selectKey(key:)")));
- (SharedRuntimeQuery<id> *)selectKeyKey:(NSString *)key mapper:(id (^)(NSString * _Nullable))mapper __attribute__((swift_name("selectKey(key:mapper:)")));
- (SharedRuntimeQuery<SharedSelectKeyType *> *)selectKeyTypeKey:(NSString *)key __attribute__((swift_name("selectKeyType(key:)")));
- (SharedRuntimeQuery<id> *)selectKeyTypeKey:(NSString *)key mapper:(id (^)(NSString * _Nullable, SharedLong * _Nullable))mapper __attribute__((swift_name("selectKeyType(key:mapper:)")));
- (SharedRuntimeQuery<SharedLong *> *)selectVersion __attribute__((swift_name("selectVersion()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKey")))
@interface SharedSelectKey : SharedBase
- (instancetype)initWithValue:(NSString * _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedSelectKey *)doCopyValue:(NSString * _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKeyType")))
@interface SharedSelectKeyType : SharedBase
- (instancetype)initWithValue:(NSString * _Nullable)value type:(SharedLong * _Nullable)type __attribute__((swift_name("init(value:type:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSelectKeyType *)doCopyValue:(NSString * _Nullable)value type:(SharedLong * _Nullable)type __attribute__((swift_name("doCopy(value:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLong * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Version")))
@interface SharedVersion : SharedBase
- (instancetype)initWithVersion:(int64_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (SharedVersion *)doCopyVersion:(int64_t)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventName")))
@interface SharedEventName : SharedKotlinEnum<SharedEventName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEventName *bbEmbedLoaded __attribute__((swift_name("bbEmbedLoaded")));
@property (class, readonly) SharedEventName *bbEmbedFailed __attribute__((swift_name("bbEmbedFailed")));
@property (class, readonly) SharedEventName *bbPlayoutChanged __attribute__((swift_name("bbPlayoutChanged")));
@property (class, readonly) SharedEventName *bbProjectLoaded __attribute__((swift_name("bbProjectLoaded")));
@property (class, readonly) SharedEventName *bbMediaclipLoaded __attribute__((swift_name("bbMediaclipLoaded")));
@property (class, readonly) SharedEventName *bbMediaclipFailed __attribute__((swift_name("bbMediaclipFailed")));
@property (class, readonly) SharedEventName *bbProgramAutopause __attribute__((swift_name("bbProgramAutopause")));
@property (class, readonly) SharedEventName *bbProgramAutopauseplay __attribute__((swift_name("bbProgramAutopauseplay")));
@property (class, readonly) SharedEventName *bbProgramPlay __attribute__((swift_name("bbProgramPlay")));
@property (class, readonly) SharedEventName *bbFullscreenChange __attribute__((swift_name("bbFullscreenChange")));
@property (class, readonly) SharedEventName *bbError __attribute__((swift_name("bbError")));
@property (class, readonly) SharedEventName *bbWarning __attribute__((swift_name("bbWarning")));
@property (class, readonly) SharedEventName *bbHeadSelected __attribute__((swift_name("bbHeadSelected")));
@property (class, readonly) SharedEventName *bbCommercialHeadSelected __attribute__((swift_name("bbCommercialHeadSelected")));
@property (class, readonly) SharedEventName *bbAssetSelected __attribute__((swift_name("bbAssetSelected")));
@property (class, readonly) SharedEventName *bbMediaStarted __attribute__((swift_name("bbMediaStarted")));
@property (class, readonly) SharedEventName *bbMediaFinished __attribute__((swift_name("bbMediaFinished")));
@property (class, readonly) SharedEventName *bbMediaPaused __attribute__((swift_name("bbMediaPaused")));
@property (class, readonly) SharedEventName *bbMediaPlay __attribute__((swift_name("bbMediaPlay")));
@property (class, readonly) SharedEventName *bbMediaPlaying __attribute__((swift_name("bbMediaPlaying")));
@property (class, readonly) SharedEventName *bbMediaFailed __attribute__((swift_name("bbMediaFailed")));
@property (class, readonly) SharedEventName *bbMediaResumed __attribute__((swift_name("bbMediaResumed")));
@property (class, readonly) SharedEventName *bbMediaSeeking __attribute__((swift_name("bbMediaSeeking")));
@property (class, readonly) SharedEventName *bbMediaSeeked __attribute__((swift_name("bbMediaSeeked")));
@property (class, readonly) SharedEventName *bbMediaStalled __attribute__((swift_name("bbMediaStalled")));
@property (class, readonly) SharedEventName *bbMediaProgress __attribute__((swift_name("bbMediaProgress")));
@property (class, readonly) SharedEventName *bbMediaPlaybackRateChange __attribute__((swift_name("bbMediaPlaybackRateChange")));
@property (class, readonly) SharedEventName *bbMediaCanplay __attribute__((swift_name("bbMediaCanplay")));
@property (class, readonly) SharedEventName *bbMediaDurationChange __attribute__((swift_name("bbMediaDurationChange")));
@property (class, readonly) SharedEventName *bbMediaTimeupdate __attribute__((swift_name("bbMediaTimeupdate")));
@property (class, readonly) SharedEventName *bbMsasPreFinished __attribute__((swift_name("bbMsasPreFinished")));
@property (class, readonly) SharedEventName *bbMsasMainFinished __attribute__((swift_name("bbMsasMainFinished")));
@property (class, readonly) SharedEventName *bbMsasPostFinished __attribute__((swift_name("bbMsasPostFinished")));
@property (class, readonly) SharedEventName *bbWidgetShown __attribute__((swift_name("bbWidgetShown")));
@property (class, readonly) SharedEventName *bbWidgetClicked __attribute__((swift_name("bbWidgetClicked")));
@property (class, readonly) SharedEventName *bbWidgetCustomAnalytics __attribute__((swift_name("bbWidgetCustomAnalytics")));
@property (class, readonly) SharedEventName *bbAdunitInitialized __attribute__((swift_name("bbAdunitInitialized")));
@property (class, readonly) SharedEventName *bbAdunitFailed __attribute__((swift_name("bbAdunitFailed")));
@property (class, readonly) SharedEventName *bbInview __attribute__((swift_name("bbInview")));
@property (class, readonly) SharedEventName *bbOutview __attribute__((swift_name("bbOutview")));
@property (class, readonly) SharedEventName *bbAdsystemInitialized __attribute__((swift_name("bbAdsystemInitialized")));
@property (class, readonly) SharedEventName *bbAdsystemLoadstart __attribute__((swift_name("bbAdsystemLoadstart")));
@property (class, readonly) SharedEventName *bbAdsystemLoaded __attribute__((swift_name("bbAdsystemLoaded")));
@property (class, readonly) SharedEventName *bbAdsystemBlocked __attribute__((swift_name("bbAdsystemBlocked")));
@property (class, readonly) SharedEventName *bbAdsystemCanplay __attribute__((swift_name("bbAdsystemCanplay")));
@property (class, readonly) SharedEventName *bbAdsystemStarted __attribute__((swift_name("bbAdsystemStarted")));
@property (class, readonly) SharedEventName *bbAdsystemClicked __attribute__((swift_name("bbAdsystemClicked")));
@property (class, readonly) SharedEventName *bbAdsystemSkipped __attribute__((swift_name("bbAdsystemSkipped")));
@property (class, readonly) SharedEventName *bbAdsystemNoad __attribute__((swift_name("bbAdsystemNoad")));
@property (class, readonly) SharedEventName *bbAdsystemFailed __attribute__((swift_name("bbAdsystemFailed")));
@property (class, readonly) SharedEventName *bbAdsystemFinished __attribute__((swift_name("bbAdsystemFinished")));
@property (class, readonly) SharedEventName *bbAdsystemQuartile __attribute__((swift_name("bbAdsystemQuartile")));
@property (class, readonly) SharedEventName *bbViewStarted __attribute__((swift_name("bbViewStarted")));
@property (class, readonly) SharedEventName *bbViewFinished __attribute__((swift_name("bbViewFinished")));
@property (class, readonly) SharedEventName *bbPhaseChange __attribute__((swift_name("bbPhaseChange")));
@property (class, readonly) SharedEventName *bbApiCalled __attribute__((swift_name("bbApiCalled")));
@property (class, readonly) SharedEventName *bbDvidChanged __attribute__((swift_name("bbDvidChanged")));
@property (class, readonly) SharedEventName *bbMovingthumbnailStarted __attribute__((swift_name("bbMovingthumbnailStarted")));
@property (class, readonly) SharedEventName *bbAdblockDetectionFinished __attribute__((swift_name("bbAdblockDetectionFinished")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerStarted __attribute__((swift_name("bbAutoplaynexttimerStarted")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerCancelled __attribute__((swift_name("bbAutoplaynexttimerCancelled")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerResumed __attribute__((swift_name("bbAutoplaynexttimerResumed")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerPaused __attribute__((swift_name("bbAutoplaynexttimerPaused")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerFinished __attribute__((swift_name("bbAutoplaynexttimerFinished")));
@property (class, readonly) SharedEventName *bbAutoplaynexttimerTick __attribute__((swift_name("bbAutoplaynexttimerTick")));
@property (class, readonly) SharedEventName *bbRelatedClipsChanged __attribute__((swift_name("bbRelatedClipsChanged")));
@property (class, readonly) SharedEventName *bbResized __attribute__((swift_name("bbResized")));
@property (class, readonly) SharedEventName *bbMasterMute __attribute__((swift_name("bbMasterMute")));
@property (class, readonly) SharedEventName *bbMasterUnmute __attribute__((swift_name("bbMasterUnmute")));
@property (class, readonly) SharedEventName *bbImaLoadFailed __attribute__((swift_name("bbImaLoadFailed")));
@property (class, readonly) SharedEventName *adinitialized __attribute__((swift_name("adinitialized")));
@property (class, readonly) SharedEventName *adfailed __attribute__((swift_name("adfailed")));
@property (class, readonly) SharedEventName *adloaded __attribute__((swift_name("adloaded")));
@property (class, readonly) SharedEventName *adcanplay __attribute__((swift_name("adcanplay")));
@property (class, readonly) SharedEventName *adclicked __attribute__((swift_name("adclicked")));
@property (class, readonly) SharedEventName *adskipped __attribute__((swift_name("adskipped")));
@property (class, readonly) SharedEventName *adfirstquartile __attribute__((swift_name("adfirstquartile")));
@property (class, readonly) SharedEventName *admidpoint __attribute__((swift_name("admidpoint")));
@property (class, readonly) SharedEventName *adthirdquartile __attribute__((swift_name("adthirdquartile")));
@property (class, readonly) SharedEventName *adcontentpausereq __attribute__((swift_name("adcontentpausereq")));
@property (class, readonly) SharedEventName *adcontentresumereq __attribute__((swift_name("adcontentresumereq")));
@property (class, readonly) SharedEventName *adstarted __attribute__((swift_name("adstarted")));
@property (class, readonly) SharedEventName *adcomplete __attribute__((swift_name("adcomplete")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FitMode")))
@interface SharedFitMode : SharedKotlinEnum<SharedFitMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedFitMode *fitSmart __attribute__((swift_name("fitSmart")));
@property (class, readonly) SharedFitMode *fitNative __attribute__((swift_name("fitNative")));
@property (class, readonly) SharedFitMode *fitVertical __attribute__((swift_name("fitVertical")));
@property (class, readonly) SharedFitMode *fitHorizontal __attribute__((swift_name("fitHorizontal")));
@property (class, readonly) SharedFitMode *fitBoth __attribute__((swift_name("fitBoth")));
@property (class, readonly) SharedFitMode *fitStretch __attribute__((swift_name("fitStretch")));
@property (class, readonly) SharedFitMode *fitCover __attribute__((swift_name("fitCover")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phase")))
@interface SharedPhase : SharedKotlinEnum<SharedPhase *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPhase *theInit __attribute__((swift_name("theInit")));
@property (class, readonly) SharedPhase *pre __attribute__((swift_name("pre")));
@property (class, readonly) SharedPhase *main __attribute__((swift_name("main")));
@property (class, readonly) SharedPhase *post __attribute__((swift_name("post")));
@property (class, readonly) SharedPhase *exit __attribute__((swift_name("exit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PosType")))
@interface SharedPosType : SharedKotlinEnum<SharedPosType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPosType *preroll __attribute__((swift_name("preroll")));
@property (class, readonly) SharedPosType *leader __attribute__((swift_name("leader")));
@property (class, readonly) SharedPosType *inarticle __attribute__((swift_name("inarticle")));
@property (class, readonly) SharedPosType *vmap __attribute__((swift_name("vmap")));
@property (class, readonly) SharedPosType *midroll __attribute__((swift_name("midroll")));
@property (class, readonly) SharedPosType *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) SharedPosType *postroll __attribute__((swift_name("postroll")));
@property (class, readonly) SharedPosType *exitscreen __attribute__((swift_name("exitscreen")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State")))
@interface SharedState : SharedKotlinEnum<SharedState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedState *idle __attribute__((swift_name("idle")));
@property (class, readonly) SharedState *loading __attribute__((swift_name("loading")));
@property (class, readonly) SharedState *paused __attribute__((swift_name("paused")));
@property (class, readonly) SharedState *playing __attribute__((swift_name("playing")));
@property (class, readonly) SharedState *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedController")))
@interface SharedEmbedController : SharedBase
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus jsonEmbedUrl:(NSString * _Nullable)jsonEmbedUrl __attribute__((swift_name("init(eventBus:jsonEmbedUrl:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)loadJsonEmbedUrl:(NSString *)jsonEmbedUrl __attribute__((swift_name("load(jsonEmbedUrl:)")));
@property NSString *appId __attribute__((swift_name("appId")));
@property NSString *appIndicator __attribute__((swift_name("appIndicator")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property SharedMediaClip * _Nullable clip __attribute__((swift_name("clip")));
@property SharedMediaClipList * _Nullable cliplist __attribute__((swift_name("cliplist")));
@property NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property NSString * _Nullable contentIndicator __attribute__((swift_name("contentIndicator")));
@property id<SharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property SharedPlayout * _Nullable playout __attribute__((swift_name("playout")));
@property SharedProject * _Nullable project __attribute__((swift_name("project")));
@property SharedPublication * _Nullable publication __attribute__((swift_name("publication")));
@property NSString *publicationName __attribute__((swift_name("publicationName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmbedController.Companion")))
@interface SharedEmbedControllerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSString *)createJsonEmbedUrlBaseUrl:(NSString *)baseUrl appIndicator:(NSString *)appIndicator appId:(NSString *)appId __attribute__((swift_name("createJsonEmbedUrl(baseUrl:appIndicator:appId:)")));
- (NSString *)createJsonEmbedUrlBaseUrl:(NSString *)baseUrl appIndicator:(NSString *)appIndicator appId:(NSString *)appId contentIndicator:(NSString * _Nullable)contentIndicator contentId:(NSString * _Nullable)contentId __attribute__((swift_name("createJsonEmbedUrl(baseUrl:appIndicator:appId:contentIndicator:contentId:)")));
- (NSString *)publicationNameFromBaseUrlBaseUrl:(NSString *)baseUrl __attribute__((swift_name("publicationNameFromBaseUrl(baseUrl:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InViewController")))
@interface SharedInViewController : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus pc:(SharedProgramController * _Nullable)pc __attribute__((swift_name("init(eventBus:pc:)"))) __attribute__((objc_designated_initializer));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)setInViewInView:(SharedBoolean * _Nullable)inView __attribute__((swift_name("setInView(inView:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainController")))
@interface SharedMainController : SharedBase
- (instancetype)initWithPublicationName:(NSString *)publicationName __attribute__((swift_name("init(publicationName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)version __attribute__((swift_name("version()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainController.settings")))
@interface SharedMainControllerSettings : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)settings __attribute__((swift_name("init()")));
- (SharedPlayerSettings *)getSettings __attribute__((swift_name("getSettings()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsasController")))
@interface SharedMsasController : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (id _Nullable)getPropertyName:(NSString *)propertyName __attribute__((swift_name("get(propertyName:)")));
- (void)loadContentContent:(NSArray<SharedAdUnit *> * _Nullable)content __attribute__((swift_name("loadContent(content:)")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (BOOL)pause __attribute__((swift_name("pause()")));
- (BOOL)playPhase:(SharedPhase *)phase __attribute__((swift_name("play(phase:)")));
- (BOOL)resume __attribute__((swift_name("resume()")));
- (BOOL)setPropertyName:(NSString *)propertyName propertyValue:(id _Nullable)propertyValue __attribute__((swift_name("set(propertyName:propertyValue:)")));
@property id<SharedAdControllerInterface> _Nullable adController __attribute__((swift_name("adController")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsasController.Companion")))
@interface SharedMsasControllerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramController")))
@interface SharedProgramController : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (BOOL)autoPlayNextCancel __attribute__((swift_name("autoPlayNextCancel()")));
- (SharedState *)getState __attribute__((swift_name("getState()")));
- (void)loadContentContent:(id<SharedContentItemInterface>)content initiator:(NSString * _Nullable)initiator autoPlay:(SharedBoolean * _Nullable)autoPlay seekPosition:(id _Nullable)seekPosition __attribute__((swift_name("loadContent(content:initiator:autoPlay:seekPosition:)")));
- (void)loadContentByIdContentId:(NSString *)contentId contentIndicator:(NSString * _Nullable)contentIndicator initiator:(NSString * _Nullable)initiator autoPlay:(SharedBoolean * _Nullable)autoPlay seekPosition:(id _Nullable)seekPosition __attribute__((swift_name("loadContentById(contentId:contentIndicator:initiator:autoPlay:seekPosition:)")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)play __attribute__((swift_name("play()")));
- (void)seekPositionInSeconds:(id)positionInSeconds __attribute__((swift_name("seek(positionInSeconds:)")));
- (void)setStateState:(SharedState *)state __attribute__((swift_name("setState(state:)")));
@property id<SharedAdControllerInterface> _Nullable adController __attribute__((swift_name("adController")));
@property SharedMediaClip * _Nullable clipData __attribute__((swift_name("clipData")));
@property NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property id<SharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@property void (^ _Nullable listener)(SharedState *) __attribute__((swift_name("listener")));
@property id<SharedMediaControllerInterface> _Nullable mediaController __attribute__((swift_name("mediaController")));
@property id<SharedPosterControllerInterface> _Nullable posterController __attribute__((swift_name("posterController")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatsController")))
@interface SharedStatsController : SharedBase <SharedEventListenerInterface>
- (instancetype)initWithEventBus:(id<SharedEventBusInterface> _Nullable)eventBus __attribute__((swift_name("init(eventBus:)"))) __attribute__((objc_designated_initializer));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)onEventEventType:(SharedEventName *)eventType data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("onEvent(eventType:data:)")));
@property id<SharedEventBusInterface> _Nullable eventBus __attribute__((swift_name("eventBus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestController")))
@interface SharedTestController : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) SharedKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentLoader")))
@interface SharedContentLoader : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)__destruct __attribute__((swift_name("__destruct()")));
- (void)getContentFromJsonUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(id<SharedContentItemInterface>))onSuccess onFailure:(void (^)(SharedKotlinException *))onFailure __attribute__((swift_name("getContentFromJsonUrl(jsonUrl:onSuccess:onFailure:)")));
- (void)getJsonStringFromUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(NSString *))onSuccess onFailure:(void (^)(SharedKotlinException *))onFailure __attribute__((swift_name("getJsonStringFromUrl(jsonUrl:onSuccess:onFailure:)")));
- (void)getObjectFromJsonUrlJsonUrl:(NSString *)jsonUrl onSuccess:(void (^)(id _Nullable))onSuccess onFailure:(void (^)(SharedKotlinException *))onFailure __attribute__((swift_name("getObjectFromJsonUrl(jsonUrl:onSuccess:onFailure:)")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentItemKt")))
@interface SharedContentItemKt : SharedBase
@property (class, readonly) SharedKotlinx_serialization_coreSerializersModule *contentItemSerializersModule __attribute__((swift_name("contentItemSerializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainControllerKt")))
@interface SharedMainControllerKt : SharedBase
@property (class, readonly) SharedDatabase *localStorage __attribute__((swift_name("localStorage")));
@property (class) NSString *playerPublicationName __attribute__((swift_name("playerPublicationName")));
@property (class) SharedPlayerSettings *playerSettings __attribute__((swift_name("playerSettings")));
@property (class, readonly) SharedProgramController *programController __attribute__((swift_name("programController")));
@property (class) SharedStatsLogger *statsLogger __attribute__((swift_name("statsLogger")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCompletableJob")))
@protocol SharedKotlinx_coroutines_coreCompletableJob <SharedKotlinx_coroutines_coreJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(SharedKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SharedKotlinx_serialization_jsonJsonElement : SharedBase
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol SharedRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol SharedRuntimeSqlDriver <SharedRuntimeCloseable>
@required
- (SharedRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<SharedRuntimeSqlCursor>)executeQueryIdentifier:(SharedInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<SharedRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (SharedRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol SharedRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol SharedRuntimeTransactionWithoutReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<SharedRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol SharedRuntimeTransactionWithReturn <SharedRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<SharedRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol SharedRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<SharedRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<SharedRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface SharedRuntimeQuery<__covariant RowType> : SharedBase
- (instancetype)initWithQueries:(NSMutableArray<SharedRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<SharedRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<SharedRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<SharedRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<SharedRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedKtor_client_coreHttpClient : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedKtor_client_coreHttpClientEngine>)engine userConfig:(SharedKtor_client_coreHttpClientConfig<SharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_client_coreHttpClient *)configBlock:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(SharedKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<SharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<SharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<SharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface SharedKotlinx_coroutines_coreCancellationException : SharedKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SharedKotlinx_coroutines_coreSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface SharedRuntimeTransacterTransaction : SharedBase <SharedRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) SharedRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol SharedRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(SharedKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(SharedDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(SharedLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol SharedRuntimeSqlCursor <SharedRuntimeCloseable>
@required
- (SharedKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (SharedDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (SharedLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol SharedRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedKtor_client_coreHttpClientEngine <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedKtor_client_coreHttpClientEngineConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) SharedKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedKtor_client_coreHttpClientConfig<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<SharedKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SharedKtor_httpHttpMessageBuilder
@required
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SharedKtor_client_coreHttpRequestBuilder : SharedBase <SharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SharedKtor_httpURLBuilder *, SharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SharedKtor_client_coreHttpClientCall : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(SharedKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedKtor_utilsPipeline<TSubject, TContext> : SharedBase
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedKtor_utilsPipelinePhase *)phase block:(id<SharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedKtor_client_coreHttpReceivePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponse *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedKtor_client_coreHttpRequestPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedKtor_client_coreHttpResponsePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponseContainer *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedKtor_client_coreHttpSendPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required
- (SharedKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SharedKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SharedKtor_client_coreHttpRequestData : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url method:(SharedKtor_httpHttpMethod *)method headers:(id<SharedKtor_httpHeaders>)headers body:(SharedKtor_httpOutgoingContent *)body executionContext:(id<SharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<SharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SharedKtor_client_coreHttpResponseData : SharedBase
- (instancetype)initWithStatusCode:(SharedKtor_httpHttpStatusCode *)statusCode requestTime:(SharedKtor_utilsGMTDate *)requestTime headers:(id<SharedKtor_httpHeaders>)headers version:(SharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedKtor_client_coreProxyConfig : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol SharedKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(SharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface SharedKtor_utilsStringValuesBuilder : SharedBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) SharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SharedKtor_httpHeadersBuilder : SharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SharedKtor_httpURLBuilder : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(SharedKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (SharedKtor_httpURLBuilder *)pathComponents:(SharedKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (SharedKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) SharedKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SharedKtor_httpHttpMethod : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface SharedKtor_client_coreTypeInfo : SharedBase
- (instancetype)initWithType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<SharedKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<SharedKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_client_coreTypeInfo *)doCopyType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SharedKtor_httpHttpMessage
@required
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SharedKtor_client_coreHttpRequest <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SharedKtor_client_coreHttpResponse : SharedBase <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedKtor_utilsAttributeKey<T> : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedKtor_utilsPipelinePhase : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SharedKtor_client_coreHttpResponseContainer : SharedBase
- (instancetype)initWithExpectedType:(SharedKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SharedKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SharedKotlinx_coroutines_coreAtomicDesc : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SharedKotlinx_coroutines_coreOpDescriptor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SharedKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedKtor_httpUrl : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedKtor_httpUrl *)doCopyProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SharedKtor_httpHeaders <SharedKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SharedKtor_httpOutgoingContent : SharedBase
- (id _Nullable)getPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) SharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SharedKtor_httpHttpStatusCode : SharedBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SharedKtor_utilsGMTDate : SharedBase <SharedKotlinComparable>
- (int32_t)compareToOther:(SharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SharedKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (SharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SharedKtor_httpHttpProtocolVersion : SharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (SharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedKtor_httpURLProtocol : SharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface SharedKtor_httpParametersBuilder : SharedKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpParameters>)build __attribute__((swift_name("build()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SharedKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKtor_ioIoBuffer *)dst completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(SharedKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property SharedKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SharedKotlinx_coroutines_coreAtomicOp<__contravariant T> : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SharedKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedKtor_httpParameters <SharedKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SharedKtor_httpHeaderValueWithParameters : SharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SharedKtor_httpContentType : SharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SharedKtor_utilsWeekDay : SharedKotlinEnum<SharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SharedKtor_utilsMonth : SharedKotlinEnum<SharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKtor_utilsMonth *december __attribute__((swift_name("december")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<SharedKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SharedKtor_ioMemory : SharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SharedKtor_ioBuffer : SharedBase
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(SharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SharedKtor_ioChunkBuffer : SharedKtor_ioBuffer
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) SharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol SharedKtor_ioInput <SharedKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKotlinAppendable
@required
- (id<SharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol SharedKtor_ioOutput <SharedKotlinAppendable, SharedKtor_ioCloseable>
@required
- (id<SharedKotlinAppendable>)appendCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface SharedKtor_ioIoBuffer : SharedKtor_ioChunkBuffer <SharedKtor_ioInput, SharedKtor_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (id<SharedKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(SharedKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (SharedKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(SharedInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(SharedInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface SharedKtor_ioAbstractInput : SharedBase <SharedKtor_ioInput>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(SharedKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(SharedKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property SharedKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface SharedKtor_ioByteReadPacketBase : SharedKtor_ioAbstractInput
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface SharedKtor_ioByteReadPacketPlatformBase : SharedKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SharedKtor_ioByteReadPacket : SharedKtor_ioByteReadPacketPlatformBase <SharedKtor_ioInput>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SharedKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (SharedKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface SharedKtor_ioByteOrder : SharedKotlinEnum<SharedKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) SharedKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SharedKtor_httpHeaderValueParam : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SharedKtor_ioObjectPool <SharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface SharedKotlinCharArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface SharedKotlinCharIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next_ __attribute__((swift_name("next_()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
