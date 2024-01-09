#include<stdio.h>
int main(){
  int number,prod;
  scanf("%d",&number);
  int i = 0;
  while(i<=20){
    prod = number*i;
    printf("%d*%d=%d\n",number,i,prod);
    i++;
  }
  return 0;
}
