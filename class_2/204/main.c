#include <stdio.h>
int main(){
    int a = 0, b = 0, ans = 0;
    char operator = '\0';
    scanf(" %d\n%d\n%c", &a, &b, &operator);
    switch(operator){
        case '+': ans = a + b; break;
        case '-': ans = a - b; break;
        case '*': ans = a * b; break;
        default:
            printf("error");
            return 0;
    }
    printf("%d%c%d=%d", a, operator, b, ans);
}