//
//  APEHomePracticeSubjectsCollectionViewCell.h
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APEHomePracticeSubjectsCollectionCellViewModel.h"

@interface APEHomePracticeSubjectsCollectionViewCell : UICollectionViewCell
- (void)bindDataWithViewModel:(APEHomePracticeSubjectsCollectionCellViewModel *)vm;

@end
