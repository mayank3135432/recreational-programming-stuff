#include<stdio.h>
#include<stdlib.h>
#include "solve.h"
void display(double** M,int rows,int cols){
  int i,j;
  for(i=0;i<rows;i++){
    printf("{");
    for(j=0;j<cols;j++){
      printf("%lf,",M[i][j]);
    }printf("\b}\n");
  }printf("\n");
}
double* solve(double** M,int rows,int cols){ // row reduces given matrix and return solution vector
  int piv=0;
  double tempp,tempk,tempr;
  while(piv<rows){
    tempp = M[piv][piv];
    for(int k=0;k<cols;k++){
      M[piv][k] /= tempp;
      if(M[piv][k] != M[piv][k]){
        M=NULL;
        return NULL;
      }
    }
    for(int k=piv+1;k<rows;k++){
      tempk=M[k][piv];
      for(int i=piv;i<cols;i++) M[k][i] -= tempk*M[piv][i];
    }
    piv++;
  }
  piv--;
  while(piv>0){
    for(int k=piv-1;k>=0;k--){
      tempr=M[k][piv];
      M[k][piv] -= tempr*M[piv][piv];
      M[k][cols-1] -= tempr*M[piv][cols-1];
    }
    piv--;
  }
  double* sol=(double*)malloc(rows*sizeof(double));
  for(int k=0;k<rows;k++) sol[k]=M[k][cols-1];
  return(sol);
}

