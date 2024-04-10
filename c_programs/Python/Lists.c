#include<stdlib.h>
#include<stdio.h>
#include"Lists.h"
typedef struct list list;

void __init__(list* L){
  L->item=(void**)malloc(sizeof(void*));
  L->size_alloc=1;
  L->size=0;
}
void morespace(list* L){
  L->item=(void**)reallocarray(L->item,2*L->size_alloc,sizeof(void*));
  L->size_alloc=2*L->size_alloc;
}
void lesserspace(list* L){
  L->item=(void**)reallocarray(L->item,L->size_alloc/2,sizeof(void*));
  L->size_alloc=L->size_alloc/2;
}
void append(list* L, void* data){
  if(L->size_alloc==L->size){
    morespace(L);
  }
  L->size++;
  (L->item[L->size-1])=data;
}

void insert_at(list* L, void* data, int index){
  if(L->size_alloc == L->size) morespace(L);
  L->size++;
  for(int i=L->size-2; i>=index; i--){
    L->item[i+1] = L->item[i];
  }
  (L->item[index])=data;
}

void* pop(list* L){
  if(L->size==0) return NULL;
  L->size--;
  if(L->size<L->size_alloc/2) lesserspace(L);
  return(L->item[L->size]);
}

void* remove_at(list* L, int index){
  if(L->size<=index || 0>index) return NULL;
  int* x = L->item[index];
  L->size--;
  for(int i = index; i < L->size; i++) L->item[i]=L->item[i+1];
  if(L->size<L->size_alloc/2) lesserspace(L);
  return x;
}
/*void print(list* L){
  printf("[");
  for(int i=0;i<L->size;i++){
    printf("%d,",**(L->item + i));
  }printf("]\n\n");
}*/
