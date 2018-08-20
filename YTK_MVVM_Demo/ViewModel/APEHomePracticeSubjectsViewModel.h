//
//  APEHomePracticeSubjectsViewModel.h
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "APESubject.h"
#import "APEHomePracticeSubjectsCollectionCellViewModel.h"

@interface APEHomePracticeSubjectsViewModel : NSObject


//ViewModel 可以包含更小的 ViewModel，就像 View 可以有 SubView 一样。SubjectView 的内部是由一个UICollectionView实现的，所以我们也给了对应的 Cell 设计了一个 ViewModel。

@property (nonatomic, strong, nonnull) NSArray<APEHomePracticeSubjectsCollectionCellViewModel *> *cellViewModels;

//需要额外注意的是，ViewModel 一般来说会包含的显示界面所需要的所有元素，但粒度是可以控制。一般来说，我们只把会因为业务变化而变化的部分设为 ViewModel 的一部分，例如这里的 titleColor 和 backgroundColor 会因为主题不同而变化，但字体的大小（titleFont）却是不会变的，所以不需要事无巨细的都加到 ViewModel 里。
@property (nonatomic, strong, nonnull) UIColor *backgroundColor;

+ (nonnull APEHomePracticeSubjectsViewModel *)viewModelWithSubjects:(nonnull NSArray<APESubject *>*)subjects;

@end
