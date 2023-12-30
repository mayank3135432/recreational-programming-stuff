#include<stdio.h>
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i=i+2){
        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}