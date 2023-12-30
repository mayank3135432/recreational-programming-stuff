#include<stdio.h>
char clipher(char var,int shift){
    shift=shift%26;
    /* int x=(int)var+shift;
    if(97<=x&&x<=122) return (char)x;
    else if(123<=x&&x<=147) return (char)x; */
}
int main(){
    int i=0,j=0;
    char ch;
    for(i=0;i<56;i++){
        printf("%d|",i);
    }
    printf("\n");
    for(ch=97;ch<123;ch++){
        for(i=0;i<56;i++){
            printf("%c|",clipher(ch,i));
        }printf("\b \n");
    }
}