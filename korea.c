#include <stdio.h>
// 韓信點兵(全列)
// int main() {
//     int num;
//     int count;
//     printf("num?:");
//     scanf("%d", &num);
//     for(count=1; count<=num; count++) {
//         if (count%3 ==2 && count%5 ==3 && count%7 ==2) {
//             printf("%d\n", count);
//         }
//     }
//     return 0;
// }

// 韓信點兵(只列最大)
int main() {
    int num;
    int count;
    printf("num?:");
    scanf("%d", &num);
    for(count=num; num>=1; count--) {
        if (count%3 ==2 && count%5 ==3 && count%7 ==2) {
            printf("%d\n", count);
            break;
        }
    }
    return 0;
}