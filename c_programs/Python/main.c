#include<stdio.h>
#include"Lists.h"
int main(){
  list L;
  __init__(&L);
  for(int i=0;i<10;i++){
    int* ptr = (int*)malloc(sizeof(int));
    ptr[0]=i+1;
    append(&L,ptr);
  }
  for(int i=0;i<10;i++){
    int x = ((int*)L.item[i])[0]; 
    printf("%d,",x);
  }
  char* ptf = (char*)malloc(sizeof(char));ptf[0]='q';
  append(&L,ptf);
  printf("\n%c\n",((char*)L.item[10])[0]);

  return 0;
}

