#include <stdio.h>
int main() {
    int num;
    int sum;
    int count = 0;
    printf("please enter the numbers (quit:0):");
    scanf("%d", &num);
    if (num == 0) {
        printf("N/A");
    } else {
    while (num != 0) {
        sum += num;
        count += 1;
        scanf("%d", &num);
    }
   
    printf("The average is %f\n", (float)sum/count);
    }
    return 0;

}