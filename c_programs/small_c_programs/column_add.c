#define N 10
#define M 9

#define xo 4
#define yo 3
int A[N][M];
void coladd(int x,int y){
  int i;
  for(i=0;i<N;i++){
    A[i][y] += A[i][x];
  }
}

int main(){
  int i,j=0;
  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      A[i][j]=i+j;
    }
  }
  coladd(xo,yo);

  return 0;
}
