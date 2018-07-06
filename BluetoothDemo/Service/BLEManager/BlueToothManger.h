//
//  BlueToothManger.h
//  BluetoothDemo
//
//  Created by zhangyingjie on 2018/6/29.
//  Copyright © 2018年 zhangyingjie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define VirtualPeripheral_UUID @"9326E5CF-D291-495E-915C-20379665D68D"


@interface BlueToothManger : NSObject <CBCentralManagerDelegate,CBPeripheralDelegate>

+ (instancetype)shareInstance;

//系统蓝牙设备管理对象，可以把他理解为主设备，通过他，可以去扫描和链接外设
@property (nonatomic, strong) CBCentralManager *manager;
//用于保存被发现设备
@property (nonatomic, strong) NSMutableArray *peripherals;

- (void)searching;

@end
