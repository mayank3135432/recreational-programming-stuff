#include<stdio.h>
typedef unsigned long long ll;

ll ifprime(ll num);//function to check whether given number is prime
ll nextprime(ll a);//function to find the least prime number that is greater than given number

int main(){
    ll i,p,N,w=0;
    p=2;//p will be the product of primes
    i=2;
    N=p+1;
    while(ifprime(N)==1){//loop ternimates if an N is composite
        N=p+1;
        printf("%llu\t%llu\n",N,ifprime(N));
        i=nextprime(i);
        
        p=p*i;//multiplying p by the next prime and setting the product as the new p
        w++;
    }

    return 0;
}

ll ifprime(ll num) {
	ll i, a=1;
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0) {
			a = 0;
			break;
		}
		else
			a = 1;
	}
    return(a);
}
ll nextprime(ll a){
    ll i;
    for(i=a+1;ifprime(i)==0;i++);
    return(i);
}