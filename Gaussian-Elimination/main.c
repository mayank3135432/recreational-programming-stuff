#include<stdio.h>
#include<stdlib.h>
void display(double** M,int rows,int cols){
  int i,j;
  for(i=0;i<rows;i++){
    printf("{");
    for(j=0;j<cols;j++){
      printf("%lf,",M[i][j]);
    }printf("\b}\n");
  }printf("\n");
}
void solve(double** M,int rows,int cols){
  int piv=0;
  double tempp,tempk;
  while(piv<rows){
    tempp = M[piv][piv];
    for(int k=0;k<cols;k++) M[piv][k] /= tempp;
    for(int k=piv+1;k<rows;k++){
      tempk=M[k][piv];
      for(int i=piv;i<cols;i++) M[k][i] -= tempk*M[piv][i];
    }
    piv++;
  }
  //double* sol=(double*)malloc(rows*sizeof(double));
}

int main(){
  double** matrix = (double**)malloc(3*sizeof(double*));
  for(int i=0;i<3;i++) matrix[i] = (double*)malloc(4*sizeof(double));
  matrix[0][0]=1;matrix[0][1]=1;matrix[0][2]=-1;matrix[0][3]=-2;
  matrix[1][0]=2;matrix[1][1]=-1;matrix[1][2]=1;matrix[1][3]=5;
  matrix[2][0]=-1;matrix[2][1]=2;matrix[2][2]=2;matrix[2][3]=1;
  display(matrix,3,4);
  solve(matrix,3,4);
  display(matrix,3,4);
  return 0;
}