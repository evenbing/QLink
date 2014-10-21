//
//  SetupIpViewController.h
//  QLink
//
//  Created by 尤日华 on 14-10-19.
//  Copyright (c) 2014年 SANSAN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GCDAsyncSocket.h"
#import "GCDAsyncUdpSocket.h"
#import "SimplePingHelper.h"
#import "DataUtil.h"
#import "ActionNullClass.h"
#import "SVProgressHUD.h"

@interface SetupIpViewController : UIViewController<SimplePingDelegate,ActionNullClassDelegate>
{
    GCDAsyncUdpSocket *udpSocket_;
    GCDAsyncSocket *asyncSocket_;
}

@property(nonatomic,assign) int iTimeoutCount;

@property(nonatomic,strong) NSString *pName;
@property(nonatomic,strong) NSString *pPwd;
@property(nonatomic,strong) NSString *pKey;
@property(nonatomic,assign) BOOL pIsSelected;
@property(nonatomic,strong) Config *pConfigTemp;

-(void)load_setIpSocket:(NSDictionary *)dic;
-(void)actionNULL;

@end
