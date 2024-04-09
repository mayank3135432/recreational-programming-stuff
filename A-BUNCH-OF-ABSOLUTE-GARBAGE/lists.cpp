#include<stdlib.h>
#include<iostream>
#include"lists.hpp"

template <typename T>
void list :: __init__(){
  item=(void**)malloc(sizeof(void*));
  size_alloc=1;
  size=0;
}
template <typename T>
void list ::morespace(){
  item=(void**)reallocarray(item,2*size_alloc,sizeof(int*));
  size_alloc=2*size_alloc;
}
template <typename T>
void list::lesserspace(){
  item=(void**)reallocarray(item,size_alloc/2,sizeof(int*));
  size_alloc=size_alloc/2;
}
template <typename T>
void list<T>::append(T* data){
  if(size_alloc==size){
    morespace();
  }
  size++;
  item[size-1]=(T*)malloc(sizeof(T));
  (item[size-1])=data;
}

template <typename T>
void list<T>::insert_at(T* data, int index){
  if(size_alloc == size) morespace();
  size++;
  for(int i=size-2; i>=index; i--){
    item[i+1] = item[i];
  }
  item[index]=(int*)malloc(sizeof(int));
  (item[index])=data;
}

template <typename T>
T* list<T>::pop(){
  if(size==0) return NULL;
  size--;
  if(size<size_alloc/2) lesserspace();
  return(item[size]);
}

template <typename T>
T* list<T>::remove_at(int index){
  if(size<=index || 0>index) return NULL;
  T* x = item[index];
  size--;
  for(int i = index; i < size; i++) item[i]=item[i+1];
  if(size<size_alloc/2) lesserspace();
  return x;
}

/*
template <typename T>
void list<T>::print(){
  printf("[");
  for(int i=0;i<size;i++){
    std::cout << item[i][0];
  }printf("]\n\n");
}*/
