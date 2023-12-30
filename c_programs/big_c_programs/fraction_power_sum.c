#include<stdio.h>
#include<math.h>
int main(){
    double x=10;
    double s=0;
    int n=20;
    int i=0;
    int count=100;
    printf("x^n is %lf\n",pow(x,(double)n));
    for(i=1;i<=count;i++){
        //printf("must compute ig\n");
        s=s+pow(x,(double)(n-i));
    }
    printf("\nsum of all lower powers is %lf",s);
    printf("\nprod is %lf",s*(x-1));

    return 0;
}