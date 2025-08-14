#include <stdio.h>
int main(){
    int score = 0;
    scanf(" %d", &score);
    if ((score>100)||(score<0)) {
        printf("error");
        return 0;
    }
    (score>=60)? printf("pass\n") : printf("fail\n");
    (score%2==0)? printf("even") : printf("odd");
}