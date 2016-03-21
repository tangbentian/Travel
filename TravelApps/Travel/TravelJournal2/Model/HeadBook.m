//
//  HeadBook.m
//  Travel
//
//  Created by  tarena008 on 16/3/17.
//  Copyright © 2016年 tarena. All rights reserved.
//

#import "HeadBook.h"

@implementation HeadBook

+(instancetype)headBookWithDict:(NSDictionary *)dict{
    HeadBook *head = [HeadBook new];
    [head setValuesForKeysWithDictionary:dict];
    return head;
}

@end
