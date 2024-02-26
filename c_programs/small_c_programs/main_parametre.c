#include<stdio.h>

int main(int arg, char** argv){
  int n=0;
  sscanf(argv[1],"%d",&n);
  printf("%d\n",n);

  return 0;
}
