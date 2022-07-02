#include <stdio.h>
int main() {
    int answer = 4;
    int guess, count = 0;
    while (guess != answer) {
        printf("Please enter your guess:");
        count += 1;
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too large!\n");
        } else if (guess < answer) {
            printf("Too small!\n");
        } else {
            printf("Correct! (%d)\n", count);
        }
    }
    return 0;
}