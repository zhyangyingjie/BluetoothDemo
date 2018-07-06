//
//  BLEDebugViewController.m
//  BluetoothDemo
//
//  Created by zhangyingjie on 2018/7/6.
//  Copyright © 2018年 zhangyingjie. All rights reserved.
//

#import "BLEDebugViewController.h"
#import "BlueToothManger.h"

@interface BLEDebugViewController ()

@property (nonatomic, strong) BlueToothManger *manager;

@end

@implementation BLEDebugViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _manager = [BlueToothManger shareInstance];

    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}

- (IBAction)startSearch:(id)sender {
    
}

- (IBAction)closeController:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
