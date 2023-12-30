#include<stdio.h>
typedef unsigned long long ll;
ll isprime(ll num) {
	ll i, a=1;
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0) {
            //printf("factor is %d\n",i);
			a = 0;
			break;
		}
		else
			a = 1;
	}
    return(a);
}
ll ifprime(ll n)//nore efficient, got from https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not/
{
    // Check if n=1 or n=0
    if (n <= 1)
        return 0;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return 1;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
 
    return 1;
}
ll factor(ll num) {
	ll i, a=1;
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0) {
            //printf("factor is %d\n",i);
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

ll main(){
	ll p=2,i;
	ll N=100000;
	double S=0;
	//printf("%llu",nextprime(3));
	//return 0;
	for(i=0;i<N;i++){
		S=S+1.0/((double)p);
		p=nextprime(p);
	}
	printf("%lf\n",S);

	return 0;
}
/*
ll main() {
    ll p = 2, i;
    ll N = 10;
    double S = 0;
    for (i = 0; i < N; i++) {
        S = S + 1.0 / p;
        printf("%Lf\n", (double)S);
        p = nextprime(p);
    }

    return 0;
}
*/
/*ll main() {
	ll a,c;
	for(a=2;a<100;a++){
        c=check(a);
        printf("%d\t%d\n",a,c);
    }

	return 0;
}*/
/*
ll main(){
    ll a,p;
    a=30047;      
    p=ifprime(a);
    printf("%llu\n",p);
	a=nextprime(a);
	printf("\n%d",a);

	return 0;
}
*/
