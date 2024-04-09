#include<stdlib.h>
#include<stdio.h>
//#include"lists.h"
struct list{
  int** item;
  int size_alloc;
  int size;
};
typedef struct list list;
void __init__(list* L);

void append(list* L, int data);
void insert_at(list* L, int data, int index);

int* pop(list* L);
int* remove_at(list* L, int index);

void print(list* L);
