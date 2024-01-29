#include<stdio.h>
#include<stdlib.h>
#include "solve.h"
int main(){
  double** matrix = (double**)malloc(3*sizeof(double*));
  for(int i=0;i<3;i++) matrix[i] = (double*)malloc(4*sizeof(double));
  matrix[0][0]=1;matrix[0][1]=1;matrix[0][2]=-1;matrix[0][3]=-2;
  matrix[1][0]=2;matrix[1][1]=-1;matrix[1][2]=1;matrix[1][3]=5;
  matrix[2][0]=1;matrix[2][1]=1;matrix[2][2]=-1;matrix[2][3]=-2;
  display(matrix,3,4);
  double* v=solve(matrix,3,4);
  if(v==NULL){
    printf("no / infinitely many solutions\n");
    return 0;
  }
  display(matrix,3,4);
  for(int i=0;i<3;i++){
    printf("%lf,",v[i]);
  }
  return 0;
}
