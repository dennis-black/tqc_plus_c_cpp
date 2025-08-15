#include <stdio.h>
int main(){
    int input = 0;
    scanf(" %d", &input);
    if((input<0)||(input>1)){
        printf("error");
        return 0;
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(input==0){
                printf("%d x %d = %d\t", i, j, i*j);
            } else {
                printf("%d x %d = %d\t", j, i, i*j);
            }
            if((i!=5)&&(j==5)) printf("\n");
        }
    }
    return 0;
}