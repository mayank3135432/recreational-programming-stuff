/*2. Declare & initialize pointer variables using malloc ()*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int* pi=malloc(4);
    float* pf=malloc(sizeof(float));
    char* pc=malloc(sizeof(char));
    *pi=-7;
    *pf=-2.1;
    *pc='q';
    printf("\n%d",*pi);
    printf("\n%f",*pf);
    printf("\n%c",*pc);
}