//
//  APEHomePraticeDataController.h
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//



//如我们之前所说，每一个 ViewController 都会有一个对应的 DataController，这一类 DataController 的主要职责是处理这个页面上的所有数据相关的逻辑，我们称其为 View Related Data Controller。


//DataController 这一层是一个灵活性很高的部件，一个 DataController 可以复用更小的 DataController，这一类更小的 DataController 通常只会包含纯粹的或是更抽象的 Model 相关的逻辑，例如网络请求，数据库请求，或是数据加工等。我们称这一类 DataController 为 Model Related Data Controller。
//Model Related Data Controller 通常会为上层提供正交的数据：

#import <UIKit/UIKit.h>

#import "APESubject.h"

typedef void(^APEDataCallback)(NSError *error ,id data);
typedef void(^APECompletionCallback)(NSError *error);

@interface APEHomePraticeDataController : NSObject

//我们定义了一个界面最终需要的数据的 property，这里是 openSubjects，这个 property 会存储用户打开的科目列表，他的类型是APESubject。
@property (nonatomic, strong, nonnull, readonly) NSArray<APESubject *> *openSubjects;


//// 我们还会定义一个接口来请求 openSubject 数据。
- (void)requestSubjectDataWithCallback:(nonnull APECompletionCallback)callback;

@end
