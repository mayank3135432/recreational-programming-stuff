#include"stacks.h"
void initialise(stack* S,int siz){
    S->top=-1;
    S->size=siz;
    S->arr=(int*)malloc(siz*sizeof(int));
}
int isfull(stack S){
    return((S.top==S.size-1)?1:0);
}
int iskali(stack S){
    return((S.top==-1)?1:0);
}
void push(stack S,int num);
int pop(stack S);
void print(stack S);
void displaystacks(stack,stack,stack);