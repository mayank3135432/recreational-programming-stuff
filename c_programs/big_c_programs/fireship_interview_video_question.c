/*
7-buzz
3:-fizz
5:-buzz
3 and 5:-fizzbuzz
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%7==0)
            printf("bazz");
        else if(i%3==0 && i%5==0)
            printf("fizzbuzz");
        else if(i%3==0)
            printf("fizz");
        else if(i%5==0)
            printf("buzz");
        else
            printf("%d",i);
        printf("\n");
    }
    return 0;
}