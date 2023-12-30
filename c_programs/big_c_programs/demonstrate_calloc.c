#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i;
    printf("enter number of elemnts ");
    scanf("%d",&n);
    int* p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d ",i);
        scanf("%d",p+i);
    }
    int S=0;
    for(i=0;i<n;i++)
        S+=*(p+i);
    
    printf("\nsum is %d ",S);
    free(p);
}