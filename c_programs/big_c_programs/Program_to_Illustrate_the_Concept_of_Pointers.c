#include<stdio.h>
int main(){
    int a=19;
    int* p;
    p=&a;
    printf("value at a is %d\n",a);
    printf("address of a is %u\n",&a);
    printf("value at address of a is %d\n",*&a);
    printf("value at p is %u\n",p);
    printf("value at p's refernceing is %d\n",*p);

    return 0;
}