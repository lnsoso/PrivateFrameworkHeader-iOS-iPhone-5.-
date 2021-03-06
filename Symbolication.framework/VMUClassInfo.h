/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, VMUClassInfo;

@interface VMUClassInfo : NSObject <NSCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _reader;

    unsigned long long _remoteIsa;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar {} **_localIvarList;
    int *_ivarSizes;
    int _remoteType;
    NSString *_remoteClassName;
    NSString *_remoteBinaryName;
    VMUClassInfo *_superclassLayout;
    char *_weakLayout;
    char *_strongLayout;
    BOOL *_weakMap;
    BOOL *_strongMap;
}

@property(readonly) NSString * typeName;
@property(readonly) NSString * fullIvarDescription;
@property(readonly) NSString * shortIvarDescription;
@property(readonly) int infoType;
@property(readonly) BOOL isARR;
@property(readonly) BOOL isRealized;
@property(readonly) BOOL isMetaClass;
@property(readonly) BOOL isRootClass;
@property(readonly) BOOL hasCppConstructorOrDestructor;
@property(readonly) NSString * className;
@property(readonly) NSString * binaryName;
@property(readonly) unsigned long long remoteIsa;
@property(readonly) unsigned int instanceSize;

+ (void)initialize;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;

- (id)className;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsaPointer:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
- (void)scanObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(id)arg3;
- (id)shortIvarDescription;
- (BOOL)isMetaClass;
- (const char *)_copyRemoteStringAt:(unsigned long long)arg1;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg1;
- (BOOL*)_processARRLayout:(const char *)arg1;
- (BOOL)isARR;
- (id)_initWithClass:(unsigned long long)arg1 doLayouts:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg4 type:(int)arg5 memoryReader:(id)arg6;
- (void)_setClassNameWithAddress:(unsigned long long)arg1;
- (int)_readRemoteIntAt:(unsigned long long)arg1;
- (struct objc_ivar { }*)_copyRemoteIvarAt:(unsigned long long)arg1;
- (const char *)_copyRemoteLayout:(unsigned long long)arg1;
- (void)_parseIvarsAndLayouts;
- (BOOL)isRealized;
- (BOOL)isRootClass;
- (unsigned long long)remoteIsa;
- (id)binaryName;
- (int)infoType;
- (void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(id)arg3;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (BOOL)hasCppConstructorOrDestructor;
- (void)_scanFieldsToOffset:(unsigned int)arg1 withBlock:(id)arg2;
- (void)enumerateIvarsWithBlock:(id)arg1;
- (id)typeName;
- (id)fullIvarDescription;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg3 type:(int)arg4 memoryReader:(id)arg5;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
- (void)setMemoryReader:(id)arg1;
- (unsigned int)instanceSize;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)debugDescription;
- (void)dealloc;

@end
