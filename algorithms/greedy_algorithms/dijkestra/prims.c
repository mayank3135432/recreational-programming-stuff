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
};/*
Given connected graph G, Find the min distance from source vertex (zero) to every other vertex in G
Using Dijkstra Algorithm
*/
/*
CURRENT ISSUE: terminating loop imediately after all vertices have been visited does not give the most optimal solution
                what should the condition to terminate the loop ?
*/
#include<stdio.h>
#define SIZE 9
#define X 10000

int cost[SIZE][SIZE]={
    {0,4,X,X,X,X,X,8,X},//0
    {4,0,8,X,X,X,X,11,X},//1
    {X,8,0,7,X,X,X,X,2},//2
    {X,X,7,0,9,14,X,X,X},//3
    {X,X,X,9,0,10,X,X,X},//4
    {X,X,4,14,10,0,2,X,X},//5
    {X,X,X,X,X,2,0,1,6},//6
    {8,11,X,X,X,X,1,0,7},//7
    {X,X,2,X,X,X,6,7,0}//8
};

int tree[SIZE][SIZE];

int queue[SIZE];//Priority Queue
int rear=-1;
//priority of queue[i] is dist[queue[i]]
int dist[SIZE];//initialise in to {X} in main function
int visited[SIZE]={0};//marks vertices as visited or not;
int allvisited(){
    int i;
    int and=1;
    for(i=0;i<SIZE;i++){
        and=and&&visited[i];
    }
    return and;
}
int iskali(){//checks whether the priority queue is empty
    return(rear==-1);
}
int isfull(){//checks whether the priority queue is full
    return(rear==SIZE-1);
}
void enqueue(int x){
    if((isfull())){
        printf("\n(\n");
        return;
    }
    rear++;
    queue[rear]=x;
}
int peek(){//returns index of lowest distance element in queue
    int i,ind=0;
    for(i=1;i<=rear;i++){
        if(dist[queue[i]]<dist[queue[ind]])
            ind=i;
    }
    return ind;
}
int dequeue(){//remove lowest distance vertex from queue and return vertex
    if(iskali()){
        printf("\n________________________QUEUE UNDERFLOW________________________\n");
        return 0;
    }
    int i,ind;
    ind=peek();
    int vertex=queue[ind];
    for(i=ind;i<rear;i++){
        queue[i]=queue[i+1];
    }
    rear--;
    return vertex;
}
void display(){//prints priority queue
    if(iskali()){
        printf("\n{}\n");
        return;
    }
    int i;
    printf("\n{");
    for(i=0;i<=rear;i++){
        printf("%d,",queue[i]);
   }
    printf("\b}\n");
}

void prim(){
    visited[0]=1;dist[0]=0;//taking 0 as initial source
    int u=0;
    int i,j;   

    while(1){
        for(i=0;i<SIZE;i++){
            if(cost[u][i]!=X && !visited[i]){
                enqueue(i);//queue up the i vertex if it has not already been visited
                visited[i]=1;
            }
        }
        if(allvisited() && iskali()) return;//terminate loop when all vertices are vistied
        u=dequeue();//update source
    }
}
int main(){
    int i,j;for(i=0;i<SIZE;i++) dist[i]=X;
    prim();
    printf("_______________________________________________________________________");
    printf("\n\n{");//print the distance array
        for(j=0;j<SIZE;j++) printf("%d,",dist[j]);
        printf("\b}\n");
    return 0;
}