//
//  YelpDataStore.h
//  myYelpStudy
//
//  Created by Tom on 6/3/17.
//  Copyright © 2017 Tom. All rights reserved.
//

// class for shared data

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;

@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end

