#include<stdio.h>
struct myclass{
  int A[5];
};
typedef struct myclass myclass;
void print(int A[5]){
  printf("{");
  for(int i=0;i<5;i++){
    printf("%d",A[i]);
    if(i<5-1) printf(",");
  }printf("}");
}
