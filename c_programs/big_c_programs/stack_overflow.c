#include<stdio.h>
int func(void){
    return(func());
}
int main(){
    int a;
    printf("hello");
    a=func();
    printf("hello");
    return 0;
}