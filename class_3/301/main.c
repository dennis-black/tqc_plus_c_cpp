#include <stdio.h>
int compute(int col, int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("*");
        }
        printf("\n");
    }
    return col*row;
}

int main(){
    int col = 0, row = 0;
    scanf(" %d\n%d", &col, &row);
    printf("%d", compute(col, row));
}