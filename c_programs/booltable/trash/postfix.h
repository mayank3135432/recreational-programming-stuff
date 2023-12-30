#include<stdio.h>
#include<stdlib.h>
#include"bool.h"
#define MAX 100
extern int top;//top being -1 means stack is kali
extern char stack[MAX];
char stacktop();
int iskali();
void printstack();
extern char infix[MAX];//string containing given input of infix boolean expression
extern char postfix[MAX];//string that will eventually contain the postfix equivalent of given boolean expression
extern int load;//treat postfix kind of like a stack

extern int evalstack[MAX];//int stack that will evaluate the postfix expression
extern int etop;
/* void status(){
    printf("stack top is %c\nstack size is %d\npostfix size is %d\n",stacktop(),top,load);
    printstack();
    printf("\n\n");
} */
int isoperator(char x);
int isletter(char x);;
int prec(char x);
void keep(char x);
char pop();
void push(char x);
void inttopos();
int eval2(int* P);