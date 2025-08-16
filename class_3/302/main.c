#include <stdio.h>
int compute(int score){
    if((score<0)||(score>100))  return -1;
    else if (score>=60) return score+5;
    else return score+10;
}

int main(){
    int score = 0;
    scanf(" %d", &score);
    printf("%d", compute(score));
}