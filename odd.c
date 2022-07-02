#include <stdio.h>
int main() {
    int num;
    int count;
    printf("PLZ enter num:");
    scanf("%d", &num);
    for (count = 1;count <= num; count +=2) {
        printf("%d\n", count);
    }
    return 0;
}