/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebGeolocationPolicyListener : NSObject <WebGeolocationPolicyListener> {
    struct RefPtr<WebCore::Geolocation> { 
        struct Geolocation {} *m_ptr; 
    } _geolocation;
}


- (void)deny;
- (void)allow;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)shouldClearCache;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); int x2; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; struct Watchers { struct HashMap<int,WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::IntHash<unsigned int>,WTF::HashTraits<int>,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<int,std::pair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::PairFirstExtractor<std::pair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >,WTF::HashTraits<int> > { struct pair<int,WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_4_1_1; struct HashMap<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,int,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<int> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,std::pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>,WTF::PairFirstExtractor<std::pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> >,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::PairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct pair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,int> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_4_1_2; } x4; struct Frame {} *x5; struct OwnPtr<WebCore::GeolocationService> { struct GeolocationService {} *x_6_1_1; } x6; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_7_1_1; } x7; int x8; boolx9; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_10_1_1; } x10; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::RefPtr<WebCore::Geolocation::GeoNotifier>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >,WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_11_1_1; } x11; }*)arg1;

@end
