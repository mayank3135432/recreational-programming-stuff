/*c program to find greatest common divisor of 2 numbers*/ 
#include<stdio.h>
int gcd(int x,int y){
    //if(!(x>0 && y>0)) return -1;
    while(x!=y){
        if(x>y){
            printf("flag %d\n",x);
            x=x-y;
        }
        else{
            printf("flag %d\n",y);
            y=y-x;
        }
    }
    return x;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",gcd(x,y));

    return 0;
}