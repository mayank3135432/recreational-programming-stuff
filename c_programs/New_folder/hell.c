#include<stdio.h>
typedef unsigned long long int lld;
lld sum(lld x){
    return(x*(x+1)/2);
}
lld bas_sum(lld n){
    if(n<=1)
        return n;

        
    return(n+bas_sum(n-1));
}
int main(){
    printf("%llu",bas_sum(100000000000));
    return 0;
}