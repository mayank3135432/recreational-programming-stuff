#include<stdio.h>
#define MAX 100
#define X 100000
#define SIZE 6
int cost[SIZE][SIZE]={
    {X,7,8,X,X,X},
    {7,X,3,5,X,X},
    {8,3,X,4,3,X},
    {X,5,4,X,2,5},
    {X,X,3,2,X,2},
    {X,X,X,5,2,X}
};

int tree[SIZE][SIZE]={
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X},
    {X,X,X,X,X,X}
};

int visited[SIZE]={0,0,0,0,0,0};
int allvisited(){
    int i;
    int and=1;
    for(i=0;i<SIZE;i++){
        and=and&&visited[i];
    }
    return and;
}

struct item{
    int row;
    int col;
    int cost;
};
typedef struct item item;
item queue[MAX];
//int front;
int rear=-1;
int isfull();
int iskali();
void enqueue();
int peek();
int dequeue();
void display();

int iskali(){
    return(rear==-1);
}
int isfull(){
    return(rear==MAX-1);
}
void enqueue(item x){
    if((isfull())){
        printf("\n________________________QUEUE OVERFLOW________________________\n");
        return;
    }
    rear++;
    queue[rear]=x;
}
int peek(){//returns index of highest priority element
    int i,ind=0;
    for(i=1;i<=rear;i++){
        if(queue[i].cost<queue[ind].cost)
            ind=i;
    }
    return ind;
}
int dequeue(){//remove highest priority element from queue
    if(iskali()){
        printf("\n________________________QUEUE OVERFLOW________________________\n");
        return 0;
    }
    int i,ind;
    ind=peek();

    tree[queue[ind].row][queue[ind].col]=queue[ind].cost;
    tree[queue[ind].col][queue[ind].row]=queue[ind].cost;

    for(i=ind;i<rear;i++){
        queue[i]=queue[i+1];
    }
    rear--;

    return queue[ind].col;
}

/* void display(){
    int i;
    printf("\n{");
    for(i=0;i<=rear;i++){
        printf("(%d,%d),",queue[i].data,queue[i].priority);
    }
    printf("\b}\n");
} */



void prim(){
    visited[0]=1;//taking 0 as initial source
    int u=0;
    int i,j,counter=0;

    while(counter<SIZE-1){
        for(i=0;i<SIZE;i++){
            if(cost[u][i]!=X && !visited[i]){
                //visited[i]=1;
                item op={u,i,cost[u][i]};
                enqueue(op);
            }
        }
        //if(allvisited() && iskali()) return;//terminate loop when all vertices are vistied
        u=dequeue();//update source
        visited[u]=1;
        counter++;
    }
}

int main(){
    int i,j;
    prim();
    for(i=0;i<SIZE;i++){
        printf("[");
        for(j=0;j<SIZE;j++){
            if(tree[i][j] != X) printf("%d,",tree[i][j]);
            else printf("X,");
        }
        printf("\b]\n");
    }
    return 0;
}