#include<stdlib.h>
#include<stdio.h>
//#include"lists.h"
struct list{
  void** item;
  int size_alloc;
  int size;
};
typedef struct list list;
void __init__(list* L);

void append(list* L, void* data);
void insert_at(list* L, void* data, int index);

void* pop(list* L);
void* remove_at(list* L, int index);

void print(list* L);
