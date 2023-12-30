#include<stdio.h>
#include<stdlib.h>
#define max 5
/*17/03/12023
A wild zero is appearing at the beginning of "stack" by default
cause of it is still unknown
*/

/*18/03/12023-11:30 [UPDATE]
the error has been found.I did not intialise top variable which is why erroro happened
*/
int stack[max]={};
int top=-1;//initialise top to -1
int q;

void display(void){
    int i;
    if(top<0)
        printf("-------------------QUEUE IS EMPTY-------------------\n");
    else{
        printf("{");
        for(i=0;i<=top;i++)
            printf("%d, ",stack[i]);
        printf("\b\b}\n");
    }
}
int main(){
    display();
    int i=0;
    int ch;
    //size=5
    while(1){
        printf("enter 1,2,3 or 4\n");
        scanf("%d",&ch);
        if(ch==3)
        display();
        else if(ch==4)
        return 0;
        else
        printf("\nplease enter 1,2,3 or 4\n");
    }
}