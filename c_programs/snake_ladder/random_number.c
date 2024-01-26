// Program to test srand() and rand() functions

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,x,num;
  srand(time(NULL));
  for(i=0;i<10;i++){
    x = rand()%6 +1;
    printf("%d\n",x);
  }
  return 0;
}
