#include<stdio.h>
#include"array5.h"
int main(){
  int A[5] = {1,2,3,4,5};
  int* B;
  B=A;
  print(A);
  print(B);

  return 0;
}
