#include<stdio.h>
#include<stdlib.h>

void convert(float x,int base,int acc){
    //int i=0;
    int d=(int)x;
    long double f=x-(long double)d;
    //begin converting integer part
    char* D=(char*)malloc(acc*sizeof(char));
    int* Dint=(int*)malloc(acc*sizeof(int));
    int i=0;
    while(d!=0){
        Dint[i]=d%base;
        d=d/base;
        i++;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",Dint[i]);
    }
    
    //now do frac part
    for(i=0;i<acc;i++){
        f=base*f;
        Dint[i]=(int)f;
        f=f-(long double)Dint[i];
    }
    printf(".");
    for(i=0;i<acc;i++){
        printf("%d",Dint[i]);        
    }
}

int main(){
    long double q=100.02;
    convert(q,8,12);

    return 0;
}