#include <stdio.h>
int main () {
    int times;
    int count;
    printf("enter times:");
    scanf("%d", &times);
    printf("N = %d\n", times);
    for(count=1;count <= times;count++) {
        printf("*");
    }
    return 0;
}