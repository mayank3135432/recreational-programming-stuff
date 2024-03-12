#include<stdio.h>
int foo(){
  return(1);
}
int main(){
  extern int a;
  a=4;
  printf("%d\n",a);

  return 0;
}
