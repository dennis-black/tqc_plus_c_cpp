#include <stdio.h>
#define true 1
#define false 0
int main(){
    int num = 0, is_prime;
    scanf(" %d", &num);
    for(int i=2; i<num; i++){
        is_prime = true;
        for(int j=2; j<i; j++ ){
            if(i%j==0){
                is_prime = false;
                break;
            }
        }
        if(is_prime) printf("%d ", i);
    }
    return 0;
}