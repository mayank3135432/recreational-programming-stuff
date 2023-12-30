#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* stack;
int main(){
    int i;
    stack[0]='h';
    stack[1]='i';
    stack[3]='\0';
    for(i=0;stack[i]!='\0';i++)
    printf("%c",stack[i]);

    return 0;
}