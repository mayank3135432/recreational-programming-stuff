// To check whether the stack grows up or down
#include<stdio.h>
int upgrow(int* other){
  int x;
  if(!other) return upgrow(&x); // if other is a null pointer, then push onto stack
  else return(&x>other);
}
int main(){
  printf("stack grows %s\n",upgrow(NULL)?"UP":"DOWN");
  return 0;
}
