#include<stdio.h>
#include<stdlib.h>
int main(){
    long double x;
    char* str;
    fgets(str,100*sizeof(char),stdin);
    sscanf(str,"%Lf",&x);
    printf("%Lf",x);
    return 0;
}