//
//  APEHomePraticeDataController.m
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import "APEHomePraticeDataController.h"

@interface APEHomePraticeDataController ()
@property (nonatomic,strong) NSArray *dataArr;

@end

@implementation APEHomePraticeDataController

- (void)requestSubjectDataWithCallback:(APECompletionCallback)callback{
//    请求数据，并返回 成功与失败，数据 model化 并放在 self.dataArr
    
}

- (NSArray<APESubject *> *)openSubjects{
    return self.dataArr;
}

@end
