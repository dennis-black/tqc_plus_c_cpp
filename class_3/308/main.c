#include <stdio.h>
int compute(int num){
    if(num==0) return 0;
    else if(num==1) return 1;
    return compute(num-1) + compute(num-2); 
}

int main(){
    int num = 0;
    scanf(" %d", &num);
    for(int i=num; i>=1; i--){
        printf("fib(%d)=%d", i, compute(i));
        if(i!=1) printf("\n");
    }
}