#include <stdio.h>
int main() {
    int answer = 4;
    int guess, count = 0;
    do {
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
    } while (guess != answer);
    return 0;
}