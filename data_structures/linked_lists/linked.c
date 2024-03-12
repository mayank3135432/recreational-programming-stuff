#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* link;
};typedef struct node node;
node* create(int x){
  node* new = (node*)malloc(sizeof(node));
  new->data = x;
  new->link = NULL;
  return new;
}
int print(node* header){
  node* ptr = header;
  int size = 0;
  while(ptr->link != NULL){
    printf("%d,",ptr->data);
    ptr = ptr->link;
    size++;
  }
  return size;
}
void insert(node* header, int x, int index){
  int i=0;
  node* ptr = header;
  for(i=0;i<index;i++){
    ptr = ptr->link;
  }
}
