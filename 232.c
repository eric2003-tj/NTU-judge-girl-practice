#include <stdio.h>
#include <stdbool.h>
bool leap(int year){
  if(year%400==0||((year%4==0)&&(year%100!=0))){
    return true;
  }else{
    return false;
  }
}
int monthday(int year,int month){
  switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if(leap(year)){
            return 29;
        }else{
            return 28;
        }
  }
}
int weekday(int year,int month,int day,int firstday){
  if(month<=0 ||month>=13){
    return -1;
  }else if(day<=0 ||day>monthday(year,month)){
    return -2;
  }else{
    int sum = 0;
    for(int i=1;i<month;i++){
        sum+=monthday(year,i);
    }
    sum+=day;
    sum--;
    int rest = sum%7;
    int x = firstday+rest;
    if(x>6){
        x = x%7;
    }
    return x;
  }
}
int main(void){
  int year,firstday;
  scanf("%d%d",&year,&firstday);
  int n;
  scanf("%d",&n);
  int month,day;
  int array[n];
  for(int i=0;i<n;i++){
    scanf("%d%d",&month,&day);
    array[i] = weekday(year,month,day,firstday);
  }
  for(int j=0;j<n;j++){
    printf("%d\n",array[j]);
  }
}
