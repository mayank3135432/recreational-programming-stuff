#include<stdio.h>
#include<stdlib.h>
char digit(int d1){//convert given number to it's corresponding digit
    if (d1 < 10)
		return(d1 + 48); //use digits [0 to 9] 
	else if (d1 <= 35 && 10 <= d1)
		return(d1 + 55); //use Capital case latin alphabets [A to Z] for digits [10 to 36]
	else if (d1 <= 62 && 35 < d1)
		return(d1 + 61); //use lower case latin alphabets [a to z] for digits [37 to 62]
    else
        exit(1);
}

void convert(long double num,int base,int acc){//converts base 10 to base n
    //num is the number to be converted
    //base is the base to be converted to
    //acc is the number of fractional digits
    if(base<2){//bases 0 and 1 are non-sensical
        printf("can't convert");//I hope to one day handle negitive bases
        return;
    }
    if(num<0){//if given number is negitive,
        printf("-");//keep a "-" sign in front of the string
        num=-num;//take the absolute value and then procced
    }
    int intpart=(int)num;//is the integer part of given number
    long double fracpart=num-(long double)intpart;//is the fractional part
    int i=0;
    if(base<62){//if bases less than 62
        //begin converting integer part
        char* D=(char*)malloc(acc*sizeof(char));//allocate array to store the digits
        if(intpart==0){
            printf("0");
            goto label;
        }
        while(intpart!=0){
            D[i]=digit(intpart%base);//number%base gives the ith digit(from ones place)
            intpart=intpart/base;//divide number by base and repeat
            i++;
        }
        for(i=i-1;i>=0;i--){//print array in reverse order
            printf("%c",D[i]);//this is because ones place is the first entry of array
        }
        label:
        //now do frac part
        if(fracpart != 0.00){
            for(i=0;i<acc;i++){
                fracpart=base*fracpart;//multiply number by the base
                int n=(int)fracpart;//the digit on the ones place will be the digit
                D[i]=digit(n);//re-use the D array used previously for integer part
                fracpart=fracpart-(long double)n;//subtract by that digit, make ones place zero
            }
            printf(".");//print the point
            for(i=0;i<acc;i++){
                printf("%c",D[i]);//print the array
            }
        }

        free(D);
    }
    else if(base>=62){//use mixed ratix
        int* Dint=(int*)malloc(acc*sizeof(int));
        while(intpart!=0){//same method as before except the digits will be represented in base 10
            Dint[i]=intpart%base;//and then seperated by ","
            intpart=intpart/base;
            i++;
        }
        for(i=i-1;i>=0;i--){
            printf("%d,",Dint[i]);
        }
        
        //now do frac part
        if(fracpart != 0){
            for(i=0;i<acc;i++){
                fracpart=base*fracpart;
                int n=(int)fracpart;
                Dint[i]=n;
                fracpart=fracpart-(long double)n;
            }
            printf("\b;");//";" instead of "."
            for(i=0;i<acc;i++){
                printf("%d,",Dint[i]);        
            }
            printf("\b ");
        }
        free(Dint);
    }
}
long double inputLf(){
    long double x;
    char* str;
    fgets(str,100*sizeof(char),stdin);
    sscanf(str,"%Lf",&x);

    return x;    
}

int main(){
    //long double x=inputLf();


    // long double x;
    // char* str;
    // fgets(str,100*sizeof(char),stdin);
    // sscanf(str,"%Lf",&x);
    // printf("%Lf\n",x);
    // convert(x,6,4);
    // return 0;

    int i;
    long double x;
    int B=6;
    printf("     ");
    for(i=2;i<21;i++)
        printf("%d             ",i);
    printf("\n\n");
    for(i=2;i<21;i++){
        x=1/((long double)i);
        printf("1/%d  ",i);
        for(B=2;B<21;B++){
            convert(x,B,10);
            printf("  ");
        }
        printf("\n");
    }

    return 0;

}

