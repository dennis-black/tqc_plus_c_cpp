#include <stdio.h>
int main(){
    int start = 0, end = 0, odd_num_sum = 0;
    scanf(" %d\n%d", &start, &end);
    if(start>end) return 0;
    for(int i = start; i<=end; i++){
        if(i%2!=0) odd_num_sum+=i;
    }
    printf("%d", odd_num_sum);
}