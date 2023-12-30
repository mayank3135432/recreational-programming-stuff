#include<stdio.h>
#define MAX 100
int A[MAX];
int size = 0;//number of elements in heap (default value zero)
int isheap(){
  for(int i=1;i<size;i++){
    if(A[i] > A[(i-1)/2]) return 0;
  }return 1;
}
void insert(int value){
  A[size]=value;
  int i = size;
  size++;
  int parent;
  while(i>0){
    parent = (i-1)/2;
    if(A[parent]<A[i]){
      int temp = A[parent];
      A[parent] = A[i];
      A[i] = temp;
    }else return;
    i = parent;
  }
}
void show(){
  if(size == 0){
    printf("[]\n");
    return ;
  }
  printf("[");
  for(int i=0;i<size;i++){
    printf("%d,",A[i]);
  }printf("\b]\n");
}
int main(){
  int i;
  for(int i=0;i<11;i++){
    show();
    insert(i);
  }

  return 0;
}
