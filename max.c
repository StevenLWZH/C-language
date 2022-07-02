#include <stdio.h>
int main() {
    int number1, number2, number3, number4, max;
    printf("Please enter 4 numbers:");
    scanf("%d%d%d%d", &number1, &number2, &number3, &number4);
    max = number1;
    if (number2 > max){
        max = number2;
    }
    if (number3 > max){
        max = number3;
    }
    if (number4 > max){
        max = number4;
    }
    printf("The maximum is %d.\n", max);
    return 0;
}