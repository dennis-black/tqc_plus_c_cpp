#include <stdio.h>
int main(){
    int a, b, c;
    scanf(" %d\n%d\n%d", &a, &b, &c);
    if((a>=60)&&(a<100)){
        printf("1\n");
    } else {
        printf("0\n");
    }
    printf("%.2lf\n", ((int)(((b+1)/10.0)*100+0.5))/100.0 );
    (a>c)? printf("%d", a) : printf("%d", c); 
}