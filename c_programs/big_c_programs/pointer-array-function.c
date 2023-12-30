#include<stdio.h>
#include<stdlib.h>
void func(int* P){
    P[0]=0;
}
int main(void){
    int A[10];
    func(A);

    return 0;
}