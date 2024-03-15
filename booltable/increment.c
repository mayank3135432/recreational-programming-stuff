#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
int pov2(int n){
    int N=1;
    for(int i=0;i<n;i++){
        N=2*N;
    }
    return(N);
}
bool* getbits(int n){
    bool* bits=(bool*)malloc(n*sizeof(bool));
    int k;
    for(k=pov2(n)-1;k>=0;k--){
        bits[k] = (n&(1<<k))>>k;
    }
    return bits;
}
int main(){
    int k,n;
    for(n=15;n>=0;n--){
        for(k=3;k>=0;k--){
            printf("%d",(n&(1<<k))>>k);
        }
        printf("\n");
    }
    return 0;
}

/* void inc(int* bin,int n){
    if(n==0){//edge case whenever MSB is 1;
        bin[n]=1;
        return;
    }
    if(bin[n]==0) bin[n]=1;
    else{
        bin[n]=0;
        inc(bin,n-1);
    }
} */