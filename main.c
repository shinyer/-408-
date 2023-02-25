//
//  main.c
//  *p
//
//  Created by shinyer on 2023/2/14.
//  Copyright © 2023 shinyer. All rights reserved.
//

//#include <stdio.h>

//double myPow(double x, int n){
//        if (n == 0)
//            return 1; // 递归出口
//        if (n == 1)
//            return x; // 递归出口
//        // if (n < 0)
//        //     return 1 / myPow(x, -n); // 此处n会越界
//        if (n == -1)
//            return 1 / x; // 只定义递归出口即可
//        if (n % 2 != 0)
//            return x * myPow(x, n - 1);
//        else
//            return myPow(x * x, n / 2);
//}

//bool isMydef(int n){
//
//}

//int main(){
//    printf(isPowerOfTwo(14));
//    return 0;
//}

#include <stdio.h>
#include "seql.h"

//typedef struct {
//    int data[100];//用数组存储数据元素
//    int length;//顺序表的当前长度
//}SeqList;//顺序表的类型定义

int Find(SeqList A,SeqList B){
    int i = 0,j = 0,k = 0;
    SeqList C;
    while (i < A.length && j < B.length) {
        if (A.data[i] < B.data[j]) {
            C.data[k++] = A.data[i++];
        }else{
            C.data[k++] = B.data[j++];
        }
    }
    while (i < A.length) {
        C.data[k++] = A.data[i++];
    }
    while (j < B.length) {
        C.data[k++] = B.data[j++];
    }
    C.length = k;
    return C.data[(A.length + B.length - 1) / 2];
}

int main()
{
    SeqList A = {{11, 13, 15, 17, 19}, 5};
    SeqList B = {{2, 4, 6, 8, 20}, 5};
    int X = Find(A,B);
    printf("%d\n",X);
    return 0;
}
