#include <stdio.h>
int main() {
    int num;
    int count;
    printf("num?:");
    scanf("%d", &num);
    for(count=1;count<=num;count++) {
        if(num%count == 0) {
            printf("%d\n", count);
        }
    }
    return 0;
}