#include <stdio.h>
int main(){
    int points[10];
    int counter[10];
    int error_count = 0;
    for(int i = 0; i<10; i++){
        scanf(" %d", &points[i]);
        counter[i] = 0;
        if ((points[i]<1)||(points[i]>6)){
            error_count++;
        }
    }
    for(int i = 0; i<10; i++){
        counter[points[i]]++;
    }
    for(int i = 1; i<7; i++){
        printf("number%d:%d\n", i, counter[i] );
    }
    printf("error:%d", error_count);
}