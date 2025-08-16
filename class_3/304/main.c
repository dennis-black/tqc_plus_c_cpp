#include <stdio.h>
int compute(int *arr){
    int muitiples_of_three_count = 0;
    for(int i=0; i<6; i++){
        (arr[i]%3==0)? muitiples_of_three_count++: 0;
    }
    return muitiples_of_three_count;
}

int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", compute(arr));
}