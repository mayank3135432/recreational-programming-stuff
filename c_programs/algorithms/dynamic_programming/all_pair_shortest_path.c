#include<stdio.h>
#define SIZE 9
#define X 10000

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
};



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
    int counter=0; 

    while(counter<SIZE){
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
        counter++;
        u=dequeue();//update source
    }
}

int A[SIZE][SIZE];
void allpaths(){
    int i,j,k;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            A[i][j]=cost[i][j];
        }
    }
    for(k=0;k<SIZE;k++){
        for(i=0;i<SIZE;i++){
            for(j=0;j<SIZE;j++){
                A[i][j]=((A[i][j]>(A[i][k]+A[k][j]))?(A[i][k]+A[k][j]):A[i][j]);
            }
        }
    }
}


int main(){
    int i,j;
    allpaths();
    for(i=0;i<SIZE;i++){
        printf("[");
        for(j=0;j<SIZE;j++){
            printf("%d,",A[i][j]);
        }
        printf("\b]\n");
    }
    return 0;
}