#include <stdio.h>
int compute(int *arr){
    int sum = 0;
    if(arr[1]==1){
        sum = arr[0]+arr[2];
    } else if(arr[1]==2){
        sum = arr[0]*arr[2];
    }
    return sum;
}

int main(){
    int arr[3];
    scanf(" %d\n%d\n%d", &arr[0], &arr[1], &arr[2]);
    printf("%d", compute(arr));
}