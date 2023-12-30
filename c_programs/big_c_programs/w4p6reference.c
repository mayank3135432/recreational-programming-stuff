#include<stdio.h>
void main(){
    int A[3][3]={{3,2,1},
                 {-1,3,0},
                 {2,1,0}};
    int* p;
    p=&A[0][0];
    int i;
    for(i=0;i<10;i++){
        printf("%d ", *(p+i));
    }
}