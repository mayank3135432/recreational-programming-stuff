#include<stdio.h>
#define SIZE 9
#define X 10000

int cost[SIZE][SIZE]={
    {X,4,X,X,X,X,X,8,X},//0
    {4,X,8,X,X,X,X,11,X},//1
    {X,8,X,7,X,X,X,X,2},//2
    {X,X,7,X,9,14,X,X,X},//3
    {X,X,X,9,X,10,X,X,X},//4
    {X,X,4,14,10,X,2,X,X},//5
    {X,X,X,X,X,2,X,1,6},//6
    {8,11,X,X,X,X,1,X,7},//7
    {X,X,2,X,X,X,6,7,X}//8
};

int A[SIZE][SIZE];
void allpaths(){//Floyd Warshall Algorithm
    int i,j,k;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            A[i][j]=cost[i][j];
        }
    }
    for(k=0;k<SIZE;k++){
        for(i=0;i<SIZE;i++){
            for(j=0;j<SIZE;j++){
                A[i][j]=((A[i][j]>(A[i][k]+A[k][j]))?(A[i][k]+A[k][j]):A[i][j]);
            }
        }
    }
}


int main(){
    int i,j;
    allpaths();
    for(i=0;i<SIZE;i++){
        printf("[");
        for(j=0;j<SIZE;j++){
            printf("%d,",A[i][j]);
        }
        printf("\b]\n");
    }
    return 0;
}