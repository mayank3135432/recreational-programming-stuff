#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};
typedef struct point point;
int top=-1;
int size;
point* stack;//i intend to malloc this an array and store queens here
;
int max(int x,int y){
    return((x>y)?x:y);
}
int min(int x,int y){
    return((x<y)?x:y);
}
void push(point P){//pushes a queen onto stack
    top++;
    stack[top]=P;
}
point pop(){//pops a queen from stack
    return(stack[top--]);
}
int sizeofstack(){
    return(top+1);
}
point makepoint(int x,int y){//makes point from given inputs
    point S={x,y};
    return(S);
}
void inc(point* P){//increment point
    if(P->x<size-1){
        P->x++;
    }
    else{
        P->x=0;
        P->y++;
    }
}
void print(point P){
    printf("(%d,%d)\n",P.x,P.y);
}
point atindex(int n){//every square is given a number
//(0,0)->0,(1,0)->1,... and so on uptil (size-1,size-1)->size^2-1

    return(makepoint(n%size,n/size));//returns point at given index
}
int index(point P){
    return(P.x+size*P.y);//returns index of a given point
}
int issafefrom(point P,point queen){
//checks whether a given point is not under attack from given queen
    int i,j;
    if(P.x==queen.x || P.y==queen.y){//points horizontrally or vertically adjacent to queen
        return 0;
    }
    int m=min(queen.x,queen.y);//points in queen's primary diagonal 
    for(i=queen.x-m,j=queen.y-m;i<size && j<size;i++,j++){
        if(i==P.x && j==P.y){
            return 0;
        }
    }
    //from here, check whether P is in queen's secondary diagonal
    i=queen.x;j=queen.y;
    while(i<size && j>0){
        if(i==P.x && j==P.y){
            return 0;
        }
        i++;j--;
    }
    i=queen.x;j=queen.y;
    while(i>0 && j<size){
        if(i==P.x && j==P.y){
            return 0;
        }
        i--;j++;
    }
    return 1;
}
int issafe(point P){//checks whether P is safe from every queen on the stack
    int i;
    for(i=0;i<sizeofstack();i++){
        if(!issafefrom(P,stack[i]))
        return 0;
    }
    return 1;
}
int main(){
    printf("enter side lenght of chess board ");
    size=6;
    //scanf("%d",&size);
    stack=(point*)malloc(size*sizeof(point));
    push(makepoint(3,4));
    printf("\n%d\n",issafe(makepoint(5,2)));
    point A=makepoint(5,4);
    inc(&A);
    print(A);
    return 0;
}