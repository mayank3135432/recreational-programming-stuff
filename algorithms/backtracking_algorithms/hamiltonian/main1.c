#include<stdio.h>
#include<stdlib.h>
/* #define n 5
int G[n][n]={
    {0,1,1,0,1},
    {1,0,1,1,1},
    {1,1,0,1,0},
    {0,1,1,0,1},
    {1,1,0,1,0}
}; */
#define n 11

int G[n][n] = {
  {0,1,0,1,1,0,0,0,1,0,0},
  {1,0,1,0,0,0,0,0,0,1,0},
  {0,1,0,1,0,0,1,0,0,0,1},
  {1,0,1,0,0,1,0,0,0,0,0},
  {1,0,0,0,0,1,0,1,0,0,0},
  {0,0,0,1,1,0,0,1,0,0,0},
  {0,0,1,0,0,1,0,1,0,0,0},
  {0,0,0,0,1,0,1,0,1,0,1}, //8
  {1,0,0,0,0,0,0,1,0,1,0},
  {0,1,0,0,0,0,0,0,1,0,1},
  {0,0,1,0,0,0,0,1,0,1,0}
};
//G must be a connected and undirected unweighed graph
void cycle(int k,int num,int* X,int* visited){
    //X is hamiltonian cycle
    //visited is a vector such thst forall i : visited[i]==1 <=> vertex i has been visited AND visited[i]==0 <=> vertex i has not been visited
    //k is the index of X to be filled
    //num is the current vertex
    X[k]=num;//mark num as the kth vertex
    visited[num]=1;//mark num as visited 
    if(k==n-1){//leaf node of solution soace tree
        if(G[X[k]][0]){//if there is a path from final vertex to 0, then print
            printf("{");
            for(int i=0;i<n;i++){
                printf("%d,",X[i]);
            }
            printf("\b}\n");
        }
    }
    else{//inner nodes of solution space tree
        for(int i=1;i<n;i++){//recurse into unvisited vertices that are connected to current vertex
            if(G[X[k]][i] && !visited[i]) cycle(k+1,i,X,visited);
        }
    }
    //Now Backtrack to prev node
    //before returning, mark present vertex as unvisited and remove it from X
    visited[num]=0;
    X[k]=0;
    return;
}
int main(){
    int* X=(int*)malloc(n*sizeof(int));
    int* visited=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){X[i]=0;visited[i]=0;}//initialise X and visited to 0
    cycle(0,0,X,visited);
    return 0;
}
