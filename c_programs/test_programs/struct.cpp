#include<stdio.h>
#include<stdlib.h>
struct intarray{
    //int* arr;
    int size;
    int* arr;
    int sum(void){
        return(size);
    }
    //can't make function in struct in C ):
    //trying out C++
};

typedef struct intarray intarray;
int main(){
    intarray X;
    X.size=31;
    printf("%d",X.sum());
    return 0;
}