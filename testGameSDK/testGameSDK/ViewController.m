//
//  ViewController.m
//  testGameSDK
//
//  Created by Tommy on 2018/6/11.
//  Copyright © 2018年 p0sixB1ackcat. All rights reserved.
//

#import "ViewController.h"
#import "newGameSDK.framework/Headers/TXYloginView.h"
#import "newGameSDK.framework/Headers/TXYGameManager.h"
#import "newGameSDK.framework/Headers/TXYpayView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor grayColor];
    



    UIButton *btn = [[UIButton alloc]initWithFrame:CGRectMake(100, 100, 200, 50 )];
    [btn  setTitle:@"登录" forState:UIControlStateNormal];
    btn.backgroundColor = [UIColor cyanColor];
    [btn addTarget:self action:@selector(loginAction:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    
    
    UIButton *btn2 = [[UIButton alloc]initWithFrame:CGRectMake(100, 200, 200 , 50)];
    [btn2 setTitle:@"支付" forState:UIControlStateNormal];
    [btn2 setBackgroundColor:[UIColor cyanColor]];
    [btn2 addTarget:self action:@selector(payAction:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn2];
}






-(void)loginAction:(UIButton *)sender{
    
    [[TXYGameManager shareManager]loginViewShowAndBlock:^(NSString *uid, NSString *token) {
       
        
        
    }];
    
}


-(void)payAction:(UIButton *)sender{
    
    [[TXYGameManager shareManager]payWithGoodsName:@"123" Price:@"0.01" game_trade_no:@"" producetID:@""];
}


-(void)viewWillLayoutSubviews{
   
    
    if ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationPortrait) {
        
        
        self.view.frame = [UIScreen mainScreen].bounds;
        
        
    }else{
   
        self.view.frame = [UIScreen mainScreen].bounds;
        
    }
    
    
}
@end
