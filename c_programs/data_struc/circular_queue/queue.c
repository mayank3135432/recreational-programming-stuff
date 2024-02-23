#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int Q[MAX];
int rear = MAX-1, front = MAX-1;
int empty(){
  return rear==front;
}
void insert(int x){
  if(rear==MAX-1) rear=0;
  else rear++;

  if(rear==front){
    printf("\nOVERFLOW\n");
    exit(1);
  }
  else Q[rear]=x;
}

int delete(){
  if(rear==front){
    printf("UNDERFLOW");
    exit(1);
  }
  if(front == MAX-1) front=0;
  else front++;
  return Q[front];
}




