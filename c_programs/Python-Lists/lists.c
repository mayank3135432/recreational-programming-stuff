#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
typedef struct list list;

void __init__(list* L){
  L->item=(int**)malloc(sizeof(int*));
  L->size_alloc=1;
  L->size=0;
}
void morespace(list* L){
  L->item=(int**)reallocarray(L->item,2*L->size_alloc,sizeof(int*));
  L->size_alloc=2*L->size_alloc;
}
void lesserspace(list* L){
  L->item=(int**)reallocarray(L->item,L->size_alloc/2,sizeof(int*));
  L->size_alloc=L->size_alloc/2;
}
void append(list* L, int data){
  if(L->size_alloc==L->size){
    morespace(L);
  }
  L->size++;
  L->item[L->size-1]=(int*)malloc(sizeof(int));
  *(L->item[L->size-1])=data;
}

void insert_at(list* L, int data, int index){
  if(L->size_alloc == L->size) morespace(L);
  L->size++;
  for(int i=L->size-2; i>=index; i--){
    L->item[i+1] = L->item[i];
  }
  L->item[index]=(int*)malloc(sizeof(int));
  *(L->item[index])=data;
}

int* pop(list* L){
  if(L->size==0) return NULL;
  L->size--;
  if(L->size<L->size_alloc/2) lesserspace(L);
  return(L->item[L->size]);
}

int* remove_at(list* L, int index){
  if(L->size<=index || 0>index) return NULL;
  int* x = L->item[index];
  L->size--;
  for(int i = index; i < L->size; i++) L->item[i]=L->item[i+1];
  if(L->size<L->size_alloc/2) lesserspace(L);
  return x;
}
void print(list* L){
  printf("[");
  for(int i=0;i<L->size;i++){
    printf("%d,",**(L->item + i));
  }printf("]\n\n");
}
