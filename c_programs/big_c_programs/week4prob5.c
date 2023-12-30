#include<stdio.h>
void main(){
    int* p;
    int i,A[100];
    int n;
    p=A;
    printf("enter number of elemnts ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter element %d ",i);
        scanf("%d",p+i);
    }
    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    printf("\b]");
    printf("\nreverse\n");
    printf("[");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(p+i));
    }
    printf("\b]");

}