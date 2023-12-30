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
int checkeven(int num){
    char* S=numstr(num);
    int i,flag=0;
    for(i=0;S[i]!=0;i++){
        if(S[i]=='0') flag=swap(flag);
    }
    return flag;
}
int A(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else if(n>2) return(9*n*A(n-1));
}

int main(){
    
    //printf("%d\n",checkeven(10101));

    int num=10;//2digit
    int count=0;
    for(num=num;num<100;num++){
        if(checkeven(num)) count++;
    }
    printf("\n%d\t%d\n",count,A(2));

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