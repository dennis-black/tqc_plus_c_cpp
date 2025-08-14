#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("%d+%d+%d=%d\n%.2f", a, b, c, a+b+c, (a+b+c)/3.0);
}