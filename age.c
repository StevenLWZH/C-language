#include <stdio.h>
int main(){
    int integer1, integer2, integer3, sum;
    printf("Plaease enter the first integer:");
    scanf("%d", &integer1); //scanf 表示從鍵盤讀入資料
    printf("Please enter the second integer:");
    scanf("%d", &integer2); // %d 表示十進位整數
    printf("Please enter the third integer:");
    scanf("%d", &integer3); // & 是取址運算子
    sum = integer1 + integer2 + integer3 ;
    printf("Sum is %d.\n", sum); // 類似跳脫概念:"Sum is  ____.\n"
    return 0;
}