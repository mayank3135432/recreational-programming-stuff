#include<stdio.h>
int main(){
    int v[3] = { 10, 100, 200 };
    int* ptr;
    ptr = v;

    int i=0;
    while(i<3){
    printf("%d \n",*ptr);
    ptr++;
    i++;
    }

    return 0;
}