#include<stdio.h>

int hashmap(char x){
    if(97<=x&&x<=117) return(x-97);
    else if(119<=x&&x<=122) return(x-98);
    else if(65<=x&&x<=85) return(x-40);
    else if(87<=x&&x<=90) return(x-41);
    else return -1;
}
char invhashmap(int n){
    if(n>=0&&n<=20) return(n+97);
    else if(n>=21&&n<=24) return(n+98);
    else if(n>=25&&n<=45) return(n+40);
    else if(n>=46&&n<=49) return(n+41);
}
int main(){
    char i;
    for(i=97;i<=122;i++) printf("%c %d || %d --> %c\n",i,(int)i,hashmap(i),invhashmap(hashmap(i)));
    for(i=65;i<=90;i++) printf("%c %d || %d --> %c\n",i,(int)i,hashmap(i),invhashmap(hashmap(i)));
    return 0;
}