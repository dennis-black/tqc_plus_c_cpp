#include <stdio.h>
int compute(int num){
    if(num==0) return 1;
    else return num*compute(num-1) ;
}

int main(){
    int num = 0;
    scanf(" %d", &num);
    printf("%d!=%d", num, compute(num));
}