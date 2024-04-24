#include<stdio.h>
#include<time.h>
#include"queue.h"
int main(){
  srand(time(NULL));
  //printf("enter size of queue [MAX 100]: ");
  //scanf("%d",&size);
  int ch;
  printf("Press 1 to enqueue\nPress 2 to dequeue\nPress 3 to display\nPress 4 to quit\n\n");
label:
  printf("enter your choice ");
  scanf("%d",&ch);
  if(ch==1)
  enqueue(rand()%6);
  else if(ch==2){
    dequeue();
  }
  else if(ch==3){
    display();
  }
  else if(ch==4)
    return 0;
  else printf("please enter 1,2,3 or 4\n");
  goto label;
}
