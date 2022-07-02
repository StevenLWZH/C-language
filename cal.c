#include <stdio.h>
int main(){
    double a, b;
    char op; //由於符號是字元，所以要用char表示
    double answer;
    printf("Please enter your number: ");
     // 利用%c讀字元
    scanf("%lf%c%lf", &a, &op, &b);
    if (op == '+'){
        answer = a + b;}
    else if (op == '-'){
        answer = a - b;}
    else if (op == '*'){
        answer = a * b;}
    else{
        answer = a / b;}
    printf("Answer: %lf\n", answer);
    return 0;
}