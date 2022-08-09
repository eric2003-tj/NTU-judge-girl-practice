#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int s,f,t;
  scanf("%d%d%d",&s,&f,&t);
  float x,y,z;
  z = s-t;
  y = f*0.5 - 4*s+3*t;
  x = -0.5*f+4*s-2*t;
  if(x<0||y<0||z<0){
    printf("0\n");
  }else if((int)x!=x ||(int)y!=y ||(int)z!=z){
    printf("0\n");
  }else{
    printf("%d\n%d\n%d",(int)x,(int)y,(int)z);
  }
}
