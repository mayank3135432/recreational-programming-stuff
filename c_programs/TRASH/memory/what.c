#include<stdio.h>
#define BUFFER_SIZE 5
int main(){
    int i;
    char name[BUFFER_SIZE];
    for(i=0;i<BUFFER_SIZE;i++)
		scanf("%c",&name[i]);
    for(i=0;i<BUFFER_SIZE;i++){
        printf("%c",name[i]);
    }

   return 0;
}
/*
int main(){
    int i;
    int name[BUFFER_SIZE];
    for(i=0;i<BUFFER_SIZE;i++)
		scanf("%d",&name[i]);
    for(i=0;i<BUFFER_SIZE;i++){
        printf("%d",name[i]);
    }

    return 0;
}
*/