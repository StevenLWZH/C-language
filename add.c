#include <stdio.h>
int main () {
    int num;
    int sum;
    printf("Enter number:");
    scanf("%d", &num);
    sum = ((1+num) * num/ 2);
    printf("%d", sum);
    return 0;
}