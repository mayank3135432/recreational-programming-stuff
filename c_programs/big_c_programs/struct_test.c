#include<stdio.h>
#include<stdlib.h>
struct comp{
    int* A;
    int b;
};
typedef struct comp comp;
int main(){
    comp Q = {malloc(5*sizeof(int)),1};
    Q.A[0]=14;
    //Q.a=4;Q.b=1;
    printf("%d",Q.A[0]);

    return 0;
}