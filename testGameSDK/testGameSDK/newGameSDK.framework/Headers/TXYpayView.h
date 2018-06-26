//
//  TXYpayView.h
//  GameSDK
//
//  Created by Tommy on 2018/6/14.
//  Copyright © 2018年 p0sixB1ackcat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TXYpayView : UIView

@property(nonatomic,strong)UIWebView *web;

@property(nonatomic,copy)NSString *productName;
@property(nonatomic,copy)NSString *productID;
@property(nonatomic,copy)NSString *tradeNum;
@property(nonatomic,copy)NSString *productPrice;

+(TXYpayView *)SharePayView;
-(void)loadDataWithName:(NSString *)productName  price:(NSString*)productPrice  Number:(NSString *)tradeNum;
-(void)hengpingFrame;
-(void)shupingFrame;

@end
