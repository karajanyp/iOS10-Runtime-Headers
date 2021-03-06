/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPhoneNumbersTicket : NSObject <GEOMapServiceTicket> {
    bool  _allowCellularDataForLookup;
    bool  _canceled;
    NSArray * _phoneNumbers;
    GEOMapServiceTraits * _traits;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)defaultRelatedSuggestion;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (bool)isCanceled;
- (bool)isChainResultSet;
- (id)relatedSearchSuggestions;
- (id)responseUserInfo;
- (id)resultBoundingRegion;
- (id)resultDisplayHeader;
- (id)resultSectionHeader;
- (int)searchResultType;
- (bool)shouldEnableRedoSearch;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (id)traits;

@end
