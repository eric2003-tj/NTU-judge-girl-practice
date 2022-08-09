#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int score(int n){
  if(n<=0){
    return -100;
  }
   int score = 0;
   if(n%3==0){
    score+=3;
   }
   if(n%5==0){
    score+=5;
   }
   if(n>=100 && n<=200){
    score+=50;
   }else{
    score-=50;
   }
   return score;
}
int main(void){
  int n;
  scanf("%d",&n);
  int scorex;
  scorex = score(n);
  printf("%d",scorex);
}
