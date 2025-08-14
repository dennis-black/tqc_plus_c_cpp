#include <stdio.h>
#define pi 3.1415
int main(){
    int d;
    double r, a;
    scanf("%d", &d);
    r = ((int)((d/2.0)*100+0.5))/100.0;
    a = ((int)((pi*r*r)*10000+0.5))/10000.0;
    printf("%-10d\n%-10.2f\n%-10.4f", d, r, a);
}