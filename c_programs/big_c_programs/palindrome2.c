#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[20];
int top=-1;
int size;
void push(char a){
    //top++;
    stack[++top]=a;
}
void pop(){
    top--;
}
int palin(char* q){
    int i;
    if(size%2==1){
        for(i=0;i<(size-1)/2;i++)
        push(q[i]);
        for(i=i+1;i<size;i++){
            if(q[i]==stack[top])
            pop();
            else
            return 0;
        }
    }
    else{
        for(i=0;i<(size)/2;i++)
        push(q[i]);
        for(i=i;i<size;i++){
            if(q[i]==stack[top])
            pop();
            else{
            return 0;
            }
        }
    }
    return 1;    
}

int main(void){
    char name[30];
    int i;
    printf("enter string [MAX 30 chars] ");
    gets(name);
    for(i=0;name[i]!=0;i++);
    size=i;
    printf("size is %d",i);
    if(palin(&name[0])==1)
    printf("\nstring is palindrome");
    else
    printf("\nstring is not palindrome\n");

    return 0;
}