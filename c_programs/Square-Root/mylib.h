#include<stdbool.h>

/*
pseudocode to caluclate sqrt(x) using newton's method

input a
let i=0, b=1
input n
while(i<n){
    y=b-(b*b-a)/2b
    b=y
    i++
}
*/
/*gives accurate sqrt for orders of magnitiude upto >10^25*/
double sqr(double a);

double powofint(double x, int n);

bool isprimme(int n);