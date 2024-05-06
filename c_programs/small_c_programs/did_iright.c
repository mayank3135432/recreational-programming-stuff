#include<stdio.h>
int main(){
  int A[2][2] = {{2,4},{5,7}};
  int **p = A;
  printf("%d\n",**p);
}
