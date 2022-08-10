#include <stdio.h>

int main(void){
  int special[3];
  int first[3];
  int lott;
  for(int i=0;i<3;i++){
    scanf("%d",&(special[i]));
  }
  for(int i=0;i<3;i++){
    scanf("%d",&(first[i]));
  }
  int sum = 0;
  while((scanf("%d",&lott))!=EOF){
    for(int i=0;i<3;i++){
        if(lott==special[i]){
            sum+=2000000;
            break;
        }else if(lott==first[i]){
            sum+=200000;
            break;
        }
        if(lott%10000000 == first[i]%10000000){
            sum+=40000;
            break;
        }
        if(lott%1000000 == first[i]%1000000){
            sum+=10000;
            break;
        }
        if(lott%100000 == first[i]%100000){
            sum+=4000;
            break;
        }
        if(lott%10000 == first[i]%10000){
            sum+=1000;
            break;
        }
        if(lott%1000 == first[i]%1000){
            sum+=200;
            break;
        }
    }
  }
  printf("%d\n",sum);

}
