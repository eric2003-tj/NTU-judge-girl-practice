#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int a;
  scanf("%d",&a);
  if(a%15==0 && a%105!=0){
    printf("0\n");
  }else{
    printf("1\n");
  }

}
