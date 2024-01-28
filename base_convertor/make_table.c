#include<stdio.h>
#include<stdlib.h>
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

int main(){
    int i;
    for(i=0;i<63;i++){
        printf("%d\t%c\n",i,digit(i));
    }
    return 0;
}