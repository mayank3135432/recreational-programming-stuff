#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int size(char* S){
    int i;
    for(i=0;S[i]!=0;i++);

    return i;
}
int main(){
    int i;
    printf("enter a string [max 100 chars]  ");
    char name[100];
    gets(name);
    char* x=name;
    i=size(x);
    printf("%d",i);

    return 0;
}