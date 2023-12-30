#include<stdio.h>
void foo(int x){printf("number is %d\n",x);}
int main(){
    void (*fptr)(int)=&foo;
    (*fptr)(31);

    return 0;
}