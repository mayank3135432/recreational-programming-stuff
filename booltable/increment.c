#include<stdio.h>
#include<stdlib.h>
void inc(int*,int);
int main(){
    int i,count;
    int A[4]={0};
    for(count=0;count<16;count++){
        //printf("%d)",count);
        for(i=0;i<4;i++){
            printf("%d",A[i]);
        }
        printf("\n");
        inc(A,3);
    }
    return 0;
}
void inc(int* bin,int n){
    if(n==0){//edge case whenever MSB is 1;
        bin[n]=1;
        return;
    }
    if(bin[n]==0) bin[n]=1;
    else{
        bin[n]=0;
        inc(bin,n-1);
    }
}