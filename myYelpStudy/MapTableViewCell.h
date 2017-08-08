//
//  MapTableViewCell.h
//  myYelpStudy
//
//  Created by Tom on 6/7/17.
//  Copyright © 2017 Tom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
