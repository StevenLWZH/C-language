#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Please enter the lengths:"); // 若資料 1 2 3按照順序排序的話，則可以這樣簡化
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side3) {
        printf("Regular triangle\n");
    }
    if (side1 == side2 || side2 == side3) {
        printf("isoseles triangle\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3) {
        printf("Rectangular triangle\n");
    }
    return 0;
}
