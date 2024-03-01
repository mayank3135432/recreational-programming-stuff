#include<stdio.h>
#include"queue.h"

int Q[MAX];
int rear = MAX-1, front = MAX-1;
/*
 * This circular queue is bad at handling full of empty conditions.
 * This is not much of an issue in actual usage as in real life an underflow or an overflow should never happen
 * But it still frustrates me when the queue becomes empty once full.
 * */
void enqueue(int x){
  int temp = rear;
  rear = (rear+1)%MAX;

  if(rear==front){
    printf("\nQUEUE IS FULL, ITEM NOT ENQUEUED\n");
    rear = temp; // optional line that resets the rear back
    return;
  }
  Q[rear]=x;
}

int dequeue(){
  if(rear==front){
    printf("\nUNDERFLOW\n");
    return 0;
  }
  front = (front+1)%MAX;
  return Q[front];
}
void display(){
  if(front==rear){
    printf("{}");
    return;
  }
  printf("{");
  for(int i=front;i!=rear;i=(i+1)%MAX){
    printf("%d,",Q[i]);
  }
  printf("\b}");
}



