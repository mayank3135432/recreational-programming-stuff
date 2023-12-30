#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 300
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
void censor2(char* S,char* word){
    int i,j;
    int sz=size(word)-1;
    for(i=0;S[i]!=0;i++){
        for(j=0;word[j]!=0;j++){
            if(S[i+j]==word[j]){
                j++;
            }
            else{
                break;
            }
            for(j=i;j<=i+sz;j++){
                S[j]='*';
            }
            i=i+sz-1;
        }
    }
}
int main(){
    int i;
    char name[MAX];
    printf("enter a string [max 100 chars]  ");
    fgets(name,MAX,stdin);

    i=size(name);
    printf("lenght of string is %d\n",i);

    censor2(name,"shit");
    censor2(name,"fuck");
    //fputs(name,stdin);
    for(int j=0;j<i;j++){
        printf("%c",name[j]);
    }
    printf("\n\n");
    return 0;
}