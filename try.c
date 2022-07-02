#include <stdio.h>
int main(){
    char name1,change ;
    printf("input char:");
    scanf("%c", &name1);
    change = name1 +32;
    printf("%c", change);
    return 0;
}