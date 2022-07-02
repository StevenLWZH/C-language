#include <stdio.h>
int main() {
    int num;
    int count = 0;
    printf("PLZ enter number:");
    scanf("%d", &num);
    while (count <num) {
        count += 1;
        printf("%d\n",count);
    }
    return 0;
}