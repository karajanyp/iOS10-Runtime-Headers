/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {
    NSMutableArray * _advisorys;
    NSString * _detailTimeFormatted;
    GEOFormattedString * _duration;
    GEOFormattedString * _durationList;
    GEOFormattedString * _fareErrorMessage;
    GEOFormattedString * _overviewSubtitle;
    GEOFormattedString * _planningDescription;
    GEOFormattedString * _serviceGap;
    GEOFormattedString * _travelDescription;
}

@property (nonatomic, retain) NSMutableArray *advisorys;
@property (nonatomic, retain) NSString *detailTimeFormatted;
@property (nonatomic, retain) GEOFormattedString *duration;
@property (nonatomic, retain) GEOFormattedString *durationList;
@property (nonatomic, retain) GEOFormattedString *fareErrorMessage;
@property (nonatomic, readonly) bool hasDetailTimeFormatted;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) bool hasDurationList;
@property (nonatomic, readonly) bool hasFareErrorMessage;
@property (nonatomic, readonly) bool hasOverviewSubtitle;
@property (nonatomic, readonly) bool hasPlanningDescription;
@property (nonatomic, readonly) bool hasServiceGap;
@property (nonatomic, readonly) bool hasTravelDescription;
@property (nonatomic, retain) GEOFormattedString *overviewSubtitle;
@property (nonatomic, retain) GEOFormattedString *planningDescription;
@property (nonatomic, retain) GEOFormattedString *serviceGap;
@property (nonatomic, retain) GEOFormattedString *travelDescription;

+ (Class)advisoryType;

- (void)addAdvisory:(id)arg1;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisorys;
- (unsigned long long)advisorysCount;
- (void)clearAdvisorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailTimeFormatted;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)durationList;
- (id)fareErrorMessage;
- (bool)hasDetailTimeFormatted;
- (bool)hasDuration;
- (bool)hasDurationList;
- (bool)hasFareErrorMessage;
- (bool)hasOverviewSubtitle;
- (bool)hasPlanningDescription;
- (bool)hasServiceGap;
- (bool)hasTravelDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)overviewSubtitle;
- (id)planningDescription;
- (bool)readFrom:(id)arg1;
- (id)serviceGap;
- (void)setAdvisorys:(id)arg1;
- (void)setDetailTimeFormatted:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDurationList:(id)arg1;
- (void)setFareErrorMessage:(id)arg1;
- (void)setOverviewSubtitle:(id)arg1;
- (void)setPlanningDescription:(id)arg1;
- (void)setServiceGap:(id)arg1;
- (void)setTravelDescription:(id)arg1;
- (id)travelDescription;
- (void)writeTo:(id)arg1;

@end
