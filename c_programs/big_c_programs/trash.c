#include <stdio.h>
#define MAX 5
 
void push();
void dequeue();
void display();
int queue[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("1. Enqueue an element to queue \n");
        printf("2. Dequeue an element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            push();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            printf("Wrong choice \n");
        } 
    } 
return 0;
} 
 
void push()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    { 
        printf("Enter the element to enqueue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue[rear] = add_item;
    }
} 
 
void dequeue()
{
    if (front == rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
       front = front + 1;
       printf("Element deleted from queue is : %d\n", queue[front]);
    }
} 
 
void display()
{
    int i;
    if (front == rear)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front+1; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 
