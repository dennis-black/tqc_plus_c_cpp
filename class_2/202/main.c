#include <stdio.h>
int main(){
    int score = 0; 
    scanf(" %d", &score);
    if((score<0)||(score>100)) {
        printf("error");
        return 0;
    }
    if(score > 60){
        score += 10;
    } else {
        score += 5;
    }
    printf("%d", score);
}