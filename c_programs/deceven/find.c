#include<stdio.h>
#include<stdlib.h>
#define MAX 100
char* numstr(int num){
    char* S=(char*)malloc(10*sizeof(char));
    int temp=num;
    int i;
    for(i=0;num!=0;i++){
        S[i]=(num%10)+48;
        num=num/10;
    }
    S[i]=0;
    return(S);
}

int swap(int x){
    if(x==0) return 1;
    else if(x==1) return 0;
}
int checkeven(char* S,int size){
    int i,flag=1;
    for(i=0;i<size;i++){
        if(S[i]=='0') swap(flag);
    }
    return flag;
}

int main(){

}
/*
int main(){
    int a=2153;
    char* X=numstr(a);
    for(int i=0;i<4;i++){
        printf("%c",X[i]);
    }
    //fputs(X,stdin);
    printf("\n");
    return 0;
}
*/