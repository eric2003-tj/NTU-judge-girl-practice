#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int s,f,t;
  scanf("%d%d%d",&s,&f,&t);
  int x,y,z;
  z = s-t;
  y = f*0.5 - 4*s+3*t;
  x = -0.5*f+4*s-2*t;
  printf("%d\n%d\n%d",x,y,z);

}
