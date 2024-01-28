/*figure out how can you condense multiple loops into a single one*/
#include<stdio.h>
int pov(int x,int y){
    int i,P=1;
    for(i=0;i<y;i++){
        P=P*x;
    }
    return(P);
}
void boot(int size){
    int i,k;
    for(i=0;i<pov(2,size);i++){
        for(k=0;k<size;k++){
            printf("%d ",(i%pov(2,(size-k)))/pov(2,size-k));
        }
        printf("\n");
    }
}
int main(){
    int p,q,r;
    /* for(p=1;p>=0;p--){
        for(q=1;q>=0;q--){
            for(r=1;r>=0;r--){
                printf("%d %d %d\n",p,q,r);
            }
        }
    } */
    boot(4);
    return 0;
}

