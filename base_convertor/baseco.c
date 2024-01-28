#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
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

int main(){
    printf("###__________________Base Convertor from Decimal to base n__________________###\n\n\n");
    int i,base;
    long double x,n,d;
    char name[MAX];
    to_input_another_number:
    printf("\nenter d to input decimal\nenter f to input fraction ");
    char ch;
    scanf("%c",&ch);
    if(ch==102/*f*/){
        while ((getchar()) != 10);//to clear the buffer
        //apparently scanf leaves a charecter which fgets() takes as input ):
        printf("enter a number in fractional form (example: 31/12) ");
        
        
        fgets(name,MAX,stdin);//user inputs a fraction as string

        sscanf(name,"%Lf/%Lf",&n,&d);
        x=n/d;
        //printf("\n%Lf\t%Lf\t%Lf\n",n,d,x);
    }
    else if(ch==100/*d*/){
        printf("enter number in decimal ");
        scanf("%Lf",&x);
    }
    else {
        printf("please enter proper input ");
    }
    to_enter_different_base:
    printf("\nenter base to convert to ");
    scanf("%d",&base);
    convert(x,base,5);
    printf("\n");
    printf("enter 1 to convert to a different base\nenter 2 to input a diffrent number\nenter 3 to quit ");
    while ((getchar()) != 10);
    scanf("%c",&ch);
    if(ch==49){
        while ((getchar()) != 10);
        goto to_enter_different_base;
    }
    else if(ch==50){
        while ((getchar()) != 10);
        goto to_input_another_number;
    }
    else{
        return 0;
    }
}