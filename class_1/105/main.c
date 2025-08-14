#include <stdio.h>
#include <math.h>
int main(){
    int num_a, num_b;
    scanf(" %d\n%d", &num_a, &num_b);
    printf("result=%.2f",  ((int)((pow(num_a+num_b, 0.5))*1000+0.5)/1000.0));
}