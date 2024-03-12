#include<stdio.h>
#define N 7
/* int G[N][N]={
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
}; */
int G[N][N]={
  {0,1,0,0,0,0,1},
  {1,0,1,0,0,0,0},
  {0,1,0,1,0,0,0},
  {0,0,1,0,1,0,0},
  {0,0,0,1,0,1,0},
  {0,0,0,0,1,0,1},
  {1,0,0,0,0,1,0}
};
int color[N]={0};
void chroma(){
    int i,u=1;
    color[0]=1;
    for(u=1;u<N;u++){
        color[u]=1;
        for(i=0;i<N;i++){
            if(G[u][i] && color[i]!=0 && color[i]==color[u]){
                color[u]=color[u]+1;
                i=0;
            }
        }
    }
}
int main(){
    chroma();
    printf("{");
    for(int i=0;i<N;i++){
        printf("%d,",color[i]);
    }
    printf("\b}\n");
    return 0;
}
