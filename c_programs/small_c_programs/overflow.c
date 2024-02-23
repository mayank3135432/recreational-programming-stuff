#include<stdio.h>
int foo(int a){
  printf("%d\n",a);
  return foo(a+1);
}
int main(){
  foo(1);

  return 0;
}
