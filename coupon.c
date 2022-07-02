# include <stdio.h>
int main() {
    int count, total;
    printf("How many people?:");
    scanf("%d", &count);
    if (count >= 10) {
        total = 300*count*0.8;
        printf("Total: %d\n",total);
    }
    if (count < 10) {
        total = 300*count;
        printf("Total: %d\n",total);
    }
    return 0;
}