//
//  IGREntityExCatalog+CoreDataProperties.h
//  exTVPlayer
//
//  Created by Vitalii Parovishnyk on 5/10/16.
//  Copyright © 2016 IGR Software. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "IGREntityExCatalog.h"

NS_ASSUME_NONNULL_BEGIN

@interface IGREntityExCatalog (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *imgUrl;
@property (nullable, nonatomic, retain) NSNumber *isFavorit;
@property (nullable, nonatomic, retain) NSString *itemId;
@property (nullable, nonatomic, retain) NSNumber *latestViewedTrack;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *orderId;
@property (nullable, nonatomic, retain) NSDate *timestamp;
@property (nullable, nonatomic, retain) NSDate *viewedTimestamp;
@property (nullable, nonatomic, retain) NSString *catalogDescription;
@property (nullable, nonatomic, retain) IGREntityExChanel *chanel;
@property (nullable, nonatomic, retain) NSSet<IGREntityExTrack *> *tracks;

@end

@interface IGREntityExCatalog (CoreDataGeneratedAccessors)

- (void)addTracksObject:(IGREntityExTrack *)value;
- (void)removeTracksObject:(IGREntityExTrack *)value;
- (void)addTracks:(NSSet<IGREntityExTrack *> *)values;
- (void)removeTracks:(NSSet<IGREntityExTrack *> *)values;

@end

NS_ASSUME_NONNULL_END
