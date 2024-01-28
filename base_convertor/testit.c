#include<stdio.h>
#include<stdlib.h>
long double frac(int a,int b){
    return((long double)a/(long double)b);
}
long double fracf(long double a,long double b){
    return(a/b);
}
char digit(int d1){
    if (d1 < 10)
		return(d1 + 48); //use digits [0 to 9]

	else if (d1 <= 35 && 10 <= d1)
		return(d1 + 55); //use Capital case latin alphabets [A to Z] for digits [10 to 36]

	else if (d1 <= 62 && 35 < d1)
		return(d1 + 61); //use lower case latin alphabets [a to z] for digits [37 to 62]
    else
        exit(1);
}
int accu(int base){
    return((156-base)/24);
}
void convert(float x,int base,int acc){//I have decided to have a function determine what the best accuracy is for given base
    //int i=0;
    acc=accu(base);
    char* D=(char*)malloc(acc*sizeof(char));
    int* Dint=(int*)malloc(acc*sizeof(int));
    int d=(int)x;
    long double f=x-(long double)d;
    //begin converting integer part
    int n;
    int i=0;
    if(base<0){
        while(d!=0){
            D[i]=digit(d%base);
            d=d/base;
            i++;
        }
        for(i=i-1;i>=0;i--){
            printf("%c",D[i]);
        }
        
        //now do frac part
        for(i=0;i<acc;i++){
            f=base*f;
            n=(int)f;
            D[i]=digit(n);
            f=f-(long double)n;
        }
        printf(".");
        for(i=0;i<acc;i++){
            printf("%c",D[i]);        
        }
    }
    else if(base>=0){
        while(d!=0){
            Dint[i]=d%base;
            d=d/base;
            i++;
        }
        for(i=i-1;i>=0;i--){
            printf("%d,",Dint[i]);
        }
        
        //now do frac part
        for(i=0;i<acc;i++){
            f=base*f;
            n=(int)f;
            Dint[i]=n;
            f=f-(long double)n;
        }
        printf("\b;");
        for(i=0;i<acc;i++){
            printf("%d,",Dint[i]);        
        }
        printf("\b ");
    }


    free(D);free(Dint);
}

int main(){
    long double q=frac(400,3);
    convert(q,60,6);

    return 0;
}