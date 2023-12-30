#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n;
    int* p;
    p=(int*)malloc(4*sizeof(int));
    for(i=0;i<4;i++){
        printf("enter %d element ",i);
        scanf("%d",p+i);
    }
    //first p has 4 spaces
    printf("extending p to 10...");
    p=realloc(p,10*sizeof(int));
    printf("\n\nenter 6 more elements ");
    for(i=i;i<10;i++){
        printf("enter %d element ",i);
        scanf("%d",p+i);
    }

    printf("\nfinal array is [");
    for(i=0;i<10;i++){
        printf("%d, ",*(p+i));
    }
    printf("\b\b]");
}