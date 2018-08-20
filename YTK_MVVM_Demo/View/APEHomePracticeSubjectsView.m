//
//  APEHomePracticeSubjectsView.m
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import "APEHomePracticeSubjectsView.h"
#import "APEHomePracticeSubjectsCollectionViewCell.h"

@interface APEHomePracticeSubjectsView ()
@property (nonatomic, strong, nullable) APEHomePracticeSubjectsViewModel *viewModel;
@property (nonatomic,strong) UICollectionView *collectionView;

@end
@implementation APEHomePracticeSubjectsView


- (void)bindDataWithViewModel:(APEHomePracticeSubjectsViewModel *)viewModel{
    self.viewModel = viewModel;
    self.backgroundColor = viewModel.backgroundColor;
    [self.collectionView reloadData];
    [self setNeedsUpdateConstraints];

}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    APEHomePracticeSubjectsCollectionViewCell *cell = [collectionView
                                                       dequeueReusableCellWithReuseIdentifier:@"Cell" forIndexPath:indexPath];
    if (0 <= indexPath.row && indexPath.row < self.viewModel.cellViewModels.count) {
        APEHomePracticeSubjectsCollectionCellViewModel *vm =
        self.viewModel.cellViewModels[indexPath.row];
        [cell bindDataWithViewModel:vm];
    }
    return cell;
}

@end
