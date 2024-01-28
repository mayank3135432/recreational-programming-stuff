#include<stdio.h>
void correct(int* a,int* b){
    if(*a>0) *a=1;
    else *a=0;

    if(*b>0) *b=1;
    else *b=0;
    
}
int AND(int a,int b){
    correct(&a,&b);
    return(a&b);
}
int OR(int a,int b){
    correct(&a,&b);
    return(a|b);
}
int NOT(int a){
    if(a>0) return 0;
    else return 1;
}
int IMPLIES(int a,int b){
    correct(&a,&b);
    return(OR(NOT(a),b));
    //return 0;
}
int BICOND(int a,int b){
    if(a==b) return 1;
    else return 0;
}
int f(int p,int q,int r){
    int x;
    x=IMPLIES(p,IMPLIES(q,r));
    return(x);
}
void maketable3(){
    int p,q,r;
    for(p=1;p>=0;p--){
        for(q=1;q>=0;q--){
            for(r=1;r>=0;r--){
                printf("%d %d %d | %d \n",p,q,r,IMPLIES(AND(IMPLIES(p,q),IMPLIES(p,r)),IMPLIES(r,q)));
            }
        }
    }
}
;
void maketable2(){
    int p,q,r;
    for(p=1;p>=0;p--){
        for(q=1;q>=0;q--){
            printf("%d %d | %d \n",p,q,IMPLIES(IMPLIES(p,q),IMPLIES(NOT(p),NOT(q))));
        }
    }
}
int main(){
    int a,b;
    a=5;
    b=1;
    int c=a&b;
    //printf("%d\n",~b);
    maketable2();
    return 0;
}