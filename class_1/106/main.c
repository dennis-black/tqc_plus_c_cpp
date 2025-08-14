#include <stdio.h>
#include <math.h>
int main(){
    int x_1, x_2, y_1, y_2;
    float distance;
    scanf(" %d\n%d\n%d\n%d", &x_1, &y_1, &x_2, &y_2);
    distance = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
    printf("%.2f", ((int)(distance*1000+0.5))/1000.0);
}