#include<stdio.h>
int foo(int a){
  if(a==0) return 0;
  printf("%d\n",a);
	return foo(a-1);
}
int main(int argc, char** argv){
  int a=0;
  sscanf(argv[1],"%d", &a);
  foo(a);
  return 0;
}
