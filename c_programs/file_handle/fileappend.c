/*
using write to file will overwrite already presesnt data.
to edit without overwriting ,use appened(a)
*/
/*
HOW TO APPENED
1)open fp in append mode
fp=fopen("abc.txt","a");
if abc.txt does'nt exist ,fopen() will return NULL
2)make a string str= to add to file
3)add string to file using fprintf(fp,"%s",str);
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* fp=NULL;
    fp=fopen("abc.txt","a");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }
    char str[50]="munnu_ate";
    fprintf(fp,"\t%s",str);

    printf("succesfully appended \n");
    fclose(fp);

    return 0;
}