#include <stdio.h>
int main() {
    int number1, number2, number3, number4, min;
    printf("Please enter 4 numbers:");
    scanf("%d%d%d%d", &number1, &number2, &number3, &number4);
    min = number1;
    if (number2 < min){
        min = number2;
    }
    if (number3 < min){
        min = number3;
    }
    if (number4 < min){
        min = number4;
    }
    printf("The minimum is %d.\n", min);
    return 0;
}