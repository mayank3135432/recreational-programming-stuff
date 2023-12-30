#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
int main(){
    int i;
    int A[MAX];
    for(i=0;i<MAX;i++){
        A[i]=i;;
    }
    int* pa=A;
    for(i=0;1;i++)
        printf("%p\t%d\n",pa+i,*(pa+i));

    return 0;
}