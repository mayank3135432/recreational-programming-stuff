#include<stdio.h>
#include<stdlib.h>
double sqr(double a){
    if(a<0){
        printf("ERROR not a real number ");
        exit(0);
    }
    int n=100;//n is the number of iterations newton's method is used
    int i;
    double y;//y will be the sqrt(a)
    double b=1;
    i=0;
    while(i<n){
        y=b-(b*b-a)/(2*b);//b-(f(b)/f'(b)) :f(x)=x*x-a
        b=y;
        i++;
    }
    return(y);
}
int isinteger(double x){
    int i;
    i = x==(double)(int)x;
    return(i);
}
int main(){
    int A[100];
    int *p;
    int n,i,sum;
    p=A;
    printf("enter size of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element %d ",i);
        scanf("%d",p+i);
    }
    sum=0;
    for(i=0;i<n;i++){
        if(isinteger(sqr((double)*(p+i)))==1)
        sum += *(p+i);
        else
        continue;
    }
    printf("\nsum of perfect squares in array is %d",sum);

    return 0;
}