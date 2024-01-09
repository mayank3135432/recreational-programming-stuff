#include<stdio.h>
typedef int (*int_func_int)(int);


int_func_int add(int x){
    int addx(int y){
        return(x+y);
    }
    return(&addx);
}
 int main(){
    int x=3;
    int y=-2;
    int num=add(x)(y);
    printf("%d\n",num);

    return 0;
}




