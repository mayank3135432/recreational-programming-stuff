#include<stdio.h>
#include"lists.h"
int main(){
  list L;
  __init__(&L);
  for(int i=0;i<100;i++){
    append(&L,i+1);
  }
  print(&L);
  for(int i=0;i<50;i++) pop(&L);
  print(&L);
  insert_at(&L, 42, 4);
  print(&L);
  remove_at(&L, -100);
  print(&L);

  return 0;
}

