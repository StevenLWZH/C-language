#include <stdio.h>
// 韓信點兵(印3個)
int main() {
    int num;
    int count;
    int time = 0;
    printf("num?:");
    scanf("%d", &num);
    for(count=1; count<=num && time<=3 ; count++) {
        if (count%3 ==2 && count%5 ==3 && count%7 ==2) {
            time++;
            if (time<=3){
            printf("%d\n", count);
            }
        }
    }
    return 0;
}