//
//  APEHomePracticeSubjectsView.h
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class APEHomePracticeSubjectsView;
#import "APEHomePracticeSubjectsViewModel.h"


@protocol APEHomePracticeSubjectsViewDelegate <NSObject>

- (void)homePracticeSubjectsView:(nonnull APEHomePracticeSubjectsView *)subjectView
             didPressItemAtIndex:(NSInteger)index;

@end

@interface APEHomePracticeSubjectsView : UIView
@property (nonatomic, strong, nullable, readonly) APEHomePracticeSubjectsViewModel *viewModel;
@property (nonatomic, weak, nullable) id<APEHomePracticeSubjectsViewDelegate> delegate;

- (void)bindDataWithViewModel:(nonnull APEHomePracticeSubjectsViewModel *)viewModel;

@end
