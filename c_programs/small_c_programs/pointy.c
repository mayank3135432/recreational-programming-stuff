#include<stdio.h>
int main(){
    int a;
    int* ptr;
    a=5;
    ptr=&a;
    printf("address of variable a is %d\n",&a);
    printf("value at variable a is %d\n",a);
    printf("address of variable ptr is %d\n",&ptr);
    printf("value of variable ptr is %d\n",ptr);
    printf("value at variable which is being pointed by ptr is %d\n",*ptr);
}