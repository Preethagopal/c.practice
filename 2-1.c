#include <stdio.h>
int main(){
  int a[10]={10,20,30,40,50,60,70,80,90,100};
  int max = a[0];
  for(int i=1 ; i<10 ; i++ ) {
    if(a[i]>max){
      (max = a[i]);
    }
  }
printf("the largest number is  %d\n",max);
return 0;
}