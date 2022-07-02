#include <stdio.h>
int main () {
    int num;
    int count;
    printf("enter number:");
    scanf("%d", &num);
    for (count = 1; count <= num; count++) {
        if (count % 2 ==0 && count % 3 !=0) {
            printf("%d\n", count);
        }
    }
    return 0;
}