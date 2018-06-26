//
//  TXYGameManager.h
//  GameSDK
//
//  Created by Tommy on 2018/6/7.
//  Copyright © 2018年 p0sixB1ackcat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXYloginView.h"

typedef void(^QuitBlock)(NSString *message);

typedef void(^quitBlock)(NSString *msg);

@interface TXYGameManager : NSObject


+(instancetype)shareManager;

//初始化
-(void)initGameKey:(NSString *)key;

//支付
-(void)payWithGoodsName:(NSString *)name Price:(NSString *)price game_trade_no:(NSString *)num producetID:(NSString *)ID;

//登录
-(void)loginViewShowAndBlock:(loginBlock)Block;

-(void)sideBarShow;

////退出账号
-(void)quitUserAccount:(QuitBlock)block;

@end
