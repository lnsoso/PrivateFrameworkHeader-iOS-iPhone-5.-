/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSURL;

@interface GEOQueryCollector : NSObject  {
    NSURL *_searchQueryServerURL;
    NSURL *_directionsQueryServerURL;
}

+ (id)sharedCollector;

- (void)submitDirectionsQuery:(id)arg1;
- (void)submitSearchQuery:(id)arg1;
- (void)cancelAllSubmissions;
- (id)init;
- (void)dealloc;

@end
