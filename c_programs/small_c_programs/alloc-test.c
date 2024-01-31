#include<stdlib.h>
#include<stdio.h>
int main(){
  int* p = (int*)malloc(1);
  *p=-4;
  printf("%u\n",sizeof(*p));
  return 0;
}
