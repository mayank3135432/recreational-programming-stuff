#include<stdio.h>
void back(int n){
    int i;
    for(i=0;i<n;i++){
        printf("\b \b");
    }
}
void main(){
    char c;
    c=127;
    printf("hello world\n");
    back(5);
    printf("nice to see you ");
}