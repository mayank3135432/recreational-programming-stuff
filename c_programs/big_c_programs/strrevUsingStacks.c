#include<stdio.h>
#include <string.h>
char stack[100];
int top=-1;
int size=100,k;
char x;

int isfull(){
    return((top==size-1)?1:0);
}
int iskali(){
    return((top==-1)?1:0);
}
void push(){
    if(isfull()){
        printf("----------------------STACK OVERFLOW----------------------\n");
    }
    else{
    top++;
    scanf("%c",&x);
    stack[top]=x;
    }
}
void pushf(char a){
    if(isfull()){
        printf("----------------------STACK OVERFLOW----------------------\n");
    }
    else{
    top++;
    stack[top]=a;
    }
}
char pop(){
    if(iskali()){
        printf("----------------------STACK UNDERFLOW----------------------\n");
        return 0;
    }
    else
    return(stack[top--]);
}
void display(){
    if(iskali())
    printf("EMPTY STACK\n");
    else{
        printf("\n");
        for(k=top;k>-1;k--)
        printf("%c\n",stack[k]);

        printf("\n");
    }
}

int main(){
    int i,j;
    char name[100];
    gets(name);
    for(i=0;name[i] != 0;i++){
        pushf(name[i]);
    }
    j=i;
    for(i=0;i<j;i++){
        name[i]=pop();
    }
    puts(name);

    return 0;
}