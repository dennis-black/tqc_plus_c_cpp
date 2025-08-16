#include <stdio.h>
int compute(int *arr){
    int bigest = 0;
    for(int i=0; i<5; i++){
        if(arr[i]>bigest) bigest = arr[i];
    }
    return bigest;
}

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", compute(arr));
}