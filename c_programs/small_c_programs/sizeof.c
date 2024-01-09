#include<stdio.h>
typedef int (*int_func_int_int_int)(int,int,int);
typedef int (*int_func_int)(int);
struct point{
  int x;
  int y;
  char A[3];
};typedef struct point point ;
int foo(int n){
  return n;
}
int goo(int n,int m,int q){
  int sum = 0;
  for(int i=0;i<=n;i++) sum = sum + i;
  return (sum*m+q);
}
int main(){
  int_func_int ptrf = &foo;
  int_func_int_int_int ptrg = &goo;
  printf("%ld\n",sizeof(point));
  point P = {3,1,"abc"};
  printf("%ld\n",sizeof(ptrf));// prints 1. Is size of function 1 byte ?
  printf("%ld\n",sizeof(ptrg));// prints 1. Is size of function 1 byte ?
  return 0;
}
