#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
 int n,i;
 scanf("%d%d",&n,&i);
 int power = 1;
 for(int j=0;j<i;j++){
    power*=n;
 }
 printf("%d\n",power);
}
