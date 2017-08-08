//
//  YelpDataStore.m
//  myYelpStudy
//
//  Created by Tom on 6/3/17.
//  Copyright © 2017 Tom. All rights reserved.
//


#import "YelpDataStore.h"
@implementation YelpDataStore

+ (YelpDataStore *)sharedInstance {
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}
@end

