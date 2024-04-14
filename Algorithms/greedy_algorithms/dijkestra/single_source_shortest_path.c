/*
Given connected graph G, Find the min distance from source vertex (zero) to every other vertex in G
Using Dijkstra Algorithm
*/
/*
CURRENT ISSUE: terminating loop imediately after all vertices have been visited does not give the most optimal solution
                what should the condition to terminate the loop ?
*/
#include<stdio.h>
#define SIZE 5
#define X 10000

int cost[SIZE][SIZE]={/*cost adjacency matrix of given graph*/
    {X,10,5,X,X},
    {X,X,X,1,X},
    {X,3,X,9,2},
    {X,X,X,X,X},
    {2,X,X,6,X}
};//Output dist array must be {0,8,5,9,7} but I am getting {0,8,5,14,7}

int anothergraph[SIZE][SIZE];


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

void dijkstra(){
    visited[0]=1;dist[0]=0;//taking 0 as initial source
    int u=0;
    int i,j;
    while(1){
        for(i=0;i<SIZE;i++){
            if(cost[u][i]!=X){
                if(dist[u]+cost[u][i]<dist[i])
                    dist[i]=dist[u]+cost[u][i];//update dist between u and i
                if(!visited[i]){
                    enqueue(i);//queue up the i vertex if it has not already been visited
                    visited[i]=1;
                }
            }
        }
        if(allvisited() && iskali()) return;//terminate loop when all vertices are vistied
        u=dequeue();//update source
    }
}
int main(){
    int i,j;for(i=0;i<SIZE;i++) dist[i]=X;
    dijkstra();
    printf("_______________________________________________________________________");
    printf("\n\n{");//print the distance array
        for(j=0;j<SIZE;j++) printf("%d,",dist[j]);
        printf("\b}");
    return 0;
}