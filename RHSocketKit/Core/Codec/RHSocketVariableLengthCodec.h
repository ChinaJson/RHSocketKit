//
//  RHSocketVariableLengthCodec.h
//  RHSocketKitDemo
//
//  Created by zhuruhong on 15/12/17.
//  Copyright © 2015年 zhuruhong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RHSocketCodecProtocol.h"

/**
 *  可变长度编码解码器
 *  数据包的前两个字节为数据帧的总长度（总长度包含自身的2个字节, total=2+frame）
 *  解码时，读取前两个字节，得到单帧的数据长度，然后读区对应长度的数据帧
 */
@interface RHSocketVariableLengthCodec : NSObject <RHSocketCodecProtocol>

/**
 *  头部长度数据的字节个数，默认为2
 */
@property (nonatomic, assign) int headLength;

/**
 *  头部长度数据解析时，是否需要高地位互换，默认yes
 */
@property (nonatomic, assign) BOOL headDataShouldSwap;

@end
