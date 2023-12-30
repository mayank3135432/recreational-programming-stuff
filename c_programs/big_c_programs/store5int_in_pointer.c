/*1. Write a ‘C’ program to store five integers (i.e.100, 200,300,400,500) using a single pointer variables*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int i;
    //printf("in pog");
    int* p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("enter %dth integer ",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
}