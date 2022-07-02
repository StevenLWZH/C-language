#include <stdio.h>
int main() {
    int id;
    printf("ID:");
    scanf("%d", &id);
    // 必須要加break，否則會全部運行
    switch (id) {
        case 2:
            printf("John\n");
            break;
        case 13:
            printf("Mary\n");
            break;
        case 16:
            printf("Amy\n");
            break;
        default:
            printf("Not found");
            break;
    }
    return 0;
}