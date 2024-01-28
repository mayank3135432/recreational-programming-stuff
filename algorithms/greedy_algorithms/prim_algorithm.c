#include<stdio.h>
#include<stdlib.h>
#define X 100000
#define SIZE 6
int G[SIZE][SIZE]={
    {X,7,8,X,X,X},
    {7,X,3,5,X,X},
    {8,3,X,4,3,X},
    {X,5,4,X,2,5},
    {X,X,3,2,X,2},
    {X,X,X,5,2,X}
};
int visited[SIZE]={0,0,0,0,0,0};
int allreached(){
    int i=0;
    for(i=0;i<SIZE;i++){
        if(!visited[i]) return 0;
    }
    return 1;
}
//int top=-1;
int T[SIZE][SIZE]={
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X}
};
void putin(int a,int b){
    T[a][b]=G[a][b];
    //T[b][a]=G[b][a];
}
int* min(int row){
    /*
    returns vector contaiining
    the selected vertex (input index)
    the min edge from given vertex(row) to an unvisited vertex
    the vertex (matrix index) connected to input vertex via the min edge  
    */
    int lenght_of_minimum_edge=G[row][0];
    int i,index;
    for(i=2;i<SIZE;i++){
        if(G[row][i]<lenght_of_minimum_edge && !visited[i]){
            lenght_of_minimum_edge=G[row][i];
            index=i;
        }
    }
    int* ptr=(int*)malloc(3*sizeof(int));
    ptr[0]=lenght_of_minimum_edge;
    ptr[1]=row;
    ptr[2]=index;
    return ptr;
}
int mincost(){
    int i=0;
    int Sum=0;
    int* small=(int*)malloc(3*sizeof(int));
    small[0]=X;
    int* ptr;
    visited[i]=1;
    while(!allreached()){
        for(i=0;i<SIZE;i++){
            printf("\n%dth round\n",i);
            if(visited[i]){
                ptr=min(i);
                if(small[0]>ptr[0] && ptr[0]!=X){
                    small=ptr;
                }
            }
        }
        visited[small[2]]=1;
        putin(small[1],small[2]);
        Sum=Sum+small[0];
        //free(ptr);
    }
    free(small);
    return Sum;
}
int main(){
    int minimum_cost = mincost();
    printf("Minimum Cost of Minimum Spanning Tree: %d\n", minimum_cost);
    return 0;
}