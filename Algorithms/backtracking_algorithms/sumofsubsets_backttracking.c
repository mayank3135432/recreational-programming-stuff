#include<stdio.h>
#define N 7
int w[N]={5,10,12,13,15,18,25};
int m=30;
int X[N]={0};
void sumofsub(int s,int k,int r){
    if(s==m){
        for(int i=0;i<N;i++) printf("%d,",X[i]);
        printf("\n");
        return;
    }
    if(k==N) return;
    if(s+w[k]>m) return;
    X[k]=1;
    sumofsub(s+w[k],k+1,r-w[k]);
    X[k]=0;
    sumofsub(s,k+1,r-w[k]);
}
int main(){
    sumofsub(0,0,73);
}
/*OUTPUT
1,1,0,0,1,0,0,
1,0,1,1,0,0,0,
1,0,0,0,0,0,1,
0,0,1,0,0,1,0,
*/