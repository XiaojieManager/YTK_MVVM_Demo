//
//  APEHomePraticeViewController.m
//  YTK_MVVM_Demo
//
//  Created by Mac on 2018/8/16.
//  Copyright © 2018年 赵肖杰. All rights reserved.
//

#import "APEHomePraticeViewController.h"
#import "APEHomePraticeDataController.h"
#import "APEHomePracticeSubjectsView.h"



//我们会给每一个 ViewController 都创建一个对应的 DataController。 例如我们给主页建一个类起名叫APEHomePraticeViewController，同时他会有一个对应的 DataController 起名叫 APEHomePraticeDataController。同时我们把页面拆分为几个部分，每个部分有一个相对应的 SubView。代码如下：

@interface APEHomePraticeViewController ()<APEHomePracticeSubjectsViewDelegate>
@property (nonatomic, strong, nullable) UIScrollView *contentView;
@property (nonatomic, strong, nullable) APEHomePracticeSubjectsView *subjectsView;


@property (nonatomic, strong, nullable) APEHomePraticeDataController *dataController;

@end

@implementation APEHomePraticeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupContentView];
    [self fetchSubjectData];
}

//在 viewDidLoad 的时候，初始化好各个 SubView，并设置好布局：

- (void)setupContentView {
    self.contentView = [[UIScrollView alloc] init];
    [self.view addSubview:self.contentView];
    self.subjectsView = [[APEHomePracticeSubjectsView alloc] init];
    self.subjectsView.delegate = self;
    
    [self.contentView addSubview:self.subjectsView];
    // Layout Views ...
}

//接下来，ViewController 会向 DataController 请求 Subject 相关的数据，并在请求完成后，用获得的数据生成 ViewModel，将其装配给 SubjectView，完成界面渲染，代码如下：
- (void)fetchSubjectData {
    [self.dataController requestSubjectDataWithCallback:^(NSError *error) {
        if (error == nil) {
            [self renderSubjectView];
        }
    }];
}

- (void)renderSubjectView{
    APEHomePracticeSubjectsViewModel *viewModel = [APEHomePracticeSubjectsViewModel viewModelWithSubjects:self.dataController.openSubjects];
    [self.subjectsView bindDataWithViewModel:viewModel];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



#pragma mark APEHomePracticeSubjectsViewDelegate

- (void)homePracticeSubjectsView:(nonnull APEHomePracticeSubjectsView *)subjectView didPressItemAtIndex:(NSInteger)index {
    
}


@end
