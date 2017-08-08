//
//  YelpTableViewCell.h
//  myYelpStudy
//
//  Created by Tom on 5/28/17.
//  Copyright © 2017 Tom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
