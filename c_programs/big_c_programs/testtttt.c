#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top,size/*size of stack*/;
int q;

void push(int a){
    top++;
    stack[top]=a;
}

void pushf(void){
    top++;
    printf("\nenter integer to store in stack ");
    scanf("%d",&q);
    stack[top]=q;
}

int pop(){
    //printf("popping %d\n",stack[top]);
    return(stack[top--]);
}

void push(){
    if(top>=max-1)
    printf("-------------------QUEUE OVERFLOW-------------------\n");
    else
    pushf();
}
int pop(){
    int data;
    int residue;
    if(top==-1){
        printf("-------------------QUEUE UNDERFLOW-------------------\n");
        return(1);
    }
    else if(top==0)
    return(pop());
    else{
        
        data=pop();
        residue=pop();
        push(data);
        return(residue);
    }
}
void display(void){
    int i;
    if(top<0)
        printf("-------------------QUEUE IS EMPTY-------------------\n");
    else{
        printf("{");
        for(i=0;i<=top;i++)
            printf("%d, ",stack[i]);
        printf("\b\b}\n");
    }
}
int main(){
    display();
    int i=0;
    int ch;
    //size=5
    printf("press 1 to input new element to stack\npress 2 to pop\npress 3 to display stack\npress 4 to display stack\n");
    while(1){
        printf("enter 1,2,3 or 4\n");
        scanf("%d",&ch);
        if(ch==1)
        push();
        else if(ch==2)
        pop();
        else if(ch==3)
        display();
        else if(ch==4)
        return 0;
        else
        printf("\nplease enter 1,2,3 or 4\n");
    }
}
