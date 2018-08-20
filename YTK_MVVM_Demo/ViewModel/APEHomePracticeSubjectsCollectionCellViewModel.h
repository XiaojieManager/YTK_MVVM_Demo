//
//  APEHomePracticeSubjectsCollectionCellViewModel.h
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface APEHomePracticeSubjectsCollectionCellViewModel : NSObject
@property (nonatomic, strong, nonnull) UIImage *image;
@property (nonatomic, strong, nonnull) UIImage *highlightedImage;
@property (nonatomic, strong, nonnull) NSString *title;
@property (nonatomic, strong, nonnull) UIColor *titleColor;
@property (nonatomic, strong, nonnull) UIColor *backgroundColor;

+ (nonnull APEHomePracticeSubjectsCollectionCellViewModel *)viewModelWithSubject:(nonnull APESubject *)subject;
+ (nonnull APEHomePracticeSubjectsCollectionCellViewModel *)viewModelForMore;

@end
