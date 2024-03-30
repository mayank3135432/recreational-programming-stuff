#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char num[1000];
    fgets(num, 1000, stdin);
    int hash[10]={0};
    for(int i=0;i<10;i++){
        for(int j=0; num[j];j++){
            if(num[j]-48==i) hash[i]++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",hash[i]);
    }
    
    return 0;
}
