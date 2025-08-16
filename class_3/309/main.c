#include <stdio.h>
#include <limits.h>
double compute(int dividen, int divider){
    return dividen/(double)divider;    
}

int main(){
    int dividen[3], divider[3];
    double smallest_value=__INT_MAX__;
    scanf(" %d\n%d\n%d", &dividen[0], &dividen[1], &dividen[2]);
    scanf(" %d\n%d\n%d", &divider[0], &divider[1], &divider[2]);
    for(int i=0; i<3; i++){
        if(compute(dividen[i], divider[i])<smallest_value) 
            smallest_value = compute(dividen[i], divider[i]);
    }
    printf("%.3lf", ((int)(smallest_value*1000+0.5))/1000.0);
}