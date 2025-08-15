#include <stdio.h>
#define false 0
#define true 1
int main(){
    int num = 0, prime_num_flag = true ;
    scanf(" %d", &num);
    for(int i=2; i<num; i++){
        if(num%i==0){
            prime_num_flag = false;
            break;
        } 
    }
    if(prime_num_flag)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}