#include <stdio.h>
#define true 1
#define false 0
int compute(int num){
    int prime_flag = true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            prime_flag = false;
            break;
        }
    }
    return prime_flag;
}

int main(){
    int num = 0;
    scanf(" %d", &num);
    if(compute(num)==true){
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }
}