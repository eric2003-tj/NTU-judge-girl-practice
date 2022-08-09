#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a<=0 || b<=0 ||c<=0){
    printf("0\n");
  }else if((a+b<=c)||(a+c<=b)||(b+c)<=a){
    printf("0\n");
  }else{
    printf("1\n");
  }
}
