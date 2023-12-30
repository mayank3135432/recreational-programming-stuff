#include<stdio.h>
#include<stdlib.h>
int func(int x){
    if(x%2==0) return(1);
    return(0);
}
void main(){
    printf("%d",func(3));
}