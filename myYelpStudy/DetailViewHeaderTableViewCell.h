//
//  DetailViewHeaderTableViewCell.h
//  myYelpStudy
//
//  Created by Tom on 6/3/17.
//  Copyright © 2017 Tom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
