//
//  seql.h
//  *p
//
//  Created by shinyer on 2023/2/15.
//  Copyright © 2023 shinyer. All rights reserved.
//

#ifndef seql_h
#define seql_h

#include <stdio.h>
#define MaxSize 100 //定义最大长度

//struct SeqList{
//    int data[MaxSize];//用数组存储数据元素
//    int length;//顺序表的当前长度
//};//顺序表的类型定义
typedef struct {
    int data[MaxSize];//用数组存储数据元素
    int length;//顺序表的当前长度
}SeqList;//顺序表的类型定义

#endif /* seql_h */
