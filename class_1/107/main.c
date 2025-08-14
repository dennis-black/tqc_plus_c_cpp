#include <stdio.h>
int main(){
    int num[6];
    for(int i=0; i<6; i++){
        scanf(" %d", &num[i]);
    }
    printf("%10d %10d %10d\n%10d %10d %10d\n", num[0], num[1], num[2], num[3], num[4], num[5]);
    printf("%-10d %-10d %-10d\n%-10d %-10d %-10d", num[0], num[1], num[2], num[3], num[4], num[5]);
}