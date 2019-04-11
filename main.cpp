//
//  main.cpp
//  homework3
//
//  Created by 劉世翔 on 2019/3/22.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float height,m,weight,BMI;
    printf("======該使用者的BMI資訊======\n");
    printf("您的身高為：");
    scanf("%f",&height);
    printf("您的體重為：");
    scanf("%f",&weight);
    printf("=============================\n");
    m=height/100;
    BMI=weight/(m*m);
    printf("B = %.2f\n\n",BMI);
    system("PAUSE");
    return 0;
    }

