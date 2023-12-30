#include<stdio.h>
#include<stdlib.h>
struct stack{
    int* arr;
    int top;
    int size;
};typedef struct stack stack;
int isfull(stack S);
int iskali(stack S);
void initialise(stack* S,int big);
void push(stack S,int num);
int pop(stack S);
void print(stack S);
void displaystacks(stack,stack,stack);