#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main(void){
  int a,b,c,d,e;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  int v,s;
  v = a*b*c-(c-2*e)*d*(a-2*e)*2-(b-2*e)*d*(a-2*e)*2-(b-2*e)*(c-2*e)*d*2;
  s = (a*b+b*c+a*c)*2+8*d*(a+b+c-6*e);
  printf("%d\n%d",s,v);

}
