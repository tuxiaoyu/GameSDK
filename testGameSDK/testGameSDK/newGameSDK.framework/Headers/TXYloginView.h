//
//  TXYloginView.h
//  GameSDK
//
//  Created by Tommy on 2018/6/7.
//  Copyright © 2018年 p0sixB1ackcat. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^loginBlock)(NSString *uid ,NSString *token);


@interface TXYloginView : UIView
@property(nonatomic,strong)UIView  *bgView;
@property(nonatomic,strong)UITextField  *userNameTextField;
@property(nonatomic,strong)UITextField  *passwordTextField;
@property(nonatomic,strong)UIButton *loginBtn;
@property(nonatomic,strong)UIButton *registerBtn;
@property(nonatomic,strong)UIButton *startBtn;
@property(nonatomic,strong)UIButton *forgetPswBtn;
@property(nonatomic,strong)loginBlock  Block;

+(TXYloginView *)shareLoginView;

-(void)hengpingFrame;
-(void)shupingFrame;
@end
