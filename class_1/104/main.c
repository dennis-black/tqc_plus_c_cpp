#include <stdio.h>
int main(){
    float a, b;
    scanf(" %f\n%f", &a, &b);
    printf("total=%.2f", ((int)((a+b)*1000+0.5))/1000.0 );
}