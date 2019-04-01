//
//  CBaseControlFlow.c
//  CBaseCollection
//
//  Created by sola on 2019/4/1.
//  Copyright © 2019 sola. All rights reserved.
//

#include "CBaseControlFlow.h"


void rangebyNomber(int line)
{
    int number = 1;
    
    // 外层循环控制行数
    for (int i = 0; i < 4; i ++) {
        
        // 控制每一行的空格数
        for (int j = 0; j < 4 - 1 - i; j ++) {
            
            printf(" ");
        }
        // 控制每一行输出的数字
        for (int j = 0; j < i + 1; j ++) {
            
            // 因为最后一个数是0，而不是10，所以对10取余
            printf("%d ", number % 10);
            // 每输出一个数，就++
            number ++;
        }
        printf("\n");
    }
    
}


int sumUnit(int line)
{
    int unit = 0;
    for (int i = 1; i <= line; i++) {
        unit += i;
    }
    
    return unit;
}
