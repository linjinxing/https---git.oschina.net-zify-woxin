//
//  Base64codeFunc.h
//  MyMobileServiceYN
//
//  Created by CRMac on 14/12/11.
//  Copyright (c) 2014年 asiainfo-linkage. All rights reserved.
//

#import <Foundation/Foundation.h>

/******字符串转base64（包括DES加密）******/
#define __BASE64( text ,key)        [Base64codeFunc base64StringFromText:text withKey:key]

/******base64（通过DES解密）转字符串******/
#define __TEXT( base64 ,key)        [Base64codeFunc textFromBase64String:base64 withKey:key]

@interface Base64codeFunc : NSObject

/************************************************************
 函数名称 : + (NSString *)base64StringFromText:(NSString *)text
 函数描述 : 将文本转换为base64格式字符串
 输入参数 : (NSString *)text    文本
 输出参数 : N/A
 返回参数 : (NSString *)    base64格式字符串
 备注信息 :
 **********************************************************/
+ (NSString *)base64StringFromText:(NSString *)text  withKey:(NSString *)key;

/************************************************************
 函数名称 : + (NSString *)textFromBase64String:(NSString *)base64
 函数描述 : 将base64格式字符串转换为文本
 输入参数 : (NSString *)base64  base64格式字符串
 输出参数 : N/A
 返回参数 : (NSString *)    文本
 备注信息 :
 **********************************************************/
+ (NSString *)textFromBase64String:(NSString *)base64  withKey:(NSString *)key;
@end