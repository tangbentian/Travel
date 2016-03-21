//
//  HeadBook.h
//  Travel
//
//  Created by  tarena008 on 16/3/17.
//  Copyright © 2016年 tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HeadBook : NSObject
//跳转界面
@property(nonatomic,copy)NSString *bookUrl;
//标题
@property(nonatomic,copy)NSString *title;
//背景图片
@property(nonatomic,copy)NSString *headImage;
//用户名
@property(nonatomic,copy)NSString *userName;
//用户头像
@property(nonatomic,copy)NSString *userHeadImg;
//开始时间
@property(nonatomic,copy)NSString *startTime;
//所用时间
@property(nonatomic,copy)NSString *routeDays;
//文章篇数
@property(nonatomic,assign)NSInteger bookImgNum;
//描述语言
@property(nonatomic,copy)NSString *text;
//喜爱人数
@property(nonatomic,assign)NSInteger likeCount;

+(instancetype)headBookWithDict:(NSDictionary *)dict;

@end
