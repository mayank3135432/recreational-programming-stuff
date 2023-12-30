#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int size(char* S){
    int i;
    for(i=0;S[i]!=0;i++);

    return i;
}
void censor(char* S){
    int i,j;
    for(i=0;S[i]!=0;i++){
        if(S[i]=='f' || S[i]=='F'){
            if(S[i+1]=='u' || S[i+1]=='U'){
                if(S[i+2]=='c' || S[i+2]=='C'){
                    if(S[i+3]=='k' || S[i+3]=='K'){
                        for(j=i+1;j<=i+3;j++)
                        S[j]='*';
                        i=i+3;
                    }
                }
            }
        }
    }
}
int main(){
    int i;
    char name[100];
    printf("enter a string [max 100 chars]  ");
    fgets(name,100,stdin);

    i=size(name);
    printf("lenght of string is %d\n",i);

    censor(name);
    //fputs(name,stdin);
    for(int j=0;j<i;j++){
        printf("%c",name[j]);
    }
    printf("\n\n");
    return 0;
}