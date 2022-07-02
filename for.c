#include <stdio.h>
int main() {
    int num;
    int count;
    printf("PLZ enter number:");
    scanf("%d", &num);
    for (count = 1; count <= num; count++) {
        printf("%d\n", count);
    }
    return 0;
}