#include<stdio.h>
#include<stdlib.h>

/*
HOW TO READ FROM FILE
1) open file into read mode.
if file does'nt exist, it'll return NULL
2)fgetc(fp) returns character from file and advances file pointer to next char
Use loop to print all characters from file . 
while(! feof(fp)){...} feof checks whether given char is end of file
3)or use fgets(str,9,fp) returns 8 characters from file onto str.(the 9th character will be \0)
fgets() will stop once it encounters newline char
*/
int main(){
    FILE* fp=NULL;
    char ch;
    char str[50]; 

    fp=fopen("abc.txt","r");
    /*
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    */
    fgets(str,50,fp);
    printf("%s",str);
    printf("\n");

    fclose(fp);
}