#include <stdio.h>
#include <math.h>

int compute(int num){
    int sum = 0;
    for(int i=1; i<num; i++){
        int i_copy = i;
        int digit_len = 0;
        int check_sum = 0;
        while((i_copy/=10)!=0)
            digit_len++;
        digit_len++;
        
        for(int j=0; j<digit_len; j++){
            int digit = (i / (int)pow(10, j)) % 10;
            check_sum += (int)pow(digit, digit_len);
        }
        if(check_sum==i){
            printf("%d\n", i);
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num = 0;
    scanf(" %d", &num);
    printf("%d", compute(num));
}